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
////foodInfo�� ���� ������ ��������� �ð��� ���Ŀ� ���� ���� ����
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
//	//������ ���� �Ҵ����� Ǫ�� ��
//	Food* menu[3];//Food�� �����ͷ� �������
//	//Ŭ���� �Ҵ� ���
//	//Ŭ������* Ŭ���������� = new ������(����)
//
//	menu[0] = new Ramen(3, "3�� ���");
//	//newŰ���带 ����ϸ� Ŭ������ �ڵ� ������ �Ҵ��� �� ����
//	menu[1] = new Spagetti(10, "�丶�� ���İ�Ƽ");
//	menu[2] = new Udon(4, "�ްԼ� �쵿");
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