// CppThread01.cpp: 基于C++11的多线程编程示例01
//

#include <iostream>  
#include <thread>  
#include <chrono>  
using namespace std;

void foo(int x)
{
	cout << "foo(" << x << ") is running..." << endl;
	this_thread::sleep_for(chrono::seconds(2));
	cout << "foo(" << x << ") is over." << endl;
}

int main()
{
	cout << "main start..." << endl;

	thread t1(foo, 1);
	thread t2(foo, 2);

	cout << "main is running..." << endl;

	t1.join();
	t2.join();

	cout << "main is over." << endl;
	system("pause");
	return 0;
}