#include <iostream>
using namespace std;

//준비되어 있는 클래스를 상속 받아 원을 달러로 변환하는 클래스 작성

class converter
{
public: 
	virtual float convert(float src) = 0;
	//순수 가상함수 
	//virtual 자료형 함수명()=0; 의 형태로 설계된 함수
	//별도로 구현을 진행하지 않고 선언으로 함수를 만들 수 있음
	//해당 함수가 클래스 네에 1개 이상 포함되어있을 경우 해당 클래스를 추상 클래스라고 부르며
	//이 추상 클래스를 상속받으면 반드시 해당 순수 가상함수를 재정의 해야함.

	//사용이유: 자식 클래스에서 재정의를 진행할 것이기에 따로 구현할 필요는 없음
	//자식 클래스에서 반드시 재정의를 진행해서 설계할 수 있게 하기 위함(다형성에 대한 보장)
	//자식 클래스 입장에서는 구현해야할 틀을 부모 클래스에서 제공해주기에 그 형태에 맞게 구현만 진행하면 됨.
	virtual string getString() = 0;
	virtual string getString2() = 0;
	float ratio;//비율


	void Converting()
	{
		cout << getString() << "을" << getString2() << "로 변환합니다." << endl;
		cout << getString() << "을 입력해주세요. >> ";
		float value;
		cin >> value;
		cout << "변환 결과: " << convert(value) << getString2() << endl;
	}
};

class W2D : public converter
{
public: 
	W2D(float a);
	float convert(float src)
	{
		return src/ratio;
	}

	string getString() { return "원"; };
	string getString2() { return "달러"; };
};

int main()
{
	W2D* w2d = new W2D(1400);
	w2d->Converting();


	return 0;
}

W2D::W2D(float a)
{
	ratio = a;
}
