#include <iostream>
using namespace std;

class Super
{
public:
	Super() {
		cout << "Super()" << endl;
	}
	~Super()
	{
		cout << "~Super()" << endl;
	}
};

class Sub :public Super {
public:
	Sub()
	{
		cout << "Sub()" << endl;
	}
	~Sub()
	{
		cout << "~Sub()" << endl;
	}
};

int main()
{

	return 0;
}