/**
*@brief			AdminMode: 2. Accepte PreUser Infomation Done Join progress
*@details		Transfor Data from struct `PreUser` to struct `User`
*@author		Joung Dong Sub
*@version		0.0.3
*@todo
*		���� �ɷ��� �������� �Ф�...
*		join���� preuser ����ü�� �����Ҵ��� ���� �����ͼ� userinfo�� �����Ҵ��ؼ� �����ϰ�
*		������ ���� ��� ��� �� id�� �Է��ϸ� ���εǴ� ������ �����ϰ� �;����ϴ�.
*/


#include "Admin_ApproveUser.h"

void Admin_ApproveUser::init_ApproveUser()
{
	cout << "�̽��� ȸ���� ���������� �����մϴ�." << endl;
	MoveUserData(preuser_info);
	cout << "���ε� ���� ID" << newUser->m_user_ID << endl;
}

