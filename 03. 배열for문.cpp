#include <iostream>
using namespace std;

//�迭 for�� / ���� ��� for��/ enhanced for��
//�迭�� ���·� ǥ���Ǿ��ִ� �ڷᱸ������ ������ ��Ҹ�ŭ�� ����� ������ �� �ִ� ����ȭ�� for��

//�迭 for��
//for (�迭 ��ҿ� ���� ǥ�� : �迭�� �̸�)
//{
//	�ݺ��� ��ɹ�;
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