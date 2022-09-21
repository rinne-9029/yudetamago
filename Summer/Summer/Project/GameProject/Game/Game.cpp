#include "Game.h"
#include "Field.h"
#include "Player.h"
#include "Enemy.h"
#include "Goal.h"
#include "../Title/Title.h"
#include"Trap.h"

Game::Game() :Base(eType_Scene)
{
	Base::Add(new Field());
	Base::Add(new Player(CVector2D(0,540), false));
	//Base::Add(new Enemy(CVector2D(1280 + 256 * 1, 540), true));
	//Base::Add(new Enemy(CVector2D(1280 + 256 * 2, 540), true));
	//Base::Add(new Enemy(CVector2D(1280 + 256 * 3, 540), true));
	Base::Add(new Goal(CVector2D(2048, 540)));
	Base::Add(new Trap(CVector2D(400, 540),true));
	Base::Add(new Trap(CVector2D(420, 540),true));
	Base::Add(new Trap(CVector2D(500, 540),true));
	Base::Add(new Trap(CVector2D(520, 540),true));
	Base::Add(new Trap(CVector2D(540, 540),true));
	Base::Add(new Trap2(CVector2D(300, 450), true));
	Base::Add(new Trap2(CVector2D(520, 450), true));
	Base::Add(new Trap2(CVector2D(600, 480), true));

}

Game::~Game()
{
	//�S�ẴI�u�W�F�N�g��j��
	Base::KillAll();
	//�^�C�g���V�[����
	Base::Add(new Title());
}

void Game::Update()
{
	//�S�[����������΃Q�[���V�[���I��
	if (!Base::FindObject(eType_Goal)) {
		SetKill();
	}

	//�v���C���[���S�@�{�^���P�ŃQ�[���V�[���I��
	if (!Base::FindObject(eType_Player) && PUSH(CInput::eButton1)) {
		m_kill = true;
	}
}

