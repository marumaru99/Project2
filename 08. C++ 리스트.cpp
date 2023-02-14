#include<iostream>
#include<list>//리스트를 사용하기 위해 필요한 헤더파일
using namespace std;

//자료구조 컨테이너 list 

//컨테이너 : 같은 타입의 여러 개체를 저장하는 집합 형태를 의미
//C++에서는 이러한 컨테이너를 자료형에 따라 만들 수 있도록
//STL(Standard Template Library)를 제공

//장점: 일반적인 배열과 다르게 프로그램 내에서 데이터의 추가, 삭제 등의 작업을 진행할 수 있음
//기능이 전부 만들어져 있기 때문에 해당 가능을 기반으로 코드 설계가 이루어지며,
//작업을 공유하는 형태의 프로젝트 단위에서 장점으로 활용가능(코드의 획일화)
//사용법만 알고 있다면 쉽게 코드를 짤 수 있음
//<>안에 타입을 넣으면 그 형태에 맞게 설계가 됨. 그러면 문법도 그에 맞게 설계


int main()
{
	list<int> lst; //int타입의 데이터를 저장할 수 있는 리스트
	
	for (int i = 0; i < 10; i++)
	{
		lst.push_back(i + 1);
	}

	//lst.push_back(1);//push_back을 이용해 데이커를 적으면 리스트의 맨 뒤로(순서대로) 값이 추가
	//다른 형태의 데이터로 값을 넣을 경우 리스트에 적어준 <데이터 타입>에 의해 바로 오류를 잡아냄


	//반복문을 이용해서 리스트 내용 출력
	for (int value : lst)
	{
		cout << value << endl;
	}


	//lst.pop_back();//맨 마지막 위치에 존재하는 값 제거

	//lst.remove(1);//리스트에서 1의 값을 제거
	for (int value : lst)
	{
		cout << value << endl;
	}

	//iterator(반복자): 컨테이너를 대상으로 만들 수 있으며, 컨테이너의 값을 순서대로 처리하는 용도

	list<int>::iterator begin_iter = lst.begin();//리스트의 맨 처음 값을 기준으로 반복자 생성
	list<int>::iterator end_iter = lst.end();//리스트의 마지막 값을 기준으로 반복자 생성

	end_iter--;//실제로 값을 보면 마지막 값이 아닌 마지막 값 다음 위치의 값을 표현하고 있어서 1을 빼주고 작업해야함

	lst.erase(end_iter);
	for (int value : lst)
	{
		cout << value << " ";
	}
	return 0;
}