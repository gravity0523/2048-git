#pragma once
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;


//�I�u�W�F�N�g�F2048���C��
class CObj2048Main : public CObj
{
public:
	CObj2048Main();
	~CObj2048Main() {};
	void Init(); //�C�j�V�����C�Y
	void Action();  //�A�N�V����
	void Draw();    //�h���[
	float x, y;

private:
	int stage[4][4];
	int stage_reset[4][4];

	//�N���b�N����
	bool c_flag[2]; //�N���b�N�̃t���O	[0]=�����Ă���[1]=�����Ă��Ȃ�

};