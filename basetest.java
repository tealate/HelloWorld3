/* <applet code = "basetest.class" width="300" height = "300"></applet> */
import java.awt.*;          
import java.applet.*;
import java.util.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class basetest extends Applet{
    public class top {
        private int sidevol = 0;
        private Point pos;
        private List<Integer> index = new ArrayList<>();

        public top(Point pos) {
            this.pos = pos;
        }
    }
    public class side{
        private int pos1;
        private int pos2;
        private int banpos = -1;
        private boolean del = false;
        public side(int pos1, int pos2){
            this.pos1 = pos1;
            this.pos2 = pos2;
        }
    }
    public List<Integer> CreateTriangle(List<top> Top,List<side> Side){
        List<top> TopList = Top;
        List<side> SideList = Side;
        List<Integer> TriangleList = new ArrayList<>();
        int sidevol = SideList.size();
        int trivol;
        for(int a = 0; a < SideList.size(); a++){
            TopList.get(SideList.get(a).pos1).index.add(a);
            System.out.println(String.valueOf(SideList.get(a).pos1)+ "<=" + a);
            TopList.get(SideList.get(a).pos2).index.add(a);
            System.out.println(String.valueOf(SideList.get(a).pos2)+ "<=" + a);
        }
        for(top n : TopList)n.sidevol = 2;
        //System.out.println("4=" + String.valueOf(SideList.get(4).pos1));
        //System.out.println("4=" + String.valueOf(SideList.get(4).pos2));
        System.out.println("n");
        //for(int l = 0;l<TopList.get(4).index.size();l++)System.out.println(String.valueOf(TopList.get(4).index.get(l)));
        boolean frag = false;
        for(int i = 0; sidevol > 0 && i< 1000; i++){
            if(SideList.get(i).del)continue;
            System.out.println("");
            System.out.println("go"+ String.valueOf(i)+":");
            for(int j = 0; j < TopList.size();j++){
                if(SideList.get(i).pos1 == j || SideList.get(i).pos2 == j || SideList.get(i).banpos == j)continue;
                System.out.print(String.valueOf(j)+" ");
                frag = false;
                for(int k = 0;k < SideList.size() ;k++ ){
                    if(isIntersect(TopList.get(SideList.get(i).pos1).pos,TopList.get(j).pos,TopList.get(SideList.get(k).pos1).pos,TopList.get(SideList.get(k).pos2).pos)){
                        frag = true;
                        break;
                    }
                }
                if(frag)continue;
                for(int p = 0;p < SideList.size() ;p++ ){
                    if(isIntersect(TopList.get(SideList.get(i).pos2).pos,TopList.get(j).pos,TopList.get(SideList.get(p).pos1).pos,TopList.get(SideList.get(p).pos2).pos)){
                        frag = true;
                        break;
                    }
                }
                if(frag)continue;
                for(int t = 0; t < TopList.size(); t++){
                    if(t == SideList.get(i).pos1  || t == SideList.get(i).pos2 || t == j)continue;
                    if(isPointInsideTriangle(TopList.get(SideList.get(i).pos1).pos, TopList.get(SideList.get(i).pos2).pos, TopList.get(j).pos,TopList.get(t).pos)){
                        frag = true;
                        break;
                    }
                }
                if(frag)continue;
                //System.out.println(String.valueOf(i)+","+String.valueOf(sidevol));
                if(!frag){
                    TriangleList.add(SideList.get(i).pos1);
                    TriangleList.add(SideList.get(i).pos2);
                    TriangleList.add(j);
                    System.out.print("pos"+ String.valueOf(j));
                    SideList.get(i).del = true;
                    frag = false;
                    for(int c = 0;c < TopList.get(j).index.size(); c++){
                        if(SideList.get(i).pos1 == SideList.get(TopList.get(j).index.get(c)).pos1 || SideList.get(i).pos1 == SideList.get(TopList.get(j).index.get(c)).pos2){
                            System.out.print(" del"+String.valueOf(TopList.get(j).index.get(c)));
                            SideList.get(TopList.get(j).index.get(c)).del = true;
                            TopList.get(j).index.remove(c);
                            TopList.get(j).sidevol -= 1;
                            frag = true;
                            sidevol--;
                            break;
                        }
                    }
                    if(!frag){
                        System.out.print(" add" + String.valueOf(SideList.size()));
                        SideList.add(new side(SideList.get(i).pos1,j));
                        SideList.get(SideList.size()-1).banpos = SideList.get(i).pos2;
                        TopList.get(j).index.add(SideList.size()-1);
                        TopList.get(SideList.get(i).pos1).index.add(SideList.size()-1);
                        sidevol++;
                    }
                    frag = false;
                    for(int q = 0;q < TopList.get(j).index.size(); q++){
                        if(SideList.get(i).pos2 == SideList.get(TopList.get(j).index.get(q)).pos1 || SideList.get(i).pos2 == SideList.get(TopList.get(j).index.get(q)).pos2 ){
                            //if(SideList.get(i).pos2 == SideList.get(TopList.get(j).index.get(q)).pos1)System.out.println(String.valueOf(TopList.get(j).index.get(q)));
                            //if(SideList.get(i).pos2 == SideList.get(TopList.get(j).index.get(q)).pos2)System.out.println("a");
                            System.out.print(" del"+String.valueOf(TopList.get(j).index.get(q)));
                            SideList.get(TopList.get(j).index.get(q)).del = true;
                            TopList.get(j).index.remove(q);
                            TopList.get(j).sidevol -= 1;
                            frag = true;
                            sidevol--;
                            break;
                        }
                    }
                    if(!frag){
                        System.out.print(" add" + String.valueOf(SideList.size()));
                        SideList.add(new side(j,SideList.get(i).pos2));
                        SideList.get(SideList.size()-1).banpos = SideList.get(i).pos1;
                        TopList.get(j).index.add(SideList.size()-1);
                        TopList.get(SideList.get(i).pos2).index.add(SideList.size()-1);
                        sidevol++;
                    }
                    System.out.println("");
                    break;
                }
            }
            sidevol--;
        }
        return TriangleList;
    }
    public static boolean isIntersect(Point p1, Point p2, Point p3, Point p4) {
        double d1 = direction(p3, p4, p1);
        double d2 = direction(p3, p4, p2);
        double d3 = direction(p1, p2, p3);
        double d4 = direction(p1, p2, p4);
        if (p1.equals(p3) || p1.equals(p4) || p2.equals(p3) || p2.equals(p4)) {
            return false;
        }
        if (((d1 > 0 && d2 < 0) || (d1 < 0 && d2 > 0)) && ((d3 > 0 && d4 < 0) || (d3 < 0 && d4 > 0))) {
            return true;
        } else if (d1 == 0 && onSegment(p3, p4, p1)) {
            return true;
        } else if (d2 == 0 && onSegment(p3, p4, p2)) {
            return true;
        } else if (d3 == 0 && onSegment(p1, p2, p3)) {
            return true;
        } else if (d4 == 0 && onSegment(p1, p2, p4)) {
            return true;
        }
        return false;
    }
    
    private static double direction(Point pi, Point pj, Point pk) {
        return (pk.x - pi.x) * (pj.y - pi.y) - (pj.x - pi.x) * (pk.y - pi.y);
    }
    
    private static boolean onSegment(Point pi, Point pj, Point pk) {
        if (Math.min(pi.x, pj.x) <= pk.x && pk.x <= Math.max(pi.x, pj.x)
                && Math.min(pi.y, pj.y) <= pk.y && pk.y <= Math.max(pi.y, pj.y)) {
            return true;
        } else {
            return false;
        }
    }
    public static boolean isPointInsideTriangle(Point A, Point B, Point C, Point P) {
        double areaABC = Math.abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2.0);
        double areaPBC = Math.abs((P.x * (B.y - C.y) + B.x * (C.y - P.y) + C.x * (P.y - B.y)) / 2.0);
        double areaPCA = Math.abs((A.x * (P.y - C.y) + P.x * (C.y - A.y) + C.x * (A.y - P.y)) / 2.0);
        double areaPAB = Math.abs((A.x * (B.y - P.y) + B.x * (P.y - A.y) + P.x * (A.y - B.y)) / 2.0);
    
        double totalArea = areaABC;
        double EPSILON = 0.000001;
    
        if(Math.abs(totalArea - (areaPBC + areaPCA + areaPAB)) < EPSILON) {
            return true;
        } else {
            return false;
        }
    }
    public void paint(Graphics g) {
        List<top> pol = new ArrayList<>();
        List<side> tside = new ArrayList<>();
        Polygon polygon = new Polygon();
        Polygon hole = new Polygon();
        int x,y;
        int vol = 12;
        int worldsize = 100;
        int a =0;
        for (int i = 0; i < vol; i++)
        {
            pol.add(new top(new Point((int)((worldsize*2) + Math.cos(i*2*Math.PI/vol)*worldsize),((int)((worldsize*2) + Math.sin(i*2*Math.PI/vol)*worldsize)))));
            tside.add(new side(i,(i+1)%vol));
            polygon.addPoint(pol.get(i).pos.x,pol.get(i).pos.y);
        }
        //g.drawPolygon(polygon);
        int[] x1 = { 230, 206, 208, 228, 240 };
        int[] y1 = { 208, 208, 218, 222, 216 };
        for (int i = 0; i < x1.length; i++) {
            x1[i] = (x1[i] - 120) * 2;
            y1[i] = (y1[i] - 90) * 2;
        }
        //g.drawPolygon(new Polygon(x1, y1, 5));
        g.setColor(Color.GREEN);
        //g.drawLine(x1[a%x1.length],y1[a%y1.length],x1[(a+1)%x1.length],y1[(a+1)%y1.length]);
        g.setColor(Color.BLACK);

        int[] x2 = { 280, 256, 258, 290 };
        int[] y2 = { 208, 208, 218, 216 };
        for (int i = 0; i < x2.length; i++) {
            x2[i] = (x2[i] - 160) * 2;
            y2[i] = (y2[i] - 130) * 2;
        }
        //g.drawPolygon(new Polygon(x2, y2, 4));
        g.setColor(Color.GREEN);
        //g.drawLine(x2[a%x2.length],y2[a%y2.length],x2[(a+1)%x2.length],y2[(a+1)%y2.length]);
        g.setColor(Color.BLACK);
        int dex = pol.size();
        for(int b = 0; b < x1.length ; b++){
            pol.add(new top (new Point(x1[b],y1[b])));
            tside.add(new side(dex + b , dex + ((b + 1 )%x1.length)));
        }
        dex = pol.size();
        for(int b = 0; b < x2.length ; b++){
            pol.add(new top(new Point(x2[b],y2[b])));
            tside.add(new side(dex + b , dex + ((b + 1 )%x2.length)));
        }
        for(int c =0; c < tside.size(); c++){
            x = 0;//(int)((pol.get(tside.get(c).pos2).x - pol.get(tside.get(c).pos1).x)*0.5);
            y = 0;//(int)((pol.get(tside.get(c).pos2).y - pol.get(tside.get(c).pos1).y)*0.5);
            g.drawLine(pol.get(tside.get(c).pos1).pos.x,pol.get(tside.get(c).pos1).pos.y,pol.get(tside.get(c).pos2).pos.x + x,pol.get(tside.get(c).pos2).pos.y+ y);
        }
        List<Integer> tri = CreateTriangle(pol,tside);
        for(int p = 0; p < tri.size();p+=3){
            hole = new Polygon();
            hole.addPoint(pol.get(tri.get(p)).pos.x,pol.get(tri.get(p)).pos.y);
            hole.addPoint(pol.get(tri.get(p+1)).pos.x,pol.get(tri.get(p+1)).pos.y);
            hole.addPoint(pol.get(tri.get(p+2)).pos.x,pol.get(tri.get(p+2)).pos.y);
            //g.setColor(Color.BLACK);
            g.setColor(new Color((p*30)%255,(p*100)%255,0));
            if(p==0)g.setColor(Color.RED);
            g.fillPolygon(hole);
        }
        //System.out.println(String.valueOf(tri.size()));
        /*for(int p =0 ; p< tri.size(); p++){
            g.setColor(new Color(0,0,200));
            if(p==0)g.setColor(new Color(200,0,200));
            g.drawLine(pol.get(tri.get(p)).pos.x,pol.get(tri.get(p)).pos.y,pol.get(tri.get((p+1)%tri.size())).pos.x,pol.get(tri.get((p+1)%tri.size())).pos.x);
        }*/
        g.setColor(Color.RED);
        //g.drawLine(pol.get(0).pos.x,pol.get(0).pos.y,pol.get(7).pos.x,pol.get(7).pos.y);
    }
}
