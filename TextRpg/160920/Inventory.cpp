#include "StdAfx.h"
#include "Inventory.h"

CInventory::CInventory(void)
	:head(NULL)
{
}

CInventory::~CInventory(void)
{
}


void CInventory::addInventory(CItem* pItem)
{
	if (head == NULL)
	{
		head = new ItemNode(pItem);
	}
	else
	{
		ItemNode* pLast = NULL;

		for (ItemNode* pIterator = head; pIterator != NULL; pIterator = pIterator->pNode)
		{
			if (pItem->getType() == Potion)
			{
				if (pIterator->pItem->getItemStat().Name == pItem->getItemStat().Name)
				{
					pIterator->pItem->setaddCount(pItem->getCount());
					return;
				}
			}
			pLast = pIterator;
		}
		ItemNode* pNew = new ItemNode(pItem);
		pLast->pNode = pNew;
	}
}

void CInventory::delInventory(int Input)
{
	ItemNode* pLast = NULL;

	if (Input == 0)
	{
		head = head->pNode;
	}
	else
	{
		for (ItemNode* pIterator = head; pIterator != NULL; pIterator = pIterator->pNode)
		{
			if (Input == 0)
			{
				pLast->pNode = pLast->pNode->pNode;
				SAFE_DELETE(pIterator);
				break;
			}
			pLast = pIterator;
			--Input;
		}
	}
}

void CInventory::PrintInventory(void)
{
	int Number = 1;
	for (ItemNode* pIterator = head; pIterator != NULL; pIterator = pIterator->pNode)
	{
		cout << Number << ". ";
		pIterator->pItem->Render();
		++Number;
	}
}

int CInventory::getItemType(int Input)
{
	if (Input == 0)
	{
		return head->pItem->getType();
	}

	ItemNode* pLast = NULL;

	for (ItemNode* pIterator = head; pIterator != NULL; pIterator = pIterator->pNode)
	{
		if (Input == 0)
		{
			return pLast->pNode->pItem->getType();
			break;
		}
		pLast = pIterator;
		--Input;
	}
	return 0;
}

CItem* CInventory::findItem(int Input)
{
	if (Input == 0)
	{
		return head->pItem;
	}

	ItemNode* pLast = NULL;

	for (ItemNode* pIterator = head; pIterator != NULL; pIterator = pIterator->pNode)
	{
		if (Input == 0)
		{
			return pLast->pNode->pItem;
			break;
		}
		pLast = pIterator;
		--Input;
	}
	return 0;
}
