#include "GameL/DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameHead.h"
#include "GameL\Audio.h"

#include"Obj2048Main.h"

//使用するネームスペース
using namespace GameL;

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

	//当たり判定----------------------------------------------
	

}

//ドロー
void CObj2048Main::Draw()
{





}