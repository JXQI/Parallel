// CppAMP01.cpp: 基于AMP的编程示例01
//

#include <amp.h>
#include <iostream>
using namespace concurrency;
using namespace std;

int main()
{
	int aCPP[] = { 1, 2, 3, 4, 5 };
	int bCPP[] = { 6, 7, 8, 9, 10 };
	int sumCPP[5];

	// Create C++ AMP objects.
	array_view<const int, 1> a(5, aCPP);
	array_view<const int, 1> b(5, bCPP);
	array_view<int, 1> sum(5, sumCPP);
	sum.discard_data();

	parallel_for_each
	(
		sum.extent,
		[=](index<1> idx) restrict(amp)
	{
		sum[idx] = a[idx] + b[idx];
	}
	);

	// Print the results. The expected output is "7, 9, 11, 13, 15".
	for (int i = 0; i < 5; i++)  cout << sum[i] << endl;

	return 0;
}
