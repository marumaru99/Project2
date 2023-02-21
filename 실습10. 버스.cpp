#include <iostream>
using namespace std;

//Bus, Seat, Person 클래스 생성

class Bus
{
private:
	/*Seat에 대한 배열을, 버스 정원을 필드 ㄱ밧으로 갖고있음
		Bus의 생성자에서 숫자를 매개변수로 받아 해당 숫자만큼의 배열을 할당. (동적할당) Bus(10)= 좌석 10개

		ride (int seatNumber, Person person)을 통해 존재하지 않는 시트 번호일 경우 ride종료
		시트에 사람이 없다면 시트 번호에 person에 대한 정보 저장

		info함수를 이용해 인원만큼 출력을 진행. 시트가 비어있는 자리는 "---"을 출력*/

};

class Seat
{
private:
	/*Person에 대한 정보를 필드 값으로 가지고 있음
	person에 대한 getperson, setperson을 기능으로 가지고 있음*/
};

class Person
{
private:
	string name;
public:
	Person(string name):name(name){}//초기화 완료. 멤버 이니셜라이저
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

int main()
{
	Bus* bus = new Bus(10);
	bus.ride(1, new Person("A"));
	bus.info();//버스 전체 인원

	return 0;
}