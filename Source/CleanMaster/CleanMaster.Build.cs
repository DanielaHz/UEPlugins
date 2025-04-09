// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CleanMaster : ModuleRules
{
	public CleanMaster(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PrivateIncludePaths.Add("CleanMaster/Private");
		PrivateIncludePaths.Add("CleanMasterCode/Private");

		PublicDependencyModuleNames.AddRange(
			new[]
			{
				"Core",
				"InputCore",
				"AssetRegistry",
				"UnrealEd"
				// ... add other public dependencies that you statically link with here ...
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new[]
			{
				"Projects",
				"InputCore",
				"EditorFramework",
				"UnrealEd",
				"ToolMenus",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore", "Blutility", "CleanMaster", "UMG", "UMGEditor", "WorkspaceMenuStructure", "DesktopPlatform", "EditorInteractiveToolsFramework"
				// ... add private dependencies that you statically link with here ...	
			}
		);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}