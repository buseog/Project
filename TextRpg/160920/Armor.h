#pragma once

#include "Item.h"

class CArmor :public CItem
{
private:

public:
	void Render(void);

public:
	CArmor(void);
	CArmor(string Name, int iAttack, int iDefense, int iRecovery, int iPrice, int iCount, int iType);
	~CArmor(void);
};
