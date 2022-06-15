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

bool isSortedTwo(int a[],int i, int n)
{
	if(i==n-1)
	{
		return true;
	}

	if(a[i]<a[i+1]  && isSortedTwo(a,i+1,n))
	{
		return true;
	}

	return false;
}

int main(int argc, char const* argv[])
{
	int a[] = { 1,2,3,4};
	int n = sizeof(a) / sizeof(int);

	cout << isSorted(a,n)<<"  see"<<endl;
	cout << isSortedTwo(a,0,n)<<"  see";
	return 0;
}