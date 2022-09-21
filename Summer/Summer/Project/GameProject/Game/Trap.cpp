#include "Trap.h"
#include"Game.h"


Trap::Trap(const CVector2D& pos,int attack_no):Base(eType_Trap) {
	m_img = COPY_RESOURCE("Trap", CImage);
	m_pos = pos;
	//���S��ݒ�
	m_img.SetCenter(16, 16);
	//�����蔻��p��`�ݒ�
	m_rect = CRect(-15, -10, 1, 0);
	//�U���ԍ�
	m_attack_no = attack_no;

}

void Trap::Update(){


}

void Trap::Draw(){
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	//�����蔻���`�̕\��
	//DrawRect();

}

void Trap::Collision(Base* b){

}

Trap2::Trap2(const CVector2D& pos, int attack_no):Base(eType_Trap2) {
	m_img = COPY_RESOURCE("Trap2", CImage);
	m_pos = pos;
	//���S��ݒ�
	m_img.SetCenter(16, 16);
	//�����蔻��p��`�ݒ�
	m_rect = CRect(-15, -15, 20, 20);
	//�U���ԍ�
	m_attack_no = attack_no;
}

void Trap2::Update(){

}

void Trap2::Draw(){
	m_img.SetPos(GetScreenPos(m_pos));
	m_img.Draw();
	//�����蔻���`�̕\��
	//DrawRect();
}

void Trap2::Collision(Base* b){

}
