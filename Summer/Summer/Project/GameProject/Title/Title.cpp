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
	m_title_text.Draw(380, 100, 0, 0, 0, "��ł��܂��̖`��");
	m_title_text.Draw(900, 700, 0, 0, 0, "�X�^�[�g Z");
	m_title_text.Draw(650, 600, 0, 0, 0, "������@");
	m_title_text.Draw(500, 700, 0, 0, 0, "�W�����v  X");
	m_title_text.Draw(600, 250, 0, 0, 0, "㩂�����Ȃ���");
	m_title_text.Draw(700, 310, 0, 0, 0, "�S�[����ڎw���I");
}
