#include "GameL/DrawTexture.h"
#include "GameL/WinInputs.h"
#include "GameL/SceneManager.h"
#include "GameL/DrawFont.h"
#include "GameL/UserData.h"
#include "GameHead.h"
#include "GameL/Audio.h"
#include<random>

#include"Obj2048Main.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;
using namespace std;

//-------�}�N��---------------
#define FRAME_WIDTH	4	//����
#define FRAME_HEIGHT 4	//�c��
#define WALL -1			//��

std::random_device g_rnd;	//�����_��������
int frame[FRAME_WIDTH + 2][FRAME_HEIGHT + 2];

//�֐��̐錾-----------------
void init_frame();
void swap_frame();

//�R���X�g���N�^
CObj2048Main::CObj2048Main()
{

}

//�C�j�V�����C�Y
void CObj2048Main::Init()
{
	//
}

//�A�N�V����
void CObj2048Main::Action()
{
	//�}�E�X�̍��W��ǂݍ���
	x = (float)Input::GetPosX();
	y = (float)Input::GetPosY();

	//�N���b�N����
	//[0]�̂� true = �����Ă����ԁ@
	//[1]�̂� true = �����Ă��Ȃ����
	//����    true = �����Ă��痣�������
	if (Input::GetMouButtonL() == true)
	{
		c_flag[0] = true;
		c_flag[1] = false;
	}
	if (Input::GetMouButtonL() == false)
	{
		c_flag[1] = true;
	}

	//�����蔻��(���������̕���)----------------------------------------------
		//��{�^��
	if ((y > 400.0f && y < 464.0f) && (x > 666.0f && x < 730.0f))
	{
		if (c_flag[0] == true && c_flag[1] == false)
		{
			upflag = true;
		}
		else
		{
			upflag == false;
		}
	}
	//���{�^��
	if ((y > 528.0f && y < 592.0f) && (x > 666.0f && x < 730.0f))
	{
		if (c_flag[0] == true && c_flag[1] == false)
		{
			downflag = true;
		}
		else
		{
			downflag == false;
		}
	}
	//���{�^��
	if ((y > 464.0f && y < 528.0f) && (x > 602.0f && x < 666.0f))
	{
		if (c_flag[0] == true && c_flag[1] == false)
		{
			leftflag = true;
		}
		else
		{
			leftflag == false;
		}
	}
	//�E�{�^��
	if ((y > 464.0f && y < 528.0f) && (x > 730.0f && x < 794.0f))
	{
		if (c_flag[0] == true && c_flag[1] == false)
		{
			rightflag = true;
		}
		else
		{
			rightflag == false;
		}
	}
	//---------------------------------





}

//�h���[
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�Ֆʘg�\��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 401.0f;
	src.m_bottom = 400.0f;
	dst.m_top = 100.0f;
	dst.m_left = 200.0f;
	dst.m_right = 600.0f;
	dst.m_bottom = 500.0f;
	Draw::Draw(0, &src, &dst, c, 0.0f);

	//���{�^���̕\��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 64.0f;
	src.m_bottom = 64.0f;
	dst.m_top = 400.0f;
	dst.m_left = 666.0f;
	dst.m_right = 730.0f;
	dst.m_bottom = 464.0f;
	Draw::Draw(2, &src, &dst, c, 0.0f);

	//���{�^���̕\��
	dst.m_top = 464.0f;
	dst.m_left = 602.0f;
	dst.m_right = 666.0f;
	dst.m_bottom = 528.0f;
	Draw::Draw(2, &src, &dst, c, 90.0f);

	//���{�^��
	dst.m_top = 528.0f;
	dst.m_left = 666.0f;
	dst.m_right = 730.0f;
	dst.m_bottom = 592.0f;
	Draw::Draw(2, &src, &dst, c, 180.0f);

	//���{�^��
	dst.m_top = 464.0f;
	dst.m_left = 730.0f;
	dst.m_right = 794.0f;
	dst.m_bottom = 528.0f;
	Draw::Draw(2, &src, &dst, c, 270.0f);

	if (upflag == true)
	{
		Font::StrDraw(L"�㉟���Ă�", 700, 200, 16, c);
	}
	if (downflag == true)
	{
		Font::StrDraw(L"�������Ă�", 700, 250, 16, c);
	}
	if (leftflag == true)
	{
		Font::StrDraw(L"�������Ă�", 700, 300, 16, c);
	}
	if (rightflag == true)
	{
		Font::StrDraw(L"�E�����Ă�", 700, 350, 16, c);
	}

}

//�֐��̒�`---------------
void init_frame()
{
	//g_nBlank = BOARD_WD * BOARD_HT;		//	�󗓉ӏ���
	for (int x = 0; x < FRAME_WIDTH + 2; ++x) {
		for (int y = 0; y < FRAME_HEIGHT + 2; ++y) {
			if (x == 0 || x == FRAME_WIDTH + 1 ||
				y == 0 || y == FRAME_HEIGHT + 1)
			{
				frame[x][y] = WALL;
			}
			else {
				frame[x][y] = 0;
			}
		}
	}
}

void swap_frame()
{
	for (int y = 1; y < FRAME_HEIGHT; ++y) {
		for (int x = y + 1; x <= FRAME_WIDTH; ++x) {
			swap(frame[x][y], frame[y][x]);
		}
	}
}
void move_right()
{

}