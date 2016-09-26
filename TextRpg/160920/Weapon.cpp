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
	cout << "�̸� : " << mt_Item.Name << endl;
	cout << "���ݷ� : " << mt_Item.iAttack << "\t���� : " << mt_Item.iPrice << endl;
	cout << "=============================" << endl;
}