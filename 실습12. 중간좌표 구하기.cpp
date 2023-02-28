#include <iostream>
using namespace std;

class Pos
{
private:
	int X;
	int Y;

public:
	Pos(int X, int Y): X(X),Y(Y){}
	void Posinfo() { cout << "(" << X << "," << Y << ")"; }
	Pos operator-(const Pos& other)
	{
		return Pos((X + other.X)/2, (Y + other.Y)/2);
	}
};


int main()
{
	Pos A(0, 5);
	Pos B(5, 10);

	Pos Center = A - B;
	Center.Posinfo();

	return 0;
}