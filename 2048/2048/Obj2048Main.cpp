#include "GameL/DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameHead.h"
#include "GameL\Audio.h"
#include<time.h>
#include<iostream>
#include<random>
#include"Obj2048Main.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;
using namespace std;

//-------�}�N��---------
#define FRAME_WIDTH	4	//����
#define FRAME_HEIGHT 4	//�c��
#define WALL -1			//��

std::random_device g_rnd;	//�����_��������
int frame[FRAME_WIDTH + 2][FRAME_HEIGHT + 2];

//�R���X�g���N�^
CObj2048Main::CObj2048Main()
{
	
}

//�C�j�V�����C�Y
void CObj2048Main::Init()
{
	c_flag[0] = false;
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
	

	//�A���S���S���S���Y���̑�---------------------------------


}

//�h���[
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//�O�g�\��
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 400.0f;
	src.m_bottom = 400.0f;

	dst.m_top = 100.0f;
	dst.m_left = 200.0f;
	dst.m_right = 600.0f;
	dst.m_bottom = 500.0f;
	Draw::Draw(0, &src, &dst, c, 0.0f);



}