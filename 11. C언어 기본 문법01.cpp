#include <iostream>
using namespace std;
//1.if��: ���α׷����� Ư�� ������ ������ �� ���ǽ��� ����� ����
//���α׷��� ���� ���� �Ǵ��ϴ� ���

//if���� ����
//�ʱ��; ���ǽ��� ����� ���� �ʿ��� ������ ������ִ� ��
//if (���ǽ�)
//{
//	���ǽ��� ����� ���� �� ������ ��ɹ�
//}
//
//else
//{
//	���� ��� ���ǽ��� ����� ���϶� ������ ��ɹ�
//}
//else if
//{
//	���ǽ��� ����� �����̰� ���ǽ�2�� ����� ���� ��� ������ ��ɹ�
//}

int main()
{
	//���� �÷��̾� �̸��� RED��� �̸����� [SPECIAL]�� ���� ���
	string Player_name;
	//�÷��̾��� �̸� �Է¹ޱ�

	cout << "�÷��̾� �̸�: ";
	cin >> Player_name;

	if (Player_name == "RED")
	{
		cout << Player_name << "[SPECIAL]" << endl;
	}
	/*if (Player_name != "RED")
	{
		cout << Player_name;
	}*/

	else
	{
		cout << Player_name << endl;
	}

	//if,if�� ���� ���� ���ǹ� 2���� ���� ó��.
	//if, else�� ���� ���� ���ǹ� �ϳ��� ���� ó��

	return 0;
}