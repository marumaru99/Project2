#include <iostream>
using namespace std;

//C++�� Ŭ�������� ����̶�� ����� ���� ������ Ŭ������ ������ �� ������ Ŭ������ ���� �� ����

//��� �ۼ� ���(���� �Ϲ����� ����)
//class �θ�Ŭ������
//{
//	�ʵ�
//	�޼ҵ�
//	������...
//};
//class �ڽ�Ŭ������ : public �θ�Ŭ������
//{
//
//};

class A
{
private: //�������������� private�� Ŭ���� ���ο����� ������ ����
	int data;
protected: // �������������� protected�� �ܺο����� ������ �Ұ���
	       // �ٸ� ��ӹ��� Ŭ���� ���ο����� ���� ����
	int data2;
public: // ��� ��ġ���� ���� ����
	void ShowInfo()
	{
		cout << "Show!" <<data<< endl;
	}
	int data3;
};
class B : public A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}
};   //public ���
class C : protected A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}

};//protected ���
class D : private A
{
public:
	void dataInfo()
	{
		//cout << data << endl;
		cout << data2 << endl;
		cout << data3 << endl;
	}

};  //private ���
int main()
{
	A a;
	B b;//B���� ������ �ʾƵ� A�� ����� �����޾ұ� ������ A�� �޼ҵ� ��� ����
	C c;
	D d;

	cout << b.data << endl;
	cout << b.data2 << endl;
	cout << b.data3 << endl;

	cout << c.data << endl;
	cout << c.data2 << endl;
	cout << c.data3 << endl; 

	cout << d.data << endl;
	cout << d.data2 << endl;
	cout << d.data3 << endl;
	//���� ������ ������ ���� b.data3 �Ѱ���
	//data�� ��� private�̱� ������ ���� ��ü�� �Ұ���
	//data2�� ��� protected�̱� ������ �ܺο����� ���� �Ұ�. ���ο����� ���� ����
	//c.data3, d.data3�� ������ ���� ����
	//: c�� A�� ���� ��ӹ��� �� protected�� ����� ����
	//���� protected���� ���� ������ �� ���� public Ÿ���� protected�� �ٲ�� ���

	b.ShowInfo();
	//A�� ��ӹ��� BŬ������ ���� b��ü�� public������ �޼ҵ�� ��� ����������
	//private������ ���� data���� ���� �Ұ���
	
	return 0;
}