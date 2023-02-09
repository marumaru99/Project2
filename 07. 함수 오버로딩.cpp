#include <iostream>
using namespace std;

//함수를 같은 이름으로 구현하는 것은 불가능. 
//하지만 다음과 같은 조건을 통해 위의 상황을 피할 수 있음.

//메소드 시그니처(method signiture)
//메소드(함수)의 선언부에 명시되는 매개변수의 리스트

//만약 두 함수가 매개변수의 개수, 타입, 순서가 동일할 경우 두 메소드이 시그니처는 같다고 판단.
//이게 다르면 시그니처가 다르다고 판단. 함수의 이름은 같지만 다른 형태의 값으로써 사용하는 기능 = 메소드 오버로딩

void Attack()
{
	cout << "공격을 진행" << endl;
}

void Attack(string stick)//위의 Attack과 이름은 동일하나 취급하는 데이터가 달라 오버로딩 성립.
//매개변수의 이름이 달라도 데이터의 형태가 같으면 오버로딩 성립X
{
	cout << stick << "(으)로 공격을 진행" << endl;
}


int main()
{
	Attack();//함수 호출
	Attack("몽둥이");

	return 0;
}

