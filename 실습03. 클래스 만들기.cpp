#include <iostream>
using namespace std;

//����Ʈ���� ���� Ŭ���� ����
//����
//��� �ʵ�� �޼ҵ�� public���� ����
//���� �ڵ忡���� �귣�� �̸� �Է�. ����� �̸� �Է�. ��� �԰� ����. ���� �޸𸮿� �ü�� ���� �Է����� �ʰ� ����
//�ش� ������ �������� Ŭ������ ����. Ŭ������ Info ȣ��

//�ʵ�: �귣���, ��� �̸�, ��� ����, ����޸�, �ü��OS, RAM


//�޼ҵ�: ����Ʈ���� ������ ������ִ� �Լ� Info();


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
		cout << "�ü�� :" << OS << endl;
		cout << "RAM :" << RAM <<endl;
	}


};

int main()
{
	/*
	�� Ǯ��
	phone MY;
	int cs;
	MY.memory = "512GB";
	MY.OS = "�ȵ���̵� 12";
	MY.RAM = "12GB";
	cout << "�귣�� �̸��� �ӷ��ϼ���. >>";
	cin >> MY.brand;
	cout << "��� �̸��� �Է��ϼ���. >>";
	cin >> MY.name;
	cout << "��� ������ �����Ͻÿ�.\n 1.LTE  2.4G  3.5G >>";
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


	cout << "�귣�� �̸��� �Է��ϼ���. >>";
	cin >> brand;
	cout << "��� �̸��� �Է��ϼ���. >>";
	cin >> name;
	cin.ignore();
	cout << "��� ������ �������ּ���. >>";
	for (string s : protocol)
		cout << s << " ";
	cin >> select;

	phone phone01;
	phone01.brand = brand;
	phone01.name = name;
	phone01.com_standard = select;
	phone01.memory = 512;
	phone01.OS = "�ȵ���̵� 12";
	phone01.RAM = 12;

	cout << endl;

	phone01.Info();



	return 0;
}