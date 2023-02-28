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

		//����� Ǯ��
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
	//��,��,�ʿ� ���� ���� �Է�
	//���� ������ start ��ü ����
	//�ٽ� �ð� ���� �Է�
	//�� ������ end ��ü ����
	//end-start�� ���� ���� result ��ü ����
	//TimeInf�� ���� ��� ���
	//����� �ϴ� �������� �ú��ʿ� ���� ó��
	cout << "���� �ð�: ";
	cin >> hour;
	cin >> minute;
	cin >> second;
	MyTime start(hour, minute, second);
	cout << "���� �ð�: ";
	cin >> hour>> minute>> second;
	MyTime end(hour, minute, second);
	MyTime result = end-start;
	result.TimeInfo();


	return 0;
}