#pragma once
#include "../Base/Base.h"

class Trap : public Base {
	CImage m_img;
	//UŒ‚”Ô†
	int m_attack_no;
public:
	Trap(const CVector2D& pos,int attack_no);
	void Update();
	void Draw();
	void Collision(Base* b);
	int GetAttackNo() {
		return m_attack_no;
	}
};

class Trap2 :public Base {
	CImage m_img;
	//UŒ‚”Ô†
	int m_attack_no;
public:
	Trap2(const CVector2D& pos, int attack_no);
	void Update();
	void Draw();
	void Collision(Base* b);
	int GetAttackNo() {
		return m_attack_no;
	}
};


