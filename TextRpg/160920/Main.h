#pragma once
#include "Player.h"
#include "Field.h"
#include "Store.h"

class CMain
{
private:
	CParent*	mp_Player;
	CField*		mp_Field;
	CStore*		mp_Store;

public:
	void progress(void);
	void Start_Zone(void);
	void Sel_Job(void);

public:
	CMain(void);
	~CMain(void);
};
