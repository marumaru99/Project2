#include <iostream>
#include <cmath> //c����� math.h��� ������ c++����
using namespace std;

//�������� ���� ������ �ʵ� ������, ���� ���̿� ���� �ѷ��� �޼ҵ�� ������ Ŭ���� ����
class Circle
{
public:
	float a;

	Circle(float b);

	//����� Ǯ��
	//int radius; ������
	//Circle(int radius); �� �ְ� ������ ������
	//float Area();
	//float circum();

	float Area()
	{
		return 3.14 * a*a;
		// 3.14 * pow(a,2);
		//������ ���� �۾� �� �� �ִ� ���
		//C++�� ��� <cmath>�� �����ؼ� pow(float base, float n);�� ���� �۾� ����
		//pow(������ �� base�� ��, n����); base^n�̶�� �θ�
	}

	float circum()
	{
		return 2 * 3.14 * a;
	}
};

int main()
{
	Circle c(10);
	cout << "���� ����: " << c.Area() << endl;
	cout << "���� �ѷ�: " << c.circum() << endl;

	return 0;
}

//Circle::Circle(int radius)
//{
//    �Ű������� �Ѱ��� radius�� Ŭ������ �ʵ� ������ �ʱ�ȭ�� �ǵ��� �۾�.
//    this->(�����͸� �̿��� Ŭ������ radius���� ǥ���ؼ� �ۼ��ϴ� ���)
//   �Ű������� �̸��� �ʵ� ���� �ٸ��� �����ϸ� �ش� �۾��� ���ص� ��� ����.
//}

//float Circle::Area()
//{
// �Լ� �ȿ��� ������ ����� �� ����� ���� �Ǵ� ���� �ȿ� ��� �۾� �����ؼ� ����
// return;
//}

//float Circle::circum()
//{
// return;
//}

Circle::Circle(float b)
{
	a = b;
}
