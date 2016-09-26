#include "StdAfx.h"
#include "Monster.h"

CMonster::CMonster(void)
{

}

CMonster::CMonster(string Name, int iHp, int iAttack, int iDefense, int iGold)
	:CParent(Name, iHp, iAttack, iDefense, iGold)
{

}

CMonster::~CMonster(void)
{

}

void CMonster::Render(void)
{
	cout << "�̸� : " << mt_Stat.Name << endl;
	cout << "���ݷ� : " << mt_Stat.iAttack << "\t���� : " << mt_Stat.iDefense << endl;
	cout << "ü�� : " << mt_Stat.iHp << endl;
	cout << "=============================" << endl;
}