#include <iostream>
using namespace std;

//참조자를 이용해 다음 요구사항에 부합하는 함수 정의
//1.인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수 PlusValue
//2.인자로 전달된 int형 변수의 부호를 바꾸는 함수 ChangeSign

int PlusValue(int& a)
{
	return a + 1;
}

int ChangeSign(int& a)
{
	return a * -1;
}

int main()
{
	int number;

	cout << "Input number for argument >> ";
	cin >> number;

	cout << "After PluseValue >>" << PlusValue(number) << endl;
	cout << "After ChangeSign >>" << ChangeSign(number) << endl;
	

	return 0;
}