#include <iostream>
using namespace std;

//스마트폰에 대한 클래스 설계
//정보
//모든 필드와 메소드는 public으로 설정
//메인 코드에서는 브랜드 이름 입력. 기기의 이름 입력. 통신 규격 선택. 내장 메모리와 운영체제 램은 입력하지 않고 설정
//해당 정보를 바탕으로 클래스를 설계. 클래스의 Info 호출

//필드: 브랜드명, 기기 이름, 통신 구격, 내장메모리, 운영체제OS, RAM


//메소드: 스마트폰의 정보를 출력해주는 함수 Info();


class phone
{
public :
	string brand;
	string name;
	string memory;
	string OS;
	string RAM;
	string com_standard;//protocol;

	void Info()
	{
		cout << brand << " " << name << " " << com_standard << " " << memory << endl;
		cout << "운영체제 :" << OS << endl;
		cout << "RAM :" << RAM <<endl;
	}


};

int main()
{
	/*
	내 풀이
	phone MY;
	int cs;
	MY.memory = "512GB";
	MY.OS = "안드로이드 12";
	MY.RAM = "12GB";
	cout << "브랜드 이름을 임력하세요. >>";
	cin >> MY.brand;
	cout << "기기 이름을 입력하세요. >>";
	cin >> MY.name;
	cout << "통신 구격을 선택하시요.\n 1.LTE  2.4G  3.5G >>";
	cin >> cs;
	if (cs == 3)
	{
		MY.com_standard = "5G";
	}

	MY.Info();*/

	string brand;
	string name;
	string protocol[] = { "LTE", "4G", "5G" };
	string select;


	cout << "브랜드 이름을 입력하세요. >>";
	cin >> brand;
	cout << "기기 이름을 입력하세요. >>";
	cin >> name;
	cin.ignore();
	cout << "통신 구격을 선택해주세요. >>";
	for (string s : protocol)
		cout << s << " ";
	cin >> select;

	phone phone01;
	phone01.brand = brand;
	phone01.name = name;
	phone01.com_standard = select;
	phone01.memory = 512;
	phone01.OS = "안드로이드 12";
	phone01.RAM = 12;

	cout << endl;

	phone01.Info();



	return 0;
}