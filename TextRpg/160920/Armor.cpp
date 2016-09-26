#include "StdAfx.h"
#include "Armor.h"

CArmor::CArmor(void)
{
}

CArmor::CArmor(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType)
	:CItem(Name, iAttack, iDefense, iRecovery, iPrice, iCount, iType)
{
}

CArmor::~CArmor(void)
{
}

void CArmor::Render(void)
{
	cout << "이름 : " << mt_Item.Name << endl;
	cout << "방어력 : " << mt_Item.iDefense << "\t가격 : " << mt_Item.iPrice << endl;
	cout << "=============================" << endl;
}