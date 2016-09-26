#pragma once
#include "define.h"
#include "Item.h"

class CParent
{
protected:
	STAT mt_Stat;

public:
	void setUser(CParent* p);
	void setDamage(int Attack);
	STAT getStat(void);

public:
	virtual void haveItem(void);
	virtual void setOnPotion(int _iRecovery);
	virtual void setBuyItem(int _iprice);
	virtual void Render(void);
	virtual	void setRevive(void);
	virtual void AddInventory(CItem* pItem);
	virtual void Bag(void);
	virtual void Equipment(void);
	virtual	void setWeapon(int Attack);
	virtual void setArmor(int Defense);

public:
	CParent(void);
	CParent(string Name, int iHp, int iAttack, int iDefense, int iGold);
	virtual ~CParent(void);
};
