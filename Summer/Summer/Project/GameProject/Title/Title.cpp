#include "Title.h"
#include "../Game/Game.h"
Title::Title():Base(eType_Scene),
m_title_text("C:\\Windows\\Fonts\\msgothic.ttc", 64)
{
	m_img = COPY_RESOURCE("Title",CImage);
}

Title::~Title()
{
	//タイトル破棄時にゲームシーンへ移行
	Base::Add(new Game());
}

void Title::Update()
{
	//ボタン１でタイトル破棄
	if (PUSH(CInput::eButton1)) {
		m_kill = true;
	}
}

void Title::Draw()
{
	m_img.Draw();
	//文字表示
	m_title_text.Draw(380, 100, 0, 0, 0, "ゆでたまごの冒険");
	m_title_text.Draw(900, 700, 0, 0, 0, "スタート Z");
	m_title_text.Draw(650, 600, 0, 0, 0, "操作方法");
	m_title_text.Draw(500, 700, 0, 0, 0, "ジャンプ  X");
	m_title_text.Draw(600, 250, 0, 0, 0, "罠を避けながら");
	m_title_text.Draw(700, 310, 0, 0, 0, "ゴールを目指せ！");
}
