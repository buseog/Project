#pragma once

#include "Player.h"
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"

class CStore
{
private:
	CParent*	mp_Player;
	CItem*		mp_Weapon[WEA];
	CItem*		mp_Armor[AEA];
	CItem*		mp_Potion[PEA];

public:
	void Sel_Store(void);
	void setPlayer(CParent* pPlayer);
	void Weapon_Store(void);
	void Armor_Store(void);
	void Potion_Store(void);

public:
	CStore(void);
	~CStore(void);
};
