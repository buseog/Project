// 160920.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Main.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CMain* Game = new CMain;

	Game->progress();

	return 0;
}

