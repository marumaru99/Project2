//#include <iostream>
//using namespace std;
//
////Bus, Seat, Person 클래스를 생성합니다.
//
//
//class Seat
//{
//private:
//	Person p;
//	
//public:

//	Seat();
//	Person getPerson() { return p; };
//	void setPerson(Person person) { p = person; };
//	
//};
//
//class Person
//{
//private:
//	string name;
//public:
//	Person(string name) : name(name) {} //초기화 완료(멤버 이니셜라이저)
//	string getName() { return name; }
//	void setName(string name) { this->name = name; }
//};
//
//class Bus
//{
//private:
//	Seat* s;
//	int count;
//	
//
//public:
//	
//	Bus(int number)
//	{
//		s = new Seat[number];
//		count = number;
//		for (int i = 0; i < count; i++)
//		{
//			s[i] = new Seat();
//		}
//	}
//	void ride(int seatNumber, Person person)
//	{
//		if (seatNumber <= 0)
//			return;
//		Seat seat = s[seatNumber - 1];
//		Person p = seat.getPerson();
//	}
//
//	void info()
//	{
//		for (int i = 0; i < count; i++)
//		{
//			Seat seat = s[i];
//			Person person = seat.getPerson();
//			
//		}
//	}
//	
//};
//
//int main()
//{
//	Bus* bus = new Bus(10);
//	bus->ride(1, new Person("A")); // 인원 수와 사람을 추가합니다.
//	bus->info(); //버스에 탑승하고 있는 전체 인원을 출력합니다.
//	//A
//	//---
//	//---
//	//---
//	//---
//	//---
//	//---
//	//---
//	//---
//	//---
//
//	delete bus;
//	return 0;
//
//}
//
