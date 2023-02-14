#include <iostream>
#include <cstdlib>//랜덤 진행
#include <ctime>
#include <string>
using namespace std;

//클래스 Card를 만들어 main에서 뽑기 진행
class Card
{

public:
	Card();//배열에 대한 인덱스 넣어서 생성(랜덤)
	void CardInfo();//카드 정보 확인
	int Cardsum();
	string Shape;
	int number;
	string color;
};

string Shapelist[4] = { "◆","♠","♥","♣" };//랜덤으로 선택될 목록
int numberlist[13] = { 1,2,3,4,5,6,7,8,9,10,11,12,13};

int main()
{
	srand(time(NULL));
	/*Card c;
	c.CardInfo();
	Card c1;
	c1.CardInfo();*/
	//카드를 뽑아서 뽑은 카드 숫자 보관.
	//카드 2개를 뽑아서 숫자의 합이 더 큰 플레이어가 승리하는 게임 구성.
	//현재 주어진 클래스를 활용, 수정해서 작업 진행
	Card a01;
	Card a02;
	cout << "첫 번째 플레이어는 카드 두장을 뽑아주세요." << endl;
	a01.CardInfo();
	a02.CardInfo();
	int playera = a01.number + a02.number;

	cout << "두 숫자의 합은 " << playera << "입니다.\n" << endl;
	
	Card b01;
	Card b02;
	cout << "두 번째 플레이어는 카드 두장을 뽑아주세요." << endl;
	b01.CardInfo();
	b02.CardInfo();
	int playerb = b01.number + b02.number;
	cout << "두 숫자의 합은 " << playerb << "입니다.\n" << endl;
	if (playera > playerb)
	{
		cout << "첫 번째 플레이어가 승리했습니다." << endl;
	}
	else if (playera < playerb)
	{
		cout << "두 번째 플레이어가 승리했습니다." << endl;
	}
	else
	{
		cout << "동점입니다." << endl;
	}


	return 0;
}


Card::Card()
{
	Shape = Shapelist[rand() % 4];//rand범위 0~3
	number = numberlist[rand() % 13];//rand범위 0~12
}

void Card::CardInfo()
{
	cout << Shape << number << endl;
}



