// CppOmp01.cpp: 基于OpenMP的多线程编程示例01
//

#include <iostream>
using namespace std;

int main()
{
#pragma omp parallel for
	for (int i = 0; i < 10; i++)
	{
		cout << "i = " << i << endl;
	}
	system("pause");
	return 0;
}