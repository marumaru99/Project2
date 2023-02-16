#include <iostream>
using namespace std;

//C++의 클래스에는 상속이라는 기능을 통해 기존의 클래스를 가지고 더 강력한 클래스를 만들 수 있음

//상속 작성 방법(가장 일반적인 형태)
//class 부모클래스명
//{
//	필드
//	메소드
//	생성자...
//};
//class 자식클래스명 : public 부모클래스명
//{
//
//};

class A
{
private: //접근제어지시자 private는 클래스 내부에서만 접근이 가능
	int data;
protected: // 접근제어지시자 protected는 외부에서의 접근이 불가능
	       // 다만 상속받은 클래스 내부에서는 접근 가능
	int data2;
public: // 모든 위치에서 접근 가능
	void ShowInfo()
	{
		cout << "Show!" <<data<< endl;
	}
	int data3;
};
class B : public A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}
};   //public 상속
class C : protected A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}

};//protected 상속
class D : private A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}

};  //private 상속
int main()
{
	A a;
	B b;//B에서 만들지 않아도 A의 기능을 물려받았기 때문에 A의 메소드 사용 가능
	C c;
	D d;

	cout << b.data << endl;
	cout << b.data2 << endl;
	cout << b.data3 << endl;

	cout << c.data << endl;
	cout << c.data2 << endl;
	cout << c.data3 << endl; 

	cout << d.data << endl;
	cout << d.data2 << endl;
	cout << d.data3 << endl;
	//현재 적용이 가능한 값은 b.data3 한가지
	//data의 경우 private이기 때문에 접근 자체가 불가능
	//data2의 경우 protected이기 때문에 외부에서는 접근 불가. 내부에서만 접근 가능
	//c.data3, d.data3가 오류가 나는 이유
	//: c는 A의 값을 상속받을 때 protected로 상속을 받음
	//따라서 protected보다 접근 범위가 더 넓은 public 타입은 protected로 바뀌어 상속

	b.ShowInfo();
	//A를 상속받은 B클래스로 만든 b객체는 public영역의 메소드는 사용 가능하지만
	//private영역의 변수 data에는 접근 불가능
	
	return 0;
}