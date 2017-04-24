// Program to print all prime factors
# include "stdafx.h"
# include <stdio.h>
# include <math.h>
# include <iostream>
# include <chrono>

using namespace std::chrono;
using namespace std;

// A function to print all prime factors of a given number n
void primeFactors(int n)
{
	// Print the number of 2s that divide n
	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}

	// n must be odd at this point.  So we can skip 
	// one element (Note i = i +2)
	for (int i = 3; i <= sqrt(n); i = i + 2)
	{
		// While i divides n, print i and divide n
		while (n%i == 0)
		{
			//printf("%d ", i);
			n = n / i;
		}
	}

	// This condition is to handle the case when n 
	// is a prime number greater than 2
	if (n > 2)
		cout << endl;
}

/* Driver program to test above function */
int main()
{
	for (int i = 0; i < 100;i++) {
		high_resolution_clock::time_point startTime = high_resolution_clock::now();
		primeFactors(1369592039);
		high_resolution_clock::time_point endTime = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(endTime - startTime).count();

		cout << duration;
	}
	cin.get();
	return 0;
}

