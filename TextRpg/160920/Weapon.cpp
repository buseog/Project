#include "StdAfx.h"
#include "Weapon.h"

CWeapon::CWeapon(void)
{
}

CWeapon::CWeapon(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType)
	:CItem(Name, iAttack, iDefense, iRecovery, iPrice, iCount, iType)
{
}

CWeapon::~CWeapon(void)
{
}

void CWeapon::Render(void)
{
	cout << "이름 : " << mt_Item.Name << endl;
	cout << "공격력 : " << mt_Item.iAttack << "\t가격 : " << mt_Item.iPrice << endl;
	cout << "=============================" << endl;
}