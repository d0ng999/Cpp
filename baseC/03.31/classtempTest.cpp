#include <iostream>
using namespace std;

template <typename T> // 클래스 템블릿의 일반화
class CTest
{
private:
	T data;
public:
	CTest(T adata) : data(adata)
	{}
	T getData()
	{
		return data;
	}
};

template <> // 템플릿 특수화
class CTest<char>
{
private:
	char data;
public:
	CTest(char adata) : data(adata)
	{}
	char getData()
	{
		return data;
	}
};

int main()
{
	CTest<int> obj(10);
	cout << obj.getData() << endl;

	CTest<char> obj2('a');
	cout << obj2.getData() << endl;
	return 0;
}