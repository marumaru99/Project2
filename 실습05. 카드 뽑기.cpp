#include <iostream>
#include <cstdlib>//���� ����
#include <ctime>//time ���
using namespace std;

//Ŭ���� Card�� ����� main���� �̱� ����
class Card
{
private:
	string Shapelist[4] = { "��","��","��","��" };//�������� ���õ� ���
	string numberlist[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	string Shape;
	string number;
	string color;

public:
	Card();//�迭�� ���� �ε��� �־ ����(����)
	void CardInfo();//ī�� ���� Ȯ��
};


int main()
{
	srand(time(NULL));
	Card c;
	Card c1;
	c.CardInfo();
	c1.CardInfo();

	return 0;
}



Card::Card()
{
	Shape = Shapelist[rand() % 4];//rand���� 0~3
	number = numberlist[rand() % 13];//rand���� 0~12
	cout << "ī�带 1�� �̾ҽ��ϴ�" << endl;
}

void Card::CardInfo()
{
	cout << Shape << number << endl;
}
