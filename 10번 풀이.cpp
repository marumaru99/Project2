//#include <iostream>
//using namespace std;
//
////Bus, Seat, Person Ŭ������ �����մϴ�.
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
//	Person(string name) : name(name) {} //�ʱ�ȭ �Ϸ�(��� �̴ϼȶ�����)
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
//	bus->ride(1, new Person("A")); // �ο� ���� ����� �߰��մϴ�.
//	bus->info(); //������ ž���ϰ� �ִ� ��ü �ο��� ����մϴ�.
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
