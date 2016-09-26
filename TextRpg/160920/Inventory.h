#pragma once

#include "ItemNode.h"

class CInventory
{
private:
	ItemNode* head;

public:
	void addInventory(CItem* pItem);
	void delInventory(int Input);
	void PrintInventory(void);
	int getItemType(int Input);
	CItem* findItem(int Input);
public:
	CInventory(void);
	~CInventory(void);
};
