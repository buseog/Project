#include "StdAfx.h"
#include "Potion.h"

CPotion::CPotion(void)
{
}

CPotion::CPotion(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType)
	:CItem(Name, iAttack, iDefense, iRecovery, iPrice, iCount, iType)
{
}
CPotion::~CPotion(void)
{
}

void CPotion::Render(void)
{
	cout << "�̸� : " << mt_Item.Name << endl;
	cout << "ȸ���� : " << mt_Item.iRecovery << "\t���� : " << mt_Item.iCount << "\t���� : " << mt_Item.iPrice << endl;
	cout << "=============================" << endl;
}

int CPotion::getCount(void)
{
	return mt_Item.iCount;
}
void CPotion::setaddCount(int _iCount)
{
	mt_Item.iCount += _iCount;
}

void CPotion::setsubCount(void)
{
	--mt_Item.iCount;
}