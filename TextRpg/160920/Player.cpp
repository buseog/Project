#include "StdAfx.h"
#include "Player.h"

CPlayer::CPlayer(void)
{

}


CPlayer::CPlayer(string Name, int iHp, int iAttack, int iDefense, int iGold)
	:CParent(Name, iHp, iAttack, iDefense, iGold)
{

}

CPlayer::~CPlayer(void)
{

}

void CPlayer::setRevive(void)
{
	mt_Stat.iHp = 100;
}

void CPlayer::AddInventory(CItem* pItem)
{
	Inventory.addInventory(pItem);
}

void CPlayer::DelInventory()
{
	int iInput = 0;

	cout << "��� ������? (�ڷΰ��� 0) : ";
	cin >> iInput;
	
	Inventory.delInventory(iInput - 1);
}

void CPlayer::EquipItem()
{
	int iInput = 0;

	cout << "��� �����ҷ�? (�ڷΰ��� 0) : ";
	cin >> iInput;
	
	if (iInput == 0)
	{
		return;
	}

	if (Inventory.getItemType(iInput - 1) == Weapon)
	{
		if (Equip.returnWeapon() == NULL)
		{
			cout << "���� ����" << endl;
			Equip.EquipWeapon(Inventory.findItem(iInput -1));
			setWeapon(Inventory.findItem(iInput -1)->getItemStat().iAttack);
			Inventory.delInventory(iInput - 1);
		}
		else
		{
			cout << "���� ��ü" << endl;
			setoffWeapon(Equip.returnWeapon()->getItemStat().iAttack);
			Inventory.addInventory(Equip.ChangeWeapon(Inventory.findItem(iInput -1)));
			setWeapon(Inventory.findItem(iInput -1)->getItemStat().iAttack);
			Inventory.delInventory(iInput - 1);
		}
	}

	else if (Inventory.getItemType(iInput - 1) == Armor)
	{
		if (Equip.returnArmor() == NULL)
		{
			cout << "�� ����" << endl;
			Equip.EquipArmor(Inventory.findItem(iInput -1));
			setArmor(Inventory.findItem(iInput -1)->getItemStat().iDefense);
			Inventory.delInventory(iInput - 1);
		}
		else
		{
			cout << "�� ��ü" << endl;
			setoffArmor(Equip.returnArmor()->getItemStat().iDefense);
			Inventory.addInventory(Equip.ChangeArmor(Inventory.findItem(iInput -1)));
			setArmor(Inventory.findItem(iInput -1)->getItemStat().iDefense);
			Inventory.delInventory(iInput - 1);
		}
	}
}

void CPlayer::Bag(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		Render();

		Inventory.PrintInventory();

		cout << "1. ���� 2. �Ա� 3. ������ (�ڷΰ��� 0) : ";
		cin >> iInput;

		if (iInput == 0)
		{
			break;
		}

		switch (iInput)
		{
			case 1:
				EquipItem();
				break;
			case 2:
				haveItem();
				break;

			case 3:
				DelInventory();
				break;
		}
	}
}

void CPlayer::Render(void)
{
	cout << "�̸� : " << mt_Stat.Name << "\t������ : " << mt_Stat.iGold << endl;
	cout << "ü�� : " << mt_Stat.iHp << endl;
	cout << "���ݷ� : " << mt_Stat.iAttack << "\t���� : " << mt_Stat.iDefense << endl;
	cout << "=============================" << endl;
}



void CPlayer::Equipment(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		Render();

		Equip.PrintEquip();

		cin >> iInput;
		break;
	}
}

void CPlayer::setWeapon(int Attack)
{
	mt_Stat.iAttack += Attack;
}
void CPlayer::setArmor(int Defense)
{
	mt_Stat.iDefense += Defense;
}

void CPlayer::setoffWeapon(int Attack)
{
	mt_Stat.iAttack -= Attack;
}
void CPlayer::setoffArmor(int Defense)
{
	mt_Stat.iDefense -= Defense;
}

void CPlayer::setBuyItem(int _iprice)
{
	mt_Stat.iGold -= _iprice;
}

void CPlayer::setOnPotion(int _iRecovery)
{
	mt_Stat.iHp += _iRecovery;
}

void CPlayer::haveItem()
{
	int iInput = 0;

	cout << "��� ������? (�ڷΰ��� 0) : ";
	cin >> iInput;
	
	if (iInput == 0)
	{
		return;
	}

	if (Inventory.getItemType(iInput -1) == Potion)
	{
		if (Inventory.findItem(iInput -1)->getCount() == 1)
		{
			setOnPotion(Inventory.findItem(iInput -1)->getItemStat().iRecovery);
			Inventory.delInventory(iInput - 1);
		}
		else
		{
			setOnPotion(Inventory.findItem(iInput -1)->getItemStat().iRecovery);
			Inventory.findItem(iInput -1)->setsubCount();
		}
	}
	else
	{
		cout << "������ ����" << endl;
	}
}