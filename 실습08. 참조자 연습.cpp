#include <iostream>
using namespace std;

//�����ڸ� �̿��� ���� �䱸���׿� �����ϴ� �Լ� ����
//1.���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ� PlusValue
//2.���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ� ChangeSign

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