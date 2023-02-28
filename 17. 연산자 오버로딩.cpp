#include <iostream>
using namespace std;

//연산자 오버로딩
//클래스 내부의 연산자를 수정할 때 사용하는 기능

class A
{
private:
	int atk;
	int def;
public:
	A(int atk, int def):atk(atk),def(def){}
	void Info() { cout << "공격력: " << atk << " 방어력: " << def << endl; }
	//int getatk() { return atk; }
	//int getdef() { return def; }
	A operator+(const A& other)//operator기호는 클래스가 가지고 있는 연산자에 대한 인라인 함수
	//인라인 함수는 일반적인 함수의 호출과정을 거치지 않고 함수의 모든 코드를 호출된 자리에서 바로 삽입하는 방식의 함수
	//매개변수 앞에 const 키워드가 붙어있는 경우 특정 함수에 전달하는 포인터의 내용이 훼손되을 것을 방지
	{
		return A(atk + other.atk, def + other.def);
	}
};


int main()
{
	A unit1(1500, 1000);
	A unit2(1000, 1500);

	//이번에 만들 유닛3는 유닛 1,2의 공격력/방어력의 합계 만큼의 수치를 가지는 유닛

	A unit3(1000 + 1500, 1000 + 1500);
	//A unit3(unit1.getatk() + unit2.getatk(), unit1.getdef() + unit2.getdef());
	//A unit3= unit1+unit2 
	//오류 발생. 클래스에 있는 값 중에 어떤 값에 대한 연산인지 설정이 안되어있기 때문

	//C++에서는 연산자로 표현하면 더 사용이 쉬울 수 있는 상황을 처리해줄 수 있도록
	//연산자에 대한 오버로딩을 지원함

	//클래스 내부의 연산자를 클래스의 필드 값을 더하는 결과를 내보내도록 코드를 작성
	
	A unit4 = unit1 + unit2;

	unit4.Info();

	//장점
	//객체도 자료형을 통해 만든 변수와 마찬가지로 기본연산으로 표현 가능
	//코드상으로 연산자를 통해 표현하는게 더 자연스러운 상황에 적합
	//더 자유롭고 편리한 코드를 설계할 수 있음

	//주의할 점
	//아예 새로운 개념의 기호를 통해 연산자를 정의하는 건 불가능
	//기본적으로 설정된 부분은 변경이 불가능. (연산에 필요한 피연산자 개수, 우선순위,결합 방향)
	//프로그램 내에서 정의되어 있는 기본 데이터 형에 대해서는 연산자의 오버로딩 불가능
	//수정을 진행하되 기존의 기능과 아예 다른 형태로 설계하는 것은 코드 처리에 대한 혼란을 줄 수 있음.

	return 0;

}