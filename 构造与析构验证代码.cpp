#include <iostream>
using namespace std;
class father
{
public:
	father()
	{
		cout << " the constructor of class father\n";
	}
	~father()
	{
		cout << "the destructor of class father\n";
	}
};
class son1 :public father
{
public:
	son1()
	{
		cout << "the constructor of class son1\n";
	}
	~son1()
	{
		cout << "the destructor of class son1\n";
	}
};
class son2 :private father
{
public:
	son2()
	{
		cout << "the constructor of class son2\n";
	}
	~son2()
	{
		cout << "the destructor of class son2\n";
	}
};
class son3 :protected father
{
public:
	son3()
	{
		cout << "the constructor of class son3\n";
	}
	~son3()
	{
		cout << "the destructor of class son3\n";
	}
};
int main()
{
	son1 s1;
	son2 s2;
	son3 s3;
	return 0;
}