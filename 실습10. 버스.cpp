#include <iostream>
using namespace std;

//Bus, Seat, Person Ŭ���� ����

class Bus
{
private:
	/*Seat�� ���� �迭��, ���� ������ �ʵ� �������� ��������
		Bus�� �����ڿ��� ���ڸ� �Ű������� �޾� �ش� ���ڸ�ŭ�� �迭�� �Ҵ�. (�����Ҵ�) Bus(10)= �¼� 10��

		ride (int seatNumber, Person person)�� ���� �������� �ʴ� ��Ʈ ��ȣ�� ��� ride����
		��Ʈ�� ����� ���ٸ� ��Ʈ ��ȣ�� person�� ���� ���� ����

		info�Լ��� �̿��� �ο���ŭ ����� ����. ��Ʈ�� ����ִ� �ڸ��� "---"�� ���*/

};

class Seat
{
private:
	/*Person�� ���� ������ �ʵ� ������ ������ ����
	person�� ���� getperson, setperson�� ������� ������ ����*/
};

class Person
{
private:
	string name;
public:
	Person(string name):name(name){}//�ʱ�ȭ �Ϸ�. ��� �̴ϼȶ�����
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

int main()
{
	Bus* bus = new Bus(10);
	bus.ride(1, new Person("A"));
	bus.info();//���� ��ü �ο�

	return 0;
}