//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void Cry()
//	{
//		cout << "������ �����Ҹ��� ǥ��" << endl;
//	};
//};
//
//class Tiger :public Animal
//{
//public:
//	void Cry() { cout << "����" << endl; };
//};
//
//class Dog :public Animal
//{
//public:
//	void Cry() { cout << "�۸�" << endl; };
//};
//
//class Cat :public Animal
//{
//public:
//	void Cry() { cout << "�߿�" << endl; ; }
//};
//
////������(polymorphism): �ϳ��� ��ü�� ���� ���������� ǥ���� ������ �� �ְ� �ϴ� ��ü���� ���α׷��� ���� ���
//
////1.��� ���迡�� �ش� ������ ����� �� ����
////2. �θ� Ŭ������ �ڽ� Ŭ������ ���·� ����
//
////����: �ܼ� ������ ���� �ڽ��� ���·� ������ ����. �ϳ��� �������� ����ȭ�� ����
////��ü ��ü�� ������ �ſ� ������. �ڵ� ������ ���Ǽ����� �̾���
////�ϳ��� Ÿ������ ���� ��ü�� ���� ������ �����ϱ� ������ ���� ���� �۾��� ����
////Ŭ���� ���� �������� �������鼭 Ȯ�强�� �þ�� ������� �������� ����
//
//int main()
//{
//	//�迭�� Ȱ���ϴ� ��
//	Animal* a[3];
//	a[0] = new Tiger();
//	a[1] = new Dog();
//	a[2] = new Cat();
//	
//	for (Animal* animal : a)
//	{
//		animal->Cry();
//	}
//
//	//�������� Ȱ��
//	Animal* animal;
//	Tiger* t = new Tiger();
//	Dog* d = new Dog();
//	Cat* c = new Cat();
//
//	//���Ը� �����ϸ� ���� ������ ������ ������ �� �ֱ� ������ ���赵 �� ������
//	animal = t;
//	animal->Cry();
//	animal = d;
//	animal->Cry();
//
//
//	return 0;
//}