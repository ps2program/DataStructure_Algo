#include<iostream>
#include<vector>
using namespace std;


static bool flag = true;

bool isSorted(int a[], int n) {

	//base case
	if (n == 0 or n==1 )
	{
		return true;
	}


	//recursive case
	
	if (a[0] < a[1] && isSorted(a + 1, n - 1))
	{
		return true;
	}
	else
	{
		return false;
	}


}

int main(int argc, char const* argv[])
{
	int a[] = { 1,2,3,4,5,4};
	int n = sizeof(a) / sizeof(int);

	cout << isSorted(a,n)<<"  see";
	return 0;
}