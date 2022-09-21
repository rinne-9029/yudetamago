#include "Title.h"
#include "../Game/Game.h"
Title::Title():Base(eType_Scene),
m_title_text("C:\\Windows\\Fonts\\msgothic.ttc", 64)
{
	m_img = COPY_RESOURCE("Title",CImage);
}

Title::~Title()
{
	//�^�C�g���j�����ɃQ�[���V�[���ֈڍs
	Base::Add(new Game());
}

void Title::Update()
{
	//�{�^���P�Ń^�C�g���j��
	if (PUSH(CInput::eButton1)) {
		m_kill = true;
	}
}

void Title::Draw()
{
	m_img.Draw();
	//�����\��
	m_title_text.Draw(580, 156, 0, 0, 0, "Title");
	m_title_text.Draw(900, 700, 0, 0, 0, "�X�^�[�g Z");
	m_title_text.Draw(64, 300, 0, 0, 0, "������@");
	m_title_text.Draw(64, 450, 0, 0, 0, "�W�����v  X");
}
