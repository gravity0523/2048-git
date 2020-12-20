#pragma once
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;


//オブジェクト：2048メイン
class CObj2048Main : public CObj
{
public:
	CObj2048Main();
	~CObj2048Main() {};
	void Init(); //イニシャライズ
	void Action();  //アクション
	void Draw();    //ドロー
	float x, y;

private:
	int stage[4][4];
	int stage_reset[4][4];

	//クリック判定
	bool c_flag[2]; //クリックのフラグ	[0]=押している[1]=押していない

};