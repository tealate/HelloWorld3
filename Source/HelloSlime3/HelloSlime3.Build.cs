// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HelloSlime3 : ModuleRules
{
	public HelloSlime3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
