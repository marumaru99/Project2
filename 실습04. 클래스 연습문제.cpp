#include <iostream>
#include <cmath> //c언어의 math.h헤더 파일의 c++버전
using namespace std;

//반지름에 대한 정보를 필드 값으로, 원의 넓이와 원의 둘레를 메소드로 가지는 클래스 구현
class Circle
{
public:
	float a;

	Circle(float b);

	//강사님 풀이
	//int radius; 반지름
	//Circle(int radius); 을 넣고 생성할 생성자
	//float Area();
	//float circum();

	float Area()
	{
		return 3.14 * a*a;
		// 3.14 * pow(a,2);
		//제곱을 따로 작업 할 수 있는 방법
		//C++의 헤더 <cmath>를 연결해서 pow(float base, float n);을 통해 작업 진행
		//pow(제곱을 할 base의 값, n제곱); base^n이라고 부름
	}

	float circum()
	{
		return 2 * 3.14 * a;
	}
};

int main()
{
	Circle c(10);
	cout << "원의 넓이: " << c.Area() << endl;
	cout << "원의 둘레: " << c.circum() << endl;

	return 0;
}

//Circle::Circle(int radius)
//{
//    매개변수로 넘겨준 radius가 클래스의 필드 값으로 초기화가 되도록 작업.
//    this->(포인터를 이용해 클래스의 radius임을 표현해서 작성하는 방법)
//   매개변수의 이름을 필드 값과 다르게 설정하면 해당 작업을 안해도 상관 없음.
//}

//float Circle::Area()
//{
// 함수 안에서 계산식을 만들어 그 결과를 리턴 또는 리턴 안에 계산 작업 진행해서 리턴
// return;
//}

//float Circle::circum()
//{
// return;
//}

Circle::Circle(float b)
{
	a = b;
}
