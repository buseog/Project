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
	cout << "�̸� : " << mt_Item.Name << endl;
	cout << "���� : " << mt_Item.iDefense << "\t���� : " << mt_Item.iPrice << endl;
	cout << "=============================" << endl;
}