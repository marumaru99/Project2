#include <iostream>
#include <cstdlib>//���� ����
#include <ctime>
#include <string>
using namespace std;

//Ŭ���� Card�� ����� main���� �̱� ����
class Card
{

public:
	Card();//�迭�� ���� �ε��� �־ ����(����)
	void CardInfo();//ī�� ���� Ȯ��
	int Cardsum();
	string Shape;
	int number;
	string color;
};

string Shapelist[4] = { "��","��","��","��" };//�������� ���õ� ���
int numberlist[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13};

int main()
{
	srand(time(NULL));
	/*Card c;
	c.CardInfo();
	Card c1;
	c1.CardInfo();*/
	//ī�带 �̾Ƽ� ���� ī�� ���� ����.
	//ī�� 2���� �̾Ƽ� ������ ���� �� ū �÷��̾ �¸��ϴ� ���� ����.
	//���� �־��� Ŭ������ Ȱ��, �����ؼ� �۾� ����
	Card a01;
	Card a02;
	cout << "ù ��° �÷��̾�� ī�� ������ �̾��ּ���." << endl;
	a01.CardInfo();
	a02.CardInfo();
	int playera = a01.number + a02.number;

	cout << "�� ������ ���� " << playera << "�Դϴ�.\n" << endl;
	
	Card b01;
	Card b02;
	cout << "�� ��° �÷��̾�� ī�� ������ �̾��ּ���." << endl;
	b01.CardInfo();
	b02.CardInfo();
	int playerb = b01.number + b02.number;
	cout << "�� ������ ���� " << playerb << "�Դϴ�.\n" << endl;
	if (playera > playerb)
	{
		cout << "ù ��° �÷��̾ �¸��߽��ϴ�." << endl;
	}
	else if (playera < playerb)
	{
		cout << "�� ��° �÷��̾ �¸��߽��ϴ�." << endl;
	}
	else
	{
		cout << "�����Դϴ�." << endl;
	}


	return 0;
}


Card::Card()
{
	Shape = Shapelist[rand() % 4];//rand���� 0~3
	number = numberlist[rand() % 13];//rand���� 0~12
}

void Card::CardInfo()
{
	cout << Shape << number << endl;
}



