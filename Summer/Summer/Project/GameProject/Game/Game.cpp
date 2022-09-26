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
	Base::Add(new Goal(CVector2D(3000, 540)));
	Base::Add(new Trap(CVector2D(400, 540),true));
	Base::Add(new Trap(CVector2D(650, 540), true));
	Base::Add(new Trap(CVector2D(890, 540), true));
	Base::Add(new Trap(CVector2D(1250, 540), true));
	Base::Add(new Trap(CVector2D(1950, 540), true));
	Base::Add(new Trap(CVector2D(2240, 540), true));
	Base::Add(new Trap(CVector2D(2770, 540), true));
	Base::Add(new Trap(CVector2D(2800, 540), true));
	Base::Add(new Trap(CVector2D(2850, 540), true));
	Base::Add(new Trap2(CVector2D(700, 470), true));
	Base::Add(new Trap2(CVector2D(1300, 480), true));
	Base::Add(new Trap2(CVector2D(1600, 419), true));
	Base::Add(new Trap2(CVector2D(1650, 419), true));
	Base::Add(new Trap2(CVector2D(1700, 419), true));
	Base::Add(new Trap2(CVector2D(1750, 419), true));
	Base::Add(new Trap2(CVector2D(2240, 480), true));
	Base::Add(new Trap2(CVector2D(2250, 480), true));
	Base::Add(new Trap2(CVector2D(2260, 480), true));
	Base::Add(new Trap2(CVector2D(2500, 500), true));
	Base::Add(new Trap2(CVector2D(2500, 265), true));
	Base::Add(new Trap2(CVector2D(2500, 270), true));
	Base::Add(new Trap2(CVector2D(2500, 275), true));
}

Game::~Game()
{
	//全てのオブジェクトを破棄
	Base::KillAll();
	//タイトルシーンへ
	Base::Add(new Title());
}

void Game::Update()
{
	//ゴールが無ければゲームシーン終了
	if (!Base::FindObject(eType_Goal)) {
		SetKill();
	}

	//プレイヤー死亡　ボタン１でゲームシーン終了
	if (!Base::FindObject(eType_Player) && PUSH(CInput::eButton1)) {
		m_kill = true;
	}
}

