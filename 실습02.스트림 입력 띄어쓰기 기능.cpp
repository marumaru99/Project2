#include <iostream>
#include <string>
using namespace std;

//한컴 타자 연습 연출
//1. 입력해야할 문장 순서대로 출력
//2. 입력을 진행
//3.입력한 문장과 입력해야할 문장이 서로 일치할 경우 통과
//틀렸을 경우에는 실패 출력, 프로그램 종료
//4. 전부 입력했을 때 성공! 출력

//나 하늘로 돌아가리라.
//
//새벽빛 와 닿으면 스러지는
//
//이슬 더불어 손에 손을잡고,
//
//나 하늘로 돌아가리라
//
//노을빛 함께 단 둘이서
//
//기슭에서 놀다가 구름 손짓하면은,
//
//나 하늘로 돌아가리라.
//
//아름다운 이 세상 소풍 끝내는 날,
//
//가서, 아름다웠더라고 말하리라.


int main()
{
	/*string correct;
	cout << "여름장이란 애시당초에 글러서 해는 아직 중천에 있건만" << endl;
	cout << "윗 문장 입력 : ";
	getline(cin, correct);
	cout << correct;*/
	string answer;
	string line[] = { "나 하늘로 돌아가리라.", "새벽빛 와 닿으면 스러지는", "이슬 더불어 손에 손을잡고,","나 하늘로 돌아가리라","노을빛 함께 단 둘이서",
		"기슭에서 놀다가 구름 손짓하면은," };

	
	for (int i =0;i<6;i++)
	{
		cout << line[i] << endl;
	    getline(cin, answer);
		
		if (answer != line[i])
	{
		cout << "실패" << endl;
	}
	
	}

	




	return 0;
}
