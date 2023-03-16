#pragma once
#include "Chess.h"

class Player
{
public:
	void init(Chess* chess);
	void go();
private:
	Chess *chess;
};

