// Copyright 2019 Guqing, Inc. All Rights Reserved.


#pragma once
#include "Runtime/SlateCore/Public/Widgets/SCompoundWidget.h"
#include "SkeletalMeshMerge.h"
#include "Engine/Classes/Engine/StaticMeshActor.h"
#include "Runtime/Slate/Public/Widgets/Text/SMultiLineEditableText.h"
#include "Runtime/Engine/Classes/Animation/SkeletalMeshActor.h"


class SMergeCore:public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SMergeCore) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	FReply OnMergeAllSelected();
	FReply OnMergeSelectedSkeletal();
	FReply OnMergeSelectedStaticMesh(); 
	FReply OnConvertSkeletalMeshToStaticMesh();
	void OnPathTextChanged(const FText& InText);
	void OnNameTextChanged(const FText& InText);


private:
	FString DefaultRoot = "/Game/";
	FString DefaultSavePath = "MergedSource/";
	FString DefaultSaveName = "MergedStaticMesh";
	UWorld * EditorWorld;
};
