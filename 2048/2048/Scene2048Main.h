#pragma once
//使用するヘッダーファイル
#include "GameL\SceneManager.h"

//使用するネームスペース
using namespace GameL;

//シーン:2048メイン
class CScene2048Main : public CScene
{
public:
	CScene2048Main();
	~CScene2048Main();
	void InitScene();
	void Scene();
private:

};