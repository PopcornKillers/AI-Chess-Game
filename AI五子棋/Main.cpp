#include <iostream>
#include "ChessGame.h"

int main(void) {
	Player player;
	AI ai;
	Chess chess(13, 30, 30, 45);
	ChessGame game(&player, &ai, &chess);

	game.play();
	return 0;

}
