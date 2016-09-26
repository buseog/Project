#include "StdAfx.h"
#include "Parent.h"

CParent::CParent(void)
{
}

CParent::CParent(string Name, int iHp, int iAttack, int iDefense, int iGold)
	:mt_Stat(Name, iHp, iAttack, iDefense, iGold)
{
}


CParent::~CParent(void)
{
}

void CParent::Render(void)
{
}

void CParent::setDamage(int Attack)
{
	mt_Stat.iHp -= Attack;
}

STAT CParent::getStat(void)
{
	return mt_Stat;
}

void CParent::setRevive(void)
{
	mt_Stat.iHp = 100;
}

void CParent::AddInventory(CItem* pItem)
{
}

void CParent::Bag(void)
{
}


void CParent::Equipment(void)
{
}

void CParent::setWeapon(int Attack)
{
}
void CParent::setArmor(int Defense)
{
}

void CParent::setBuyItem(int _iprice)
{
}

void CParent::setOnPotion(int _iRecovery)
{
}
void CParent::haveItem(void)
{
}