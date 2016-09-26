#include "StdAfx.h"
#include "Equip.h"

CEquip::CEquip(void)
:mp_EquipWeapon(NULL),
mp_EquipArmor(NULL)
{
}

CEquip::~CEquip(void)
{
}

void CEquip::EquipWeapon(CItem* pWeapon)
{
	mp_EquipWeapon = pWeapon;
}

void CEquip::EquipArmor(CItem* pArmor)
{
	mp_EquipArmor = pArmor;
}

CItem* CEquip::ChangeWeapon(CItem* pWeapon)
{
	CItem* pTemp = mp_EquipWeapon;
	mp_EquipWeapon = pWeapon;

	return pTemp;
}

CItem* CEquip::ChangeArmor(CItem* pArmor)
{
	CItem* pTemp = mp_EquipArmor;
	mp_EquipArmor = pArmor;

	return pTemp;
}

CItem* CEquip::returnWeapon(void)
{
	return mp_EquipWeapon;
}
CItem* CEquip::returnArmor(void)
{
	return mp_EquipArmor;
}

void CEquip::PrintEquip(void)
{
	if (mp_EquipWeapon == NULL)
	{
		cout << "���� : ����" << endl;
		cout << "===============" << endl;
	}
	else
	{
		cout << "����" << endl;
		mp_EquipWeapon->Render();
	}

	if (mp_EquipArmor == NULL)
	{
		cout << "�� : ����" << endl;
		cout << "===============" << endl;
	}
	else
	{
		cout << "��" << endl;
		mp_EquipArmor->Render();
	}

}