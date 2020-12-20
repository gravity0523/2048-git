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

//使用するネームスペース
using namespace GameL;
using namespace std;

//-------マクロ---------
#define FRAME_WIDTH	4	//横幅
#define FRAME_HEIGHT 4	//縦幅
#define WALL -1			//壁

std::random_device g_rnd;	//ランダム生成器
int frame[FRAME_WIDTH + 2][FRAME_HEIGHT + 2];

//コンストラクタ
CObj2048Main::CObj2048Main()
{
	
}

//イニシャライズ
void CObj2048Main::Init()
{
	c_flag[0] = false;
}

//アクション
void CObj2048Main::Action()
{
	//マウスの座標を読み込む
	x = (float)Input::GetPosX();
	y = (float)Input::GetPosY();

	//クリック判別
	//[0]のみ true = 押している状態　
	//[1]のみ true = 押していない状態
	//両方    true = 押してから離した状態
	if (Input::GetMouButtonL() == true)
	{
		c_flag[0] = true;
		c_flag[1] = false;
	}
	if (Input::GetMouButtonL() == false)
	{
		c_flag[1] = true;
	}

	//当たり判定(↑↓→←の部分)----------------------------------------------
	

	//アルゴリゴリゴリズム体操---------------------------------


}

//ドロー
void CObj2048Main::Draw()
{
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
	RECT_F src;
	RECT_F dst;

	//外枠表示
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