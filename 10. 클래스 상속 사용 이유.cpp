#include <iostream>
using namespace std;

class fruit
{
public:
	void fruitInfo() { cout << "this is fruit" << endl; }
};

class Strawberry : public fruit
{
public:
	void strawberry() { cout << "red, smell good, vitamin C, sweet and sour" << endl; }
};

class Banana :public fruit
{
public:
	void banana() { cout << "yellow, low sugar, many glucose, sweet" << endl; }
};

//����� ��� ����
//���α׷� ������ Ŭ���� ���� ���踦 �����ϱ� ������. �ٳ���(����)ó�� ī�װ��� ������ �� ����
//�θ� Ŭ������ ������ ����� �ڽ� Ŭ�������� �״�� ����� �� �ֱ� ������ 
//��� �������� �ߺ����� �ڵ� �۾��� ���ϰ� �Ǿ� ȿ������ �ڵ� ������ ����

//����� ����
//������� ����� Ŭ������ ��� �θ� Ŭ������ ����� �״�� ���� ���,
//�ش� ����� ���� �ۼ����� �ʱ� ������ �ڵ带 �о�� �м��ϴ� �������� ������ �� ����(������Ʈ ������ ���)
//ĸ��ȭ(Encapsulation)�� ��Ʈ���� ������ ������
//ĸ��ȭ�� Ÿ���� �ܺο��� ���� ������ ���� ����� Ư�� �ʵ�, �޼ҵ带 ����� �� ���� ���ܵδ� ���� ���� ���(private)
//�ַ� �ʵ� ���� private�� �����ϰ� �ʵ忡 ���� ������ �� �� �ִ� �޼ҵ带 public ��ġ�� ������ ������ �����ϴ� ������ ���
//�ڽ� Ʋ�������� �ش� ����� �ľ��ϱ� ���� �ݵ�� �θ� Ŭ������ ������ �� �ľ��ؾ� �ϴ� ��Ȳ�� �߻��� �� ����

//����� ����ϴ� ���, ���� ���� ���
//1. is - a ������ ��� ex) dog is an animal 
//2. Ȯ���ϴ� Ŭ������ �� Ŭ�������� ���޵ǵ� ������ ��Ȳ
//ex)����-���� / ����-�÷��̾�
//3. ���ο� ���� ������ ���� �������� �ʾƵ� �Ǵ� ��Ȳ
//�ַ� ���ϰ��� ǥ���� ���, ������ ������ ���

int main()
{
	Strawberry strawberry;
	strawberry.fruitInfo();
	strawberry.strawberry();

	Banana banana;
	banana.fruitInfo();
	banana.banana();

	return 0;
}