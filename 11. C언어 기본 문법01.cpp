#include <iostream>
using namespace std;
//1.if문: 프로그램에서 특정 조건을 세워서 그 조건식이 결과에 따라
//프로그램의 실행 여부 판단하는 제어문

//if문의 형태
//초기식; 조건식을 세우기 위해 필요한 변수를 만들어주는 것
//if (조건식)
//{
//	조건식의 결과가 참일 때 실행할 명령문
//}
//
//else
//{
//	위의 모든 조건식의 결과가 참일때 실행할 명령문
//}
//else if
//{
//	조건식의 결과가 거짓이고 조건식2의 결과가 참일 경우 실행할 명령문
//}

int main()
{
	//만약 플레이어 이름이 RED라면 이름옆에 [SPECIAL]을 같이 출력
	string Player_name;
	//플레이어의 이름 입력받기

	cout << "플레이어 이름: ";
	cin >> Player_name;

	if (Player_name == "RED")
	{
		cout << Player_name << "[SPECIAL]" << endl;
	}
	/*if (Player_name != "RED")
	{
		cout << Player_name;
	}*/

	else
	{
		cout << Player_name << endl;
	}

	//if,if를 쓰는 경우는 조건문 2개에 대한 처리.
	//if, else를 쓰는 경우는 조건문 하나에 대한 처리

	return 0;
}