//#include <Windows.h>
//#include <conio.h>		//	_getch
//#include <time.h>			//	time
//#include <random>
//#include <iostream>
//#include <sstream>      // std::ostringstream
//#include <string>
//using namespace std;
//
//#define		WALL				-1			//	�Ԑl
//#define		BOARD_WD		4			//	�{�[�h��
//#define		BOARD_HT		4			//	�{�[�h����
//#define		CELL_WIDTH	8			//	�Z���\����
//
//#define		KEY_ARROW		0xe0
//#define		KEY_UP				0x48
//#define		KEY_LEFT				0x4b
//#define		KEY_RIGHT			0x4d
//#define		KEY_DOWN			0x50
//
//std::random_device g_rnd;     // �񌈒�I�ȗ���������
//int	g_score = 0;
////int	g_nBlank;		//	�󗓉ӏ���
//int	g_board[BOARD_WD + 2][BOARD_HT + 2];		//	�Ԑl�t���{�[�h�Q�����z��
//
////----------------------------------------------------------------------
////		�F��`
//#define		COL_BLACK	0x00
//#define		COL_DARK_BLUE		0x01
//#define		COL_DARK_GREEN	0x02
//#define		COL_DARK_CYAN		0x03
//#define		COL_DARK_RED		0x04
//#define		COL_DARK_VIOLET	0x05
//#define		COL_DARK_YELLOW	0x06
//#define		COL_GRAY	0x07
//#define		COL_LIGHT_GRAY		0x08
//#define		COL_BLUE		0x09
//#define		COL_GREEN	0x0a
//#define		COL_CYAN		0x0b
//#define		COL_RED		0x0c
//#define		COL_VIOLET	0x0d
//#define		COL_YELLOW	0x0e
//#define		COL_WHITE	0x0f
//#define		COL_INTENSITY		0x08		//	���P�x�}�X�N
//#define		COL_RED_MASK		0x04
//#define		COL_GREEN_MASK	0x02
//#define		COL_BLUE_MASK	0x01
//
////	�����F�w�� for Windows Console
//void setColor(int col)
//{
//	HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
//	WORD attr = 0;
//	if (col & COL_INTENSITY)
//		attr |= FOREGROUND_INTENSITY;
//	if (col & COL_RED_MASK)
//		attr |= FOREGROUND_RED;
//	if (col & COL_GREEN_MASK)
//		attr |= FOREGROUND_GREEN;
//	if (col & COL_BLUE_MASK)
//		attr |= FOREGROUND_BLUE;
//	SetConsoleTextAttribute(hCons, attr);
//}
//void setColor(int fg, int bg)
//{
//	HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
//	WORD attr = 0;
//	if (fg & COL_INTENSITY)
//		attr |= FOREGROUND_INTENSITY;
//	if (fg & COL_RED_MASK)
//		attr |= FOREGROUND_RED;
//	if (fg & COL_GREEN_MASK)
//		attr |= FOREGROUND_GREEN;
//	if (fg & COL_BLUE_MASK)
//		attr |= FOREGROUND_BLUE;
//
//	if (bg & COL_INTENSITY)
//		attr |= BACKGROUND_INTENSITY;
//	if (bg & COL_RED_MASK)
//		attr |= BACKGROUND_RED;
//	if (bg & COL_GREEN_MASK)
//		attr |= BACKGROUND_GREEN;
//	if (bg & COL_BLUE_MASK)
//		attr |= BACKGROUND_BLUE;
//	SetConsoleTextAttribute(hCons, attr);
//}
////	�J�[�\���ʒu�w�� for Windows Console
//void setCursorPos(int x, int y)
//{
//	HANDLE hCons = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos;
//	pos.X = x;
//	pos.Y = y;
//	SetConsoleCursorPosition(hCons, pos);
//}
//std::string tostr(int v)
//{
//	std::ostringstream os;
//	os << v;
//	return os.str();
//}
////	�ŏ�ʃr�b�g�̈ʒu�i0�`31�j��Ԃ�
////		v ��0�Ȃ��0, 1�Ȃ�΂P�C2�Ȃ��2, 4�Ȃ��3, 8�Ȃ��4,... ��Ԃ�
////		v ���}�C�i�X�Ȃ�� -1 ��Ԃ�
////	int �͕����t��32�r�b�g�����Ɖ��肷��
//int msbPos(int v)
//{
//	if (v == 0) return 0;
//	if (v < 0) return -1;
//	int n = 31;
//	int mask = 1 << (n - 1);
//	while ((v & mask) == 0) {
//		mask >>= 1;
//		--n;
//	}
//	return n;
//}
////----------------------------------------------------------------------
//void	init_board()
//{
//	//g_nBlank = BOARD_WD * BOARD_HT;		//	�󗓉ӏ���
//	for (int x = 0; x < BOARD_WD + 2; ++x) {
//		for (int y = 0; y < BOARD_HT + 2; ++y) {
//			if (x == 0 || x == BOARD_WD + 1 ||
//				y == 0 || y == BOARD_HT + 1)
//			{
//				g_board[x][y] = WALL;
//			}
//			else {
//				g_board[x][y] = 0;
//			}
//		}
//	}
//}
//int bgColor(int v)
//{
//	if (v == 0) return COL_LIGHT_GRAY;
//	if (v <= 4) return COL_DARK_YELLOW;
//	if (v <= 16) return COL_DARK_VIOLET;
//	if (v <= 64) return COL_DARK_CYAN;
//	if (v <= 256) return COL_DARK_GREEN;
//	if (v <= 1024) return COL_DARK_BLUE;
//	return COL_DARK_RED;
//}
//int fgColor(int v)
//{
//	switch (v) {
//	case 0:
//	case 4:
//	case 16:
//	case 64:
//	case 256:
//	case 1024:
//	default:
//		return COL_WHITE;
//	case 2:
//	case 8:
//	case 32:
//	case 128:
//	case 512:
//		return COL_YELLOW;
//	}
//}
//void setFgBgColor(int v)
//{
//	int fg = COL_WHITE;
//	int bg = COL_BLACK;
//	if (v <= 256) {
//		switch (v) {
//		case 0:		bg = COL_LIGHT_GRAY;	break;
//		case 2:		bg = COL_DARK_YELLOW;	break;
//		case 4:		bg = COL_DARK_CYAN;	break;
//		case 8:		bg = COL_DARK_GREEN;	break;
//		case 16:		bg = COL_DARK_BLUE;	break;
//		case 32:		bg = COL_DARK_RED;	break;
//		case 64:		bg = COL_DARK_VIOLET;	break;
//		case 128:		bg = COL_BLUE;	break;
//		case 256:
//			//fg = COL_BLACK;
//			bg = COL_VIOLET;	break;
//		}
//	}
//	else {
//		if (v >= 1025)
//			fg = COL_RED;
//		else
//			fg = COL_BLACK;
//		bg = COL_GRAY;
//	}
//	setColor(fg, bg);
//}
//void print_line(int y, bool printVal)
//{
//	for (int x = 1; x <= BOARD_WD; ++x) {
//		int v = g_board[x][y];
//		//setColor(fgColor(v), bgColor(v));
//		setFgBgColor(v);
//		string str(CELL_WIDTH, ' ');
//		if (printVal) {
//			if (!v)
//				str = '.';
//			else
//				str = tostr(v);
//			str += string((CELL_WIDTH - str.size()) / 2, ' ');		//	�����ɋ󔒃p�f�B���O
//			str = string(CELL_WIDTH - str.size(), ' ') + str;		//	�擪�ɋ󔒃p�f�B���O
//		}
//		cout << str;
//	}
//	cout << "\n";
//}
//void print_board()
//{
//	setCursorPos(0, 0);
//	setColor(COL_WHITE, COL_BLACK);
//	cout << "SCORE: " << g_score << "        \n\n";
//	for (int y = 1; y <= BOARD_HT; ++y) {
//		print_line(y, false);
//		print_line(y, false);
//		print_line(y, true);
//		print_line(y, false);
//		print_line(y, false);
//	}
//	cout << "\n";
//}
//int nBlank()
//{
//	int nBlank = 0;
//	for (int y = 1; y <= BOARD_HT; ++y) {
//		for (int x = 1; x <= BOARD_WD; ++x) {
//			if (g_board[x][y] == 0) ++nBlank;
//		}
//	}
//	return nBlank;
//}
////	�󂫉ӏ��̂ǂ����� 2(75%) �܂��� 4(25%) ��z�u����
//void put_number()
//{
//	int n = nBlank();
//	if (n == 0) return;
//	int pos = g_rnd() % n;
//	//int pos = rand() % g_nBlank;
//	const int v = (rand() % 100) < 75 ? 2 : 4;		//	75% �̊m���łQ�C25%�̊m���łS
//	//cout << "pos = " << pos << "\n";
//	for (int y = 1; y <= BOARD_HT; ++y) {
//		for (int x = 1; x <= BOARD_WD; ++x) {
//			if (g_board[x][y] == 0) {		//	�󗓂�T��
//				if (!pos) {
//					g_board[x][y] = v;
//					return;
//				}
//				--pos;
//			}
//		}
//	}
//}
////	�Ֆʍ��E���]
//void hrev_board()
//{
//	for (int y = 1; y <= BOARD_HT; ++y) {
//		for (int x = 1; x <= BOARD_WD / 2; ++x) {
//			swap(g_board[x][y], g_board[BOARD_WD + 1 - x][y]);
//		}
//	}
//}
////	x, y ���]
//void swapxy_board()
//{
//	for (int y = 1; y < BOARD_HT; ++y) {
//		for (int x = y + 1; x <= BOARD_WD; ++x) {
//			swap(g_board[x][y], g_board[y][x]);
//		}
//	}
//}
//bool move_right()
//{
//	bool moved = false;
//	for (int y = 1; y <= BOARD_HT; ++y) {
//		int dst = BOARD_WD;
//		for (int src = BOARD_WD; src >= 1; --src) {
//			int v = g_board[src][y];
//			if (v != 0) {
//				if (src == BOARD_WD) continue;		//	�E�[�̏ꍇ
//				if (g_board[dst][y] == 0) {		//	�ړ��悪��
//					if (dst != src) {
//						g_board[src][y] = 0;
//						g_board[dst][y] = v;
//						moved = true;
//					}
//				}
//				else if (g_board[dst][y] == v) {		//	��������
//					g_score += v * 2;
//					g_board[src][y] = 0;
//					g_board[dst][y] += v;
//					--dst;
//					moved = true;
//				}
//				else {
//					--dst;
//					if (dst != src) {
//						g_board[src][y] = 0;
//						g_board[dst][y] = v;
//						moved = true;
//					}
//				}
//			}
//		}
//	}
//	return moved;
//}
//bool move_left()
//{
//	hrev_board();
//	bool rc = move_right();
//	hrev_board();
//	return rc;
//}
//bool move_up()
//{
//	swapxy_board();
//	hrev_board();
//	bool rc = move_right();
//	hrev_board();
//	swapxy_board();
//	return rc;
//}
//bool move_down()
//{
//	swapxy_board();
//	bool rc = move_right();
//	swapxy_board();
//	return rc;
//}
//bool isMovable()//������(�l�݂�?)
//{
//	for (int y = 1; y <= BOARD_HT; ++y) 
//	{
//		for (int x = 1; x <= BOARD_WD; ++x) 
//		{
//			if (g_board[x][y] == 0 ||
//				g_board[x][y] == g_board[x + 1][y] ||
//				g_board[x][y] == g_board[x][y + 1])
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	srand((int)time(0));
//	//srand(0);		//	for Test
//	for (;;) {
//		g_score = 0;
//		init_board();
//		put_number();
//		for (bool moved = true;;) {
//			if (moved)
//				put_number();
//			print_board();
//			if (!isMovable()) break;
//			setColor(COL_WHITE, COL_BLACK);
//			cout << "Type ��������     ";
//			int c = _getch();
//			//cout << c << "\n";
//			if (c == 'q') break;
//			if (c == KEY_ARROW) {
//				int c = _getch();
//				//cout << c << "\n";
//				switch (c) {
//				case KEY_LEFT:
//					moved = move_left();
//					break;
//				case KEY_RIGHT:
//					moved = move_right();
//					break;
//				case KEY_UP:
//					moved = move_up();
//					break;
//				case KEY_DOWN:
//					moved = move_down();
//					break;
//				}
//			}
//		}
//		setColor(COL_WHITE, COL_BLACK);
//		cout << "Try again ? [y/n]   ";
//		int c;
//		for (;;) {
//			c = _getch();
//			if (c == KEY_ARROW)
//				_getch();
//			if (c == 'y' || c == 'Y' ||
//				c == 'n' || c == 'N')
//			{
//				break;
//			}
//		}
//		if (c != 'y' && c != 'Y') break;
//	}
//	return 0;
//}