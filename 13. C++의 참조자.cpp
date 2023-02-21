#include <iostream>
using namespace std;

//참조자(Reference)
//변수를 참조하여 해당 변수를 대신할 수 있는 또 하나의 이름으로 써 사용할 수 있는 기능(별명)

//C에서는 주소 값을 저장해 표현하는 포인터로 전달을 진행했다면
//c++에서는 참조자를 통해 값을 대신 전달가능

//참조자는 주로 함수 설계에서 많이 사용
//장점: 기존의 포인터와 다르게 만들고 난 뒤 사용법이 변수와 다르지 않아 사용이 편함
//포인터와 마찬가지로 매개변수 등으로 활용될 때 변수 그 자체를 return하는 것보다 참조자의 return을 진행하는게
//전달이 더 빠름(데이터가 배우 큰 변수가 있을 경우)

//c++의 권장사항: 가능하면 참조자를 사용하고 어쩔수 없다면 포인터 사용
//포인터의 경우 엉뚱한 값을 가리키거나 엉뚱한 메모리를 수정하는 불상사가 발생할 수 있음
//&,*같은 연산자를 크게 사용하지 않아 코드 자체의 가독성이 늘어남

int main()
{
	int number = 10;
	int& price = number;//number를 참조하는 price
	//정의할 때 붙는 &는 참조자로 별명을 만들어주는 기능

	cout << "num: " << number << endl;
	cout<<"price:" << price << endl;
	cout << "num address:" << &number << endl;//여기서는 주소 값 반환용으로 사용
	cout << "price address:" << &price << endl;

	number += 5;
	cout << "num: " << number << endl;
	cout << "price:" << price << endl;
	cout << "num address:" << &number << endl;
	cout << "price address:" << &price << endl;
	return 0;
}