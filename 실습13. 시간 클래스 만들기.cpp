#include <iostream>
using namespace std;

class MyTime
{
private:
	int hour;
	int min;
	int sec;

public:
	MyTime(int h, int m, int s):hour(h),min(m),sec(s){}
	void TimeInfo() { cout << hour << ": " << min << ": " << sec << endl; }
	MyTime operator-(const MyTime& other)
	{
		/*if (min>=other.min&&sec>=other.sec)
		{
		 MyTime(hour - other.hour, min - other.min, sec - other.sec);
		};
		if (min < other.min && sec < other.sec)
		{
		MyTime((hour - other.hour)-1, abs((min - other.min)-1), abs(sec - other.sec));
		}
		if (min < other.min && sec >= other.sec)
		{
		MyTime((hour - other.hour)-1, abs(min - other.min), sec - other.sec);
		}
		if (min >= other.min && sec < other.sec)
		{
		 MyTime(hour - other.hour, (min - other.min) - 1, abs(sec - other.sec));
		};*/

		//강사님 풀이
		int result_hour = hour - other.hour;
		int result_min = min - other.min;
		int result_sec = sec - other.sec;
		if (result_hour < 0)
		{
			result_hour += 24;
		}
		if (result_min < 0)
		{
			result_hour--;
			result_min += 60;
		}
		if (result_sec < 0)
		{
			result_min--;
			result_sec += 60;
		}
		return MyTime(result_hour, result_min, result_sec);
	}
};

int main()
{
	int hour, minute, second;
	//시,분,초에 대한 정보 입력
	//받은 정보로 start 객체 생성
	//다시 시간 정보 입력
	//이 정보로 end 객체 생성
	//end-start한 값을 통해 result 객체 생성
	//TimeInf를 통해 결과 출력
	//계산을 하는 과정에서 시분초에 대한 처리
	cout << "시작 시간: ";
	cin >> hour;
	cin >> minute;
	cin >> second;
	MyTime start(hour, minute, second);
	cout << "종료 시간: ";
	cin >> hour>> minute>> second;
	MyTime end(hour, minute, second);
	MyTime result = end-start;
	result.TimeInfo();


	return 0;
}