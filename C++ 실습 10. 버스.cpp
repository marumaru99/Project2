#include <iostream>
using namespace std;

//Bus, Seat, Person Ŭ������ �����մϴ�.
class Bus
{
private:
		Bus(int a);
		int total;

public:
	void ride(int seatNumber, Person person);
	void info();
	//private ������ Seat�� ���� �迭�� , ���� ����(�� �ο�)�� �ʵ� ������ ������ �ֽ��ϴ�.

	//Bus�� �����ڿ��� ���ڸ� �Ű������� �޾�, �ش� ���ڸ�ŭ�� �迭�� �Ҵ��մϴ�.(���� �Ҵ�) ex) Bus(10) : �¼� 10��

	//ride(int seatNumber, Person person)�� ���� �������� �ʴ� ��Ʈ ��ȣ�� ��� ride�� �����մϴ�.
	// ��Ʈ�� ����� ���ٸ�, ��Ʈ ��ȣ�� Person�� ���� ������ �����մϴ�.

	//info() �Լ��� �̿��� �ο���ŭ ����� �����ϸ�, ��Ʈ�� ����ִ� �ڸ��� "---"�� ����մϴ�.
};

class Seat
{
private:
	void personinfo(int a, Person person);
public:
	void setPerson(int i, Person person);
	//private ������ Person�� ���� ������ �ʵ� ������ ������ �ֽ��ϴ�.
	//Person�� ���� getPerson, setPerson�� ������� ������ �ֽ��ϴ�.
};

class Person
{
private : 
	string name;
public :
	Person(string name) : name(name) {} //�ʱ�ȭ �Ϸ�(��� �̴ϼȶ�����)
	string getName() { return name;  }
	void setName(string name) { this->name = name; }
};


int main()
{
	Bus* bus = new Bus(10);
	bus.ride(1, new Person("A")); // �ο� ���� ����� �߰��մϴ�.
	bus.info(); //������ ž���ϰ� �ִ� ��ü �ο��� ����մϴ�.
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
