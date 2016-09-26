#pragma once

#include "Item.h"

class CWeapon :public CItem
{
private:

public:
	void Render(void);

public:
	CWeapon(void);
	CWeapon(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType);
	~CWeapon(void);
};
