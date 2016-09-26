#pragma once
#include "stdafx.h"

#define SAFE_DELETE(p)	if(p)	{	delete p;	p = NULL;	}

const int WEA = 3;
const int AEA = 3;
const int PEA = 3;
const int SEA = 10;

typedef struct STAT
{
	string Name;
	int iHp;
	int iAttack;
	int iDefense;
	int iGold;

	STAT(void)
	{
	}
	STAT(string Name, int iHp, int iAttack, int iDefense, int iGold)
		:Name(Name), iHp(iHp), iAttack(iAttack), iDefense(iDefense), iGold(iGold)
	{
	}
}STAT;

enum eType
{
	Weapon,
	Armor,
	Potion
};

typedef struct tItem
{
	string Name;
	int iAttack;
	int iDefense;
	int iRecovery;
	int iPrice;
	int iCount;
	int iType;

	tItem(void)
	{
	}
	tItem(string Name, int Attack, int Defense, int Recovery, int iPrice, int iCount, int iType)
		:Name(Name), iAttack(Attack), iDefense(Defense), iRecovery(Recovery), iPrice(iPrice), iType(iType), iCount(iCount)
	{
	}
}tItem;
