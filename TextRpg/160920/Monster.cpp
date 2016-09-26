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
	cout << "이름 : " << mt_Stat.Name << endl;
	cout << "공격력 : " << mt_Stat.iAttack << "\t방어력 : " << mt_Stat.iDefense << endl;
	cout << "체력 : " << mt_Stat.iHp << endl;
	cout << "=============================" << endl;
}