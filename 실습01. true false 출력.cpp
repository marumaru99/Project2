//#include <iostream>
//using namespace std;
//
////C++의 논리형 타입 bool은 true와 false에 대한 저장이 가능
////출력을 진행할 경우 숫자 타입인 1,0로 표현
////C++에서는 아래의 기능을 통해 true와 flase로 출력되도록 설정
//
//int main()
//{
//	bool logics[] = { 1,0,1,0,1 };
//
//	cout << boolalpha;
//	//<iostream> boolalpha는 스트림에 설정을 저장하여 bool타입의 값을 알파벳 형태로 출력되도록 설정
//	//해당 기능은 따로 변경하지 않는 이상 계속 유지
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << logics[i] << " ";
//		//*(logics+i)도 사용가능
//	}
//	cout << "\n" << noboolalpha;
//	//bool타입의 값을 다시 숫자 형태로
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << logics[i] << " ";
//	}
//
//	return 0;
//}