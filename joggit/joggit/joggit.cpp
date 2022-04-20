// joggit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int lotto_ball = 7;
	int select_lotto[7] = {};
	cout << "----lotto 번호 뽑기----" << endl;
	for (int i = 0; i < 7; i++)
	{
		int lotto_num = 1 + rand() % ((45 - 1) + 1);
		/*if (select_lotto[i] == lotto_num)
		{
			int lotto_num = 1 + rand() % ((45 - 1) + 1);
		}*/
		select_lotto[i] = lotto_num;
		cout << select_lotto[i] << "\t";
	}
	// 이거 중복안나오게 하는법 어케해요 알려주세요 고수님
	cout << endl;
}

