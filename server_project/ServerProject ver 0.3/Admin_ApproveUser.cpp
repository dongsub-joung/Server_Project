#include "Admin_ApproveUser.h"

void Admin_ApproveUser::init_ApproveUser()
{
	cout << "�̽��� ȸ���� ���������� �����մϴ�." << endl;
	MoveUserData(preuser_info);
	cout << "���ε� ���� ID" << newUser->m_user_ID << endl;
}

//���� �ɷ��� �������� �Ф�...
//join���� preuser ����ü�� �����Ҵ��� ���� �����ͼ� userinfo�� �����Ҵ��ؼ� �����ϰ�
// ������ ���� ��� ��� �� id�� �Է��ϸ� ���εǴ� ������ �����ϰ� �;����ϴ�.