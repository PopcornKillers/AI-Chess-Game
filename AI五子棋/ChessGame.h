#pragma once
#include "AI.h"
#include "Player.h"
#include "Chess.h"
class ChessGame
{
public:
	ChessGame(Player* player, AI* ai, Chess* chess);
	//开始对局
	void play();
//添加数据成员
private:
	Player* player;
	AI* ai;
	Chess* chess;

};

