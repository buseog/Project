#include "StdAfx.h"
#include "Store.h"

CStore::CStore(void)
:mp_Player(NULL)
{
	for (int i = 0; i < WEA; ++i)
	{
		mp_Weapon[i] = NULL;
		mp_Armor[i] = NULL;
		mp_Potion[i] = NULL;
	}
}

CStore::~CStore(void)
{
	for (int i = 0; i < WEA; ++i)
	{
		SAFE_DELETE(mp_Weapon[i]);
		SAFE_DELETE(mp_Armor[i]);
		SAFE_DELETE(mp_Potion[i]);
	}
}

void CStore::Sel_Store(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		mp_Player->Render();

		cout << "1. ���� 2. �� 3. ���� 4. �ڷ� : ";
		cin >> iInput;
		if (iInput == 4)
		{
			break;
		}

		switch (iInput)
		{
		case 1:
			Weapon_Store();
			break;
		case 2:
			Armor_Store();
			break;
		case 3:
			Potion_Store();
			break;
		}
	}
}

void CStore::setPlayer(CParent* pPlayer)
{
	mp_Player = pPlayer;
}

void CStore::Weapon_Store(void)
{
	int iInput = 0;

	if (mp_Weapon[0] == NULL)
	{
		mp_Weapon[0] = new CWeapon("���",2,0,0,100,1,Weapon);
	}
	if (mp_Weapon[1] == NULL)
	{
		mp_Weapon[1] = new CWeapon("�콼��",4,0,0,200,1,Weapon);
	}
	if (mp_Weapon[2] == NULL)
	{
		mp_Weapon[2] = new CWeapon("���",10,0,0,300,1,Weapon);
	}
		
	while (true)
	{
		system("cls");
		mp_Player->Render();

		for (int i = 0; i < 3; ++i)
		{
			cout << i + 1 << ". ";
			mp_Weapon[i]->Render();
		}
		
		cout << "�� �췡?(�ڷΰ��� 0) : ";
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}
		else 
		{
			if (mp_Player->getStat().iGold >= mp_Weapon[iInput - 1]->getItemStat().iPrice)
			{
				mp_Player->setBuyItem(mp_Weapon[iInput - 1]->getItemStat().iPrice);
				mp_Player->AddInventory(mp_Weapon[iInput - 1]);
				mp_Weapon[iInput - 1] = NULL;
				break;
			}
			else
			{
				cout << "�� ����!" << endl;
				break;
			}
		}
	}
}

void CStore::Armor_Store(void)
{
	int iInput = 0;

	if (mp_Armor[0] == NULL)
	{
		mp_Armor[0] = new CArmor("���۳� ��",0,1,0,100,1,Armor);
	}
	if (mp_Armor[1] == NULL)
	{
		mp_Armor[1] = new CArmor("õ ��",0,2,0,200,1,Armor);
	}
	if (mp_Armor[2] == NULL)
	{
		mp_Armor[2] = new CArmor("ö����",0,6,0,300,1,Armor);
	}
		
	while (true)
	{
		system("cls");
		mp_Player->Render();

		for (int i = 0; i < 3; ++i)
		{
			cout << i + 1 << ". ";
			mp_Armor[i]->Render();
		}

		cout << "�� �췡?(�ڷΰ��� 0) : ";
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}
		else 
		{
			if (mp_Player->getStat().iGold >= mp_Armor[iInput - 1]->getItemStat().iPrice)
			{
				mp_Player->setBuyItem(mp_Armor[iInput - 1]->getItemStat().iPrice);
				mp_Player->AddInventory(mp_Armor[iInput - 1]);
				mp_Armor[iInput - 1] = NULL;
				break;
			}
			else
			{
				cout << "�� ����!" << endl;
				break;
			}
		}
	}
}

void CStore::Potion_Store(void)
{
	int iInput = 0;

	if (mp_Potion[0] == NULL)
	{
		mp_Potion[0] = new CPotion("�ϱ�����",0,0,3,100,10,Potion);
	}
	if (mp_Potion[1] == NULL)
	{
		mp_Potion[1] = new CPotion("�߱�����",0,0,5,200,5,Potion);
	}
	if (mp_Potion[2] == NULL)
	{
		mp_Potion[2] = new CPotion("�������",0,0,10,300,3,Potion);
	}

	while (true)
	{
		system("cls");
		mp_Player->Render();

		for (int i = 0; i < 3; ++i)
		{
			cout << i + 1 << ". ";
			mp_Potion[i]->Render();
		}

		cout << "�� �췡?(�ڷΰ��� 0) : ";
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}
		else 
		{
			if (mp_Player->getStat().iGold >= mp_Potion[iInput - 1]->getItemStat().iPrice)
			{
				mp_Player->setBuyItem(mp_Potion[iInput - 1]->getItemStat().iPrice);
				mp_Player->AddInventory(mp_Potion[iInput - 1]);
				mp_Potion[iInput - 1] = NULL;
				break;
			}
			else
			{
				cout << "�� ����!" << endl;
				break;
			}
		}
	}
}