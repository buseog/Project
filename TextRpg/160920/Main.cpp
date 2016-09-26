#include "StdAfx.h"
#include "Main.h"

int End = 0;

CMain::CMain(void)
	:mp_Player(NULL),
	mp_Field(NULL),
	mp_Store(NULL)
{
}

CMain::~CMain(void)
{
}

void CMain::progress(void)
{
	Sel_Job();

	while (true)
	{
		Start_Zone();
		
		if (End == 1)
		{
			SAFE_DELETE(mp_Player);
			break;
		}
	}
}

void CMain::Start_Zone(void)
{
	int iInput = 0;

	while (true)
	{
		system("cls");
		mp_Player->Render();

		cout << "1. 사냥 2. 상점 3. 가방 4. 장비 5. 종료 : ";
		cin >> iInput;

		if (iInput == 5)
		{
			++End;
			break;
		}

		switch (iInput)
		{
		case 1:
			mp_Field = new CField;
			mp_Field->setPlayer(mp_Player);
			mp_Field->Hunt_Zone();
			SAFE_DELETE(mp_Field);
			break;

		case 2:
			mp_Store = new CStore;
			mp_Store->setPlayer(mp_Player);
			mp_Store->Sel_Store();
			SAFE_DELETE(mp_Store);
			break;

		case 3:
			mp_Player->Bag();
			break;

		case 4:
			mp_Player->Equipment();
			break;
		}
	}
}


void CMain::Sel_Job(void)
{
	int iInput = 0;

	cout << "1. 전사 2. 마법사 : ";
	cin >> iInput;

	switch (iInput)
	{
	case 1:
		mp_Player = new CPlayer("전사",100,10,0,1000);
		break;

	case 2:
		mp_Player = new CPlayer("마법사",80,13,0,1000);
		break;
	}
}