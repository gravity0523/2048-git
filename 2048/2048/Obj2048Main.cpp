#include "GameL/DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameL\SceneObjManager.h"
#include "GameL\DrawFont.h"
#include "GameL\UserData.h"
#include "GameHead.h"
#include "GameL\Audio.h"

#include"Obj2048Main.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

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

	//�����蔻��----------------------------------------------
	

}

//�h���[
void CObj2048Main::Draw()
{





}