#include "stdafx.h"
#include "ItemNode.h"

ItemNode::ItemNode()
	:pItem(), pNode(NULL)
{
}

ItemNode::ItemNode(CItem* Item)
	:pItem(Item), pNode(NULL)
{
}