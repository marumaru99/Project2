#include <iostream>
#include <cstdlib>//랜덤 진행
#include <ctime>//time 사용
using namespace std;

//클래스 Card를 만들어 main에서 뽑기 진행
class Card
{
private:
	string Shapelist[4] = { "◆","♠","♥","♣" };//랜덤으로 선택될 목록
	string numberlist[13] = { "A","2","3","4","5","6","7","8","9","10","J","Q","K" };
	string Shape;
	string number;
	string color;

public:
	Card();//배열에 대한 인덱스 넣어서 생성(랜덤)
	void CardInfo();//카드 정보 확인
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
	Shape = Shapelist[rand() % 4];//rand범위 0~3
	number = numberlist[rand() % 13];//rand범위 0~12
	cout << "카드를 1장 뽑았습니다" << endl;
}

void Card::CardInfo()
{
	cout << Shape << number << endl;
}
