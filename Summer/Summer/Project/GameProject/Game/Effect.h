#pragma once
#include "../Base/Base.h"

class Effect : public Base {
private:
	//�摜�I�u�W�F�N�g
	CImage m_img;
	//���]�t���O
	bool	m_flip;
public:
	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="name">���\�[�X��</param>
	/// <param name="p">�ʒu</param>
	/// <param name="flip">���]�t���O</param>
	/// <returns></returns>
	Effect(const char *name,const CVector2D& p, bool flip);
	void Update();
	void Draw();
};