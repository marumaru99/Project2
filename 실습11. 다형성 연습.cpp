#include <iostream>
using namespace std;

//�غ�Ǿ� �ִ� Ŭ������ ��� �޾� ���� �޷��� ��ȯ�ϴ� Ŭ���� �ۼ�

class converter
{
public: 
	virtual float convert(float src) = 0;
	//���� �����Լ� 
	//virtual �ڷ��� �Լ���()=0; �� ���·� ����� �Լ�
	//������ ������ �������� �ʰ� �������� �Լ��� ���� �� ����
	//�ش� �Լ��� Ŭ���� �׿� 1�� �̻� ���ԵǾ����� ��� �ش� Ŭ������ �߻� Ŭ������� �θ���
	//�� �߻� Ŭ������ ��ӹ����� �ݵ�� �ش� ���� �����Լ��� ������ �ؾ���.

	//�������: �ڽ� Ŭ�������� �����Ǹ� ������ ���̱⿡ ���� ������ �ʿ�� ����
	//�ڽ� Ŭ�������� �ݵ�� �����Ǹ� �����ؼ� ������ �� �ְ� �ϱ� ����(�������� ���� ����)
	//�ڽ� Ŭ���� ���忡���� �����ؾ��� Ʋ�� �θ� Ŭ�������� �������ֱ⿡ �� ���¿� �°� ������ �����ϸ� ��.
	virtual string getString() = 0;
	virtual string getString2() = 0;
	float ratio;//����


	void Converting()
	{
		cout << getString() << "��" << getString2() << "�� ��ȯ�մϴ�." << endl;
		cout << getString() << "�� �Է����ּ���. >> ";
		float value;
		cin >> value;
		cout << "��ȯ ���: " << convert(value) << getString2() << endl;
	}
};

class W2D : public converter
{
public: 
	W2D(float a);
	float convert(float src)
	{
		return src/ratio;
	}

	string getString() { return "��"; };
	string getString2() { return "�޷�"; };
};

int main()
{
	W2D* w2d = new W2D(1400);
	w2d->Converting();


	return 0;
}

W2D::W2D(float a)
{
	ratio = a;
}
