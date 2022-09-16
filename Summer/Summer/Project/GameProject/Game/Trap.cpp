#include "Trap.h"
#include"Game.h"


Trap::Trap(const CVector2D& pos):Base(eType_Trap) {
	m_img = COPY_RESOURCE("Trap", CImage);
	m_pos = pos;
	//’†S‚ğİ’è
	m_img.SetCenter(16, 16);

}

void Trap::Update(){


}

void Trap::Draw(){
	m_img.SetPos(m_pos);
	m_img.Draw();

}

void Trap::Collision(Base* b){

}
