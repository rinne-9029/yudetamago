#include "Trap.h"
#include"Game.h"


Trap::Trap(const CVector2D& pos):Base(eType_Trap) {
	m_img = COPY_RESOURCE("Trap", CImage);
	m_pos = pos;
	//���S��ݒ�
	m_img.SetCenter(16, 16);
	//�����蔻��p��`�ݒ�
	m_rect = CRect(-15, -10, 1, 0);

}

void Trap::Update(){


}

void Trap::Draw(){
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	//�����蔻���`�̕\��
	DrawRect();

}

void Trap::Collision(Base* b){

}
