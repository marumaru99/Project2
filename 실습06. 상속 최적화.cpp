#include <iostream>
using namespace std;

//����, ����, �����ʿ� ���� Ŭ����
//�ش� ǰ���� ���������� ǥ���� �� �ִ� ��Ҹ� ��� ����ȭ�� ����

class Amount
{
public:
	int amount;
	int GetAmount() { return amount; }
	void SetAmount(int amount) { this->amount = amount; }
};

class Color
{
public:
	string color;
	string GetColor() { return color; }
	void SetColor(string color) { this->color = color;}
};

class Sharp : public Amount
{
public:
	string Sharp_lead;
	/*int amount;
	int GetAmount() { return amount; }
	void SetAmount(int amount) { this->amount = amount; }*/
};

class Ballpoint : public Amount, public Color
{
public:
	/*int amount;*/
	/*string color;
	string GetColor() { return color; }
	void SetColor(string color) { this->color = color; }*/
	/*int GetAmount() {}
	void SetAmount(int amount) {}*/
};
class Fountain : public Amount, public Color
{
public:
	//int amount;
	/*string color;
	string GetColor() { return color; }
	void SetColor(string color) { this->color = color; }*/
	/*int GetAmount() {}
	void SetAmount(int amount) {}*/
	void Fill(int amount) { this->amount += amount; }
};

int main() 
{
	

	return 0;
}