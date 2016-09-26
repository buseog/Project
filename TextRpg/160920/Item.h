#pragma once
#include "define.h"

class CItem
{
protected:
	tItem mt_Item;

public:
	int getType(void);
	tItem getItemStat(void);

public:
	virtual void Render(void);
	virtual int getCount(void);
	virtual void setaddCount(int _iCount);
	virtual void setsubCount(void);

public:
	CItem(void);
	CItem(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType);
	~CItem(void);
};
