#include "Admin_ApproveUser.h"

void Admin_ApproveUser::init_ApproveUser()
{
	cout << "미승인 회원의 승인절차를 실행합니다." << endl;
	MoveUserData(preuser_info);
	cout << "승인된 유저 ID" << newUser->m_user_ID << endl;
}

//구현 능력이 떨어져서 ㅠㅠ...
//join에서 preuser 구조체를 동적할당한 것을 가져와서 userinfo도 동적할당해서 복사하고
// 승인할 유저 목록 출력 후 id를 입력하면 승인되는 쪽으로 구현하고 싶었습니다.