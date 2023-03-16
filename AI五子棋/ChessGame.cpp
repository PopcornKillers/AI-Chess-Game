#include "ChessGame.h"

ChessGame::ChessGame(Player* player, AI* ai, Chess* chess)
{
	this->player = player;
	this->ai = ai;
	this->chess = chess;

	player->init(chess);
	ai->init(chess);
}

void ChessGame::play()
{
	chess->init();
	while (1) {
		//玩家先手
		player->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}

		//AI后手
		ai->go();
		if (chess->checkOver()) {
			chess->init();
			continue;
		}
	}
}
