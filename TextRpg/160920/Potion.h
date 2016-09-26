#pragma once

#include "Item.h"

class CPotion	:public CItem
{
public:
	void Render(void);
	int getCount(void);
	void setaddCount(int _iCount);
	void setsubCount(void);
public:
	CPotion(void);
	CPotion(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType);
	~CPotion(void);
};
