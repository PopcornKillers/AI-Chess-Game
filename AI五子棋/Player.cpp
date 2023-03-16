#include "Player.h"

void Player::init(Chess* chess)
{
	this->chess = chess;
}

void Player::go()
{
	MOUSEMSG msg;
	ChessPos pos;

	while (1) {
		//获取鼠标信息
		msg = GetMouseMsg();
		//通过chess对象，来调用判断落子是否有效，以及落子功能
		if (msg.uMsg == WM_LBUTTONDOWN && chess->clickBoard(msg.x, msg.y, &pos)) {
			break;
		}
	}
		//printf("%d,%d\n", pos.row, pos.col);
		
		//落子
		chess->chessdown(&pos, CHESS_BLACK);

}
