#include <iostream>
using namespace std;

//Bus, Seat, Person 클래스를 생성합니다.
class Bus
{
private:
		Bus(int a);
		int total;

public:
	void ride(int seatNumber, Person person);
	void info();
	//private 영역에 Seat에 대한 배열을 , 버스 정원(총 인원)을 필드 값으로 가지고 있습니다.

	//Bus의 생성자에서 숫자를 매개변수로 받아, 해당 숫자만큼의 배열을 할당합니다.(동적 할당) ex) Bus(10) : 좌석 10개

	//ride(int seatNumber, Person person)을 통해 존재하지 않는 시트 번호일 경우 ride를 종료합니다.
	// 시트에 사람이 없다면, 시트 번호에 Person에 대한 정보를 저장합니다.

	//info() 함수를 이용해 인원만큼 출력을 진행하며, 시트가 비어있는 자리는 "---"을 출력합니다.
};

class Seat
{
private:
	void personinfo(int a, Person person);
public:
	void setPerson(int i, Person person);
	//private 영역에 Person에 대한 정보를 필드 값으로 가지고 있습니다.
	//Person에 대한 getPerson, setPerson을 기능으로 가지고 있습니다.
};

class Person
{
private : 
	string name;
public :
	Person(string name) : name(name) {} //초기화 완료(멤버 이니셜라이저)
	string getName() { return name;  }
	void setName(string name) { this->name = name; }
};


int main()
{
	Bus* bus = new Bus(10);
	bus.ride(1, new Person("A")); // 인원 수와 사람을 추가합니다.
	bus.info(); //버스에 탑승하고 있는 전체 인원을 출력합니다.
	//A
	//---
	//---
	//---
	//---
	//---
	//---
	//---
	//---
	//---

	delete bus;
	return 0;

}

Bus::Bus(int a)
{
	list<string> Seat[a];
}

void Bus::ride(int seatNumber, Person person)
{
	if (seatNumber != Seat[a])
	{
		cout << "End Ride";
	}
	else
	{
		setPerson();
	}
}

void Seat::setPerson(int i, Person person)
{
	personinfo(int a, Person person)
	{
		a = i-1;
		cout << a, person << endl;
	}
}
