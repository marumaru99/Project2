#include <iostream>
using namespace std;

//함수에 대한 기본적인 형태 학습
//함수의 사용방법
//1.구현하고자 하는 기능 구상
//2.해당 값을 전달해줘야 할지, 작업 수 사라져도 되는지 판단
//2-1. 전달해야하는 경우: 
//1)return을 통해 값을 전달
//2)call-by-reference에 따라 포인터/참조자를 이용해 전달(void함수로 설계, 매개변수로 포인터/참조자 활용)
//2-2. 전달이 필요 없는 경우 void타입으로 설계
//3. 구현이 끝난 함수 호출
//3-1. return함수의 경우  변수 = 함수명(인자값);처럼 초기화를 통해 값 전달
//3-2. return함수의 경우 cout<<함수명(인자값);처럼 출력문에 직접 값을 전달
//3-3. void함수일 겨우 함수명(인자값);으로 결과 확인

//return함수: 가장 일반적. main함수에 있는 값에 대한 처리에서 사용
string sayYes()
{
	return "Say Yes!!";
}

//return이 아닌 함수. 값전달이 따로 없고 일반적인 작업 진행
//타입은 void
void Whoo()
{
	cout << "WHOOOO" << endl;
}

int main()
{
	cout << sayYes() << endl;
	//sayYes()호출. 호출된 자리에 Say Yes!!가 전달
	
	Whoo();
	//Whoo()안에 명령문이 다 종료되면 함수가 종료
	//return작성이 가능하지만 값을 전달하지는 못하고 return;만 써서 종료하는건 가능

	return 0;
}