#pragma once
#include <graphics.h>//easyx图形库的头文件
#include <vector>
using namespace std;

struct ChessPos {
	int row;
	int col;
	ChessPos(int r = 0, int c = 0) :row(r), col(c) {}
};

typedef enum {
	CHESS_WHITE = -1,
	CHESS_BLACK = 1,
}chess_kind_t;

class Chess
{
public:
	Chess(int gradeSize, int marginX, int marginY, float chessSize);

	void init();//初始化

	bool clickBoard(int x, int y, ChessPos* pos);

	void chessdown(ChessPos* pos, chess_kind_t kind);

	int getGradeSize();//获取棋盘大小

	int getChessData(ChessPos* pos);
	int getChessData(int row, int col);

	bool checkOver();//检测对局是否结束

private:
	IMAGE chessBlackImg;//黑棋
	IMAGE chessWhiteImg;//白棋

	int gradeSize;//棋盘大小
	int margin_x;//左侧边界
	int margin_y;//右侧边界
	float chessSize;//棋子大小\

	ChessPos lastPos; //最近落子位置, Chess的private数据成员

	//存储当前棋局棋子的分布数据
	//0：空白；1：黑子；-1：白子
	vector<vector<int>> chessMap;

	bool PlayerFlag;//TRUE：黑子走； FALSE：白子走

	void updateGameMap(ChessPos* pos);

	bool checkWin();//如果胜负已分则返回TRUE

};

