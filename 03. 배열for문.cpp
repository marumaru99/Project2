#include <iostream>
using namespace std;

//배열 for문 / 범위 기반 for문/ enhanced for문
//배열의 형태로 표현되어있는 자료구조에서 낱개의 요소만큼의 출력을 진행할 수 있는 간략화된 for문

//배열 for문
//for (배열 요소에 대한 표현 : 배열의 이름)
//{
//	반복할 명령문;
//}

int main()
{
	int numbers[] = { 1,3,5,7,9 };

	for (int number : numbers)
	{
		cout << number << " ";
	}


	return 0;
}