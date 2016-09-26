#pragma once

#include "Item.h"

class CEquip
{
private:
	CItem* mp_EquipWeapon;
	CItem* mp_EquipArmor;
public:
	void EquipWeapon(CItem* pWeapon);
	void EquipArmor(CItem* pArmor);
	CItem* returnWeapon(void);
	CItem* returnArmor(void);
	CItem* ChangeWeapon(CItem* pWeapon);
	CItem* ChangeArmor(CItem* pWeapon);
	void PrintEquip(void);

public:
	CEquip(void);
	~CEquip(void);
};
