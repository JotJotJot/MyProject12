// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject12 : ModuleRules
{
	public MyProject12(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
