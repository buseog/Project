#pragma once
#include "Parent.h"
#include "Inventory.h"
#include "Equip.h"

class CPlayer :public CParent
{
private:
	CInventory Inventory;
	CEquip Equip;

public:
	void AddInventory(CItem* pItem);
	void DelInventory(void);
	void EquipItem(void);
	void setRevive(void);
	void Bag(void);
	void Equipment(void);
	void setBuyItem(int _iprice);
	void setOnPotion(int _iRecovery);
	void haveItem(void);

	void setWeapon(int Attack);
	void setArmor(int Defense);
	void setoffWeapon(int Attack);
	void setoffArmor(int Defense);
public:
	void Render(void);

public:
	CPlayer(void);
	CPlayer(string Name, int iHp, int iAttack, int iDefense, int iGold);
	~CPlayer(void);
};
