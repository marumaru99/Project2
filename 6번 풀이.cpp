#include <iostream>
using namespace std;
//������ ���� , ����, �����ʿ� ���� Ŭ���� �����Դϴ�.
//�ش� ǰ���� ���������� ǥ���� �� �ִ� ��Ҹ� ��� ����ȭ�� �����Ͻÿ�.

class Pen
{
public:
	int amount;
	int GetAmount() { return amount; }
	void SetAmount(int amount) { this->amount = amount; }
};

class Sharp : public Pen
{
public:
	string Sharp_lead; //������
};

class Ballpoint : public Pen
{
public:
	string color;
	string GetColor() { return color; }
	void SetColor(string color) { this->color = color; }
	
};
class Fountain : public Ballpoint
{
public:
	void Fill(int amount) { this->amount += amount; }
};




int main()
{
	return 0;
}