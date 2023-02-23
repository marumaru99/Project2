//#include<iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void Cry()
//	{
//		cout << "동물의 울음소리를 표현" << endl;
//	};
//};
//
//class Tiger :public Animal
//{
//public:
//	void Cry() { cout << "어흥" << endl; };
//};
//
//class Dog :public Animal
//{
//public:
//	void Cry() { cout << "멍멍" << endl; };
//};
//
//class Cat :public Animal
//{
//public:
//	void Cry() { cout << "야옹" << endl; ; }
//};
//
////다형성(polymorphism): 하나의 객체를 통해 여러가지의 표현을 진행할 수 있게 하는 객체지향 프로그래밍 설계 기법
//
////1.상속 관계에서 해당 개념을 사용할 수 있음
////2. 부모 클래스를 자식 클래스의 형태로 생성
//
////장점: 단순 대입을 통해 자식의 형태로 변경이 가능. 하나의 문법으로 최적화가 가능
////객체 자체의 재사용이 매우 쉬워짐. 코드 구현의 편의성으로 이어짐
////하나의 타입으로 여러 객체에 대한 관리가 가능하기 때문에 유지 보수 작업이 가능
////클래스 간의 의존도가 낮아지면서 확장성은 늘어나는 방식으로 안전성도 증가
//
//int main()
//{
//	//배열로 활용하는 법
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
//	//대입으로 활용
//	Animal* animal;
//	Tiger* t = new Tiger();
//	Dog* d = new Dog();
//	Cat* c = new Cat();
//
//	//대입만 진행하면 같은 형태의 문법을 공유할 수 있기 때문에 설계도 더 쉬워짐
//	animal = t;
//	animal->Cry();
//	animal = d;
//	animal->Cry();
//
//
//	return 0;
//}