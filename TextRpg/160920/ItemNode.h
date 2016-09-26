#pragma once

#include "Item.h"
#include "Potion.h"

typedef struct ItemNode
{
	CItem* pItem;
	ItemNode* pNode;

	ItemNode();
	ItemNode(CItem* Item);
}ItemNode;
