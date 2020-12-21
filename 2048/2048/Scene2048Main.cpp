//STLデバッグ機能をOFFにする
#define _SECURE_SCL (0)
#define _HAS_ITERATOR_DEBUGGING (0)

//GameLで使用するヘッダー
#include "GameL/SceneObjManager.h"
#include "GameL/DrawFont.h"
#include "GameL/Audio.h"
#include "GameL/DrawTexture.h"

//使用するネームスペース
using namespace GameL;

//使用するヘッダー
#include"Scene2048Main.h"
#include"GameHead.h"

//コンストラクタ
CScene2048Main::CScene2048Main()
{

}

//デストラクタ
CScene2048Main::~CScene2048Main()
{

}

//ゲームメイン初期化メソッド
void CScene2048Main::InitScene()
{
	CObj2048Main* p = new CObj2048Main();
	Objs::InsertObj(p, OBJ_2048, 1);

	//グラフィック読み込み
	Draw::LoadImageW(L"Picture/frame.png",0,TEX_SIZE_512);
	Draw::LoadImageW(L"Picture/Number&cursor.png", 1, TEX_SIZE_512);
	Draw::LoadImageW(L"Picture/cursor.png", 2, TEX_SIZE_64);

	//音楽情報読み込み

	//SE情報の登録

}

//ゲームメイン実行メソッド
void CScene2048Main::Scene()
{

}