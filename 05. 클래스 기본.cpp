//#include <iostream>
//using namespace std;
//
////클래스(Class): 개체를 만들기 위한 툴
//
////객체(개체) : 개체에 대한 속성(변수), 개체의 기능(함수)를 가진 것
//
//
//
////체크 카드 클래스 만들어보기
//
////클래스의 기본 구조(접근 제어 지시자)
////class 클래스명
////{
////private :
////	이 위치에 적힌 값들은 클래스 내부에서만 접근 가능.
////
////public :
////	공개할 정보를 아래에 작성
////	public이 적혀있지 않다면 private상태로 취급.
////	해당 값은 클래스 내부 이외에는 접근할 수 없음.
////
////};
////
////class 클래스명
////{
////	변수; //클래스 내부에 있는 변수를 개체의 속성이라고 말하며, 필드(field)라고 부름
////
////	함수; //클래스 내부에 있는 함수를 개체의 동작이라고 말하며, 메소드(method)라고 부름
////
////
////};
//
////struct와 형태가 유사함
//class CheckCard
//{
//public :
//	string card_name;
//	string user_name;
//	string id;//체크카드에 대한 정보를 표현하는 16개의 숫자를 문자로 표현
//	int cvv;//카드 뒷면 숫자 3개
//	int month;
//	int day;
//	int pwd;
//
//
//	//기존의 구조체는 함수를 포함할 수 없었음.
//	//클래스는 구조체의 상위버전으로 함수 포함 가능
//	//C++에서는 구조체도 상향을 받아 함수 포함 가능
//	bool check(int pwd)
//	{
//		if (this->pwd == pwd)//값을 넘겨준 비밀번호와 체크 카드의 비번이 일치한다면
//		{
//			return true;
//		}
//		return false;
//	}
//};
//
//
//int main()
//{
//	//클래스 선언 방법
//	//클래스명 클래스변수명;
//	CheckCard SunTrust;
//	SunTrust.card_name = "SunTrust";
//	//클래스는 구조체와 다르게 접근 제한자를 통해 프로그램에 정보에 대한 접근을 설정할 수 있음
//	//이 경우 클래스의 속성이 적힌 곳 위에 public :을 추가하면 해당 정보 공개
//	SunTrust.user_name = "Terry Miller";
//	SunTrust.day = 12;
//	SunTrust.month = 6;
//	SunTrust.cvv = 467;
//	SunTrust.pwd = 4011;
//	SunTrust.id = "4754 1234 5678 0910";
//
//	int input_pwd;
//	cout << "비밀번호를 입력해주세요. >>";
//	cin >> input_pwd;
//	if (SunTrust.check(input_pwd) == true)
//	{
//		cout << "결제가 완료되었습니다." << endl;
//	}
//
//	return 0;
//}