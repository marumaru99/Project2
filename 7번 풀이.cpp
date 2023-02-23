//#include <iostream>
//using namespace std;
//
//class Food
//{
//public:
//	int make_time;
//	string description;
//	void food() { cout << "this is food" << endl; }
//	void foodInfo() { cout << "food info" << endl; }
//};
//
////foodInfo를 통해 음식이 만들어지는 시간과 음식에 대한 설명 서술
//
//class Ramen :public Food
//{
//public:
//	Ramen(int time, string desc)
//	{
//		make_time = time;
//		description = desc;
//	}
//};
//
//
//class Spagetti :public Food
//{
//public:
//	Spagetti(int time, string desc) 
//	{
//		make_time = time;
//		description = desc;
//
//	}
//};
//
//class Udon :public Food
//{
//public:
//	Udon(int time, string desc)
//	{
//		make_time = time;
//		description = desc;
//
//	}
//
//};
//
//void ShowMenu(Food f)
//{
//	f.foodInfo();
//}
//
//int main()
//{
//	//문제를 동적 할당으로 푸는 법
//	Food* menu[3];//Food를 포인터로 만들어줌
//	//클래스 할당 방법
//	//클래스명* 클래스변수명 = new 생성자(변수)
//
//	menu[0] = new Ramen(3, "3분 라면");
//	//new키워드를 사용하면 클래스를 코드 내에서 할당할 수 있음
//	menu[1] = new Spagetti(10, "토마토 스파게티");
//	menu[2] = new Udon(4, "휴게소 우동");
//	
//
//	for (Food* f : menu)
//	{
//		f->foodInfo();
//	}
//
//	delete[] menu;
//
//		return 0;
//}