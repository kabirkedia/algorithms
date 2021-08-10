// A C++ program to count the number of ways
// to reach n'th stair when user
// climb 1 .. m stairs at a time.
// https://www.geeksforgeeks.org/count-ways-reach-nth-stair/
//https://leetcode.com/explore/learn/card/recursion-i/255/recursion-memoization/1662/
//Samjh main nhi aaya ab tak
#include <iostream>
using namespace std;

// Returns number of ways
// to reach s'th stair
int countWays(int n, int m)
{
	int res[n + 1];
	int temp = 0;
	res[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		int s = i - m - 1;
		int e = i - 1;
		if (s >= 0)
		{
			temp -= res[s];
		}
		temp += res[e];
		res[i] = temp;
	}
	return res[n];
}

// Driver Code
int main()
{
	int n = 5, m = 3;
	cout << "Number of ways = "
		<< countWays(n, m);
	return 0;
}

// This code is contributed by shubhamsingh10
