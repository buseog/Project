#pragma once
#include "Player.h"
#include "Monster.h"

class CField
{
private:
	CParent* mp_Player;
	CParent* mp_Monster;

public:
	void Hunt_Zone(void);
	void Fight(void);
	void setPlayer(CParent* pPlayer);
	void Sel_Mon(int Input);

public:
	CField(void);
	~CField(void);
};
