// joggit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    std::cout << "Hello Collaboration\n";
  /* 별을 찍어보자
       *
       **
       ***
       ****
       *****
       .
       .
       .
       
       */
    int input_num; 
    cout << "숫자를 입력하시오." << endl; 
    cin >> input_num;   //원하는 반복수만큼 출력할수 있게 입력
    for (int i = 0; i < input_num; i++) //입력한 수 만큼 세로로 출력하게 반복
    {
        for (int j = 0; j <= i; j++) // 입력한 수 만큼 별이 출력하게 반복
        {
            if(i >= j)  //조건문을 씀으로서 별의 갯수를 조정
            cout << "*";
        }
        cout << endl;
    }
    
 cout << "git 너무 어려워욥";
    std::cout << "Hello Collaboration!\n";
    std::cout << "minwoo hi\n";
}

