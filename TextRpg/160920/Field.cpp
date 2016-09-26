#include "StdAfx.h"
#include "Field.h"

CField::CField(void)
:mp_Player(NULL),
mp_Monster(NULL)
{
}

CField::~CField(void)
{
}

void CField::Hunt_Zone(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		mp_Player->Render();

		cout << "1. µ¿·ü 2. ¼º½Ä 3. ÇÑÁø 4. µÚ·Î : ";
		cin >> iInput;

		if (iInput == 4)
		{
			break;
		}
		else if (iInput <= 3)
		{
			Sel_Mon(iInput);
			Fight();
		}
	}
}
void CField::Fight(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		mp_Player->Render();
		mp_Monster->Render();

		cout << "1. ½Î¿î´Ù 2. Æ¤´Ù : ";
		cin >> iInput;

		if (iInput == 1)
		{
			mp_Player->setDamage(mp_Monster->getStat().iAttack - mp_Player->getStat().iDefense);
			mp_Monster->setDamage(mp_Player->getStat().iAttack - mp_Monster->getStat().iDefense);
			if (mp_Player->getStat().iHp <= 0)
			{
				mp_Player->setRevive();
				break;
			}
		}
		if (iInput == 2 || mp_Monster->getStat().iHp <= 0)
		{
			break;
		}
	}
}

void CField::setPlayer(CParent* pPlayer)
{
	mp_Player = pPlayer;
}

void CField::Sel_Mon(int Input)
{
	switch (Input)
	{
	case 1:
		mp_Monster = new CMonster("µ¿·ü",55,5,1);
		break;

	case 2:
		mp_Monster = new CMonster("¼º½Ä",66,6,2);
		break;

	case 3:
		mp_Monster = new CMonster("ÇÑÁø",77,7,3);
		break;
	}
}