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

//상속의 사용 이유
//프로그램 상으로 클래스 간의 관계를 설명하기 용이함. 바나나(과일)처럼 카테고리를 나눠줄 수 있음
//부모 클래스에 구현한 기능은 자식 클래스에서 그대로 사용할 수 있기 때문에 
//기능 구현에서 중복적인 코드 작업을 안하게 되어 효율적인 코드 구성이 가능

//상속의 단점
//상속으로 설계된 클래스의 경우 부모 클래스의 기능을 그대로 쓰는 경우,
//해당 기능을 따로 작성하지 않기 때문에 코드를 읽어내고 분석하는 과정에서 불편할 수 있음(프로젝트 공유할 경우)
//캡슐화(Encapsulation)을 깨트리는 형태의 설계방법
//캡슐화란 타인이 외부에서 값을 조작할 것을 대비해 특정 필드, 메소드를 사용할 수 없게 숨겨두는 정보 은닉 기법(private)
//주로 필드 값을 private로 설정하고 필드에 대한 설정을 할 수 있는 메소드를 public 위치에 설계해 사용법만 전달하는 식으로 사용
//자식 틀래스에서 해당 기능을 파악하기 위해 반드시 부모 클래스의 구조를 다 파악해야 하는 상황이 발생할 수 있음

//상속을 써야하는 경우, 쓰면 좋은 경우
//1. is - a 관계인 경우 ex) dog is an animal 
//2. 확장하는 클래스가 내 클래스까지 전달되도 괜찮은 상황
//ex)유닛-몬스터 / 유닛-플레이어
//3. 내부에 대한 구현을 따로 노출하지 않아도 되는 상황
//주로 상하관계 표현일 경우, 재사용이 목적인 경우

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