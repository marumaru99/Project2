#include <iostream>
using namespace std;
//다음은 샤프 , 볼펜, 만년필에 대한 클래스 구성입니다.
//해당 품목을 공통적으로 표현할 수 있는 요소를 묶어서 최적화를 진행하시오.

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
	string Sharp_lead; //샤프심
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