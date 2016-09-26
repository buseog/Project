#include "StdAfx.h"
#include "Item.h"

CItem::CItem(void)
{
}

CItem::CItem(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType)
	:mt_Item(Name, iAttack, iDefense, iRecovery, iPrice, iCount, iType)
{
}

CItem::~CItem(void)
{
}

void CItem::Render(void)
{
}

int CItem::getType(void)
{
	return mt_Item.iType;
}

tItem CItem::getItemStat(void)
{
	return mt_Item;
}

int CItem::getCount(void)
{
	return 0;
}
void CItem::setaddCount(int _iCount)
{
}
void CItem::setsubCount(void)
{
}