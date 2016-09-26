#pragma once
#include "Parent.h"

class CMonster :public CParent
{
private:

public:
	void Render(void);
public:
	CMonster(void);
	CMonster(string Name, int iHp, int iAttack, int iDefense, int iGold = 0);
	~CMonster(void);
};
