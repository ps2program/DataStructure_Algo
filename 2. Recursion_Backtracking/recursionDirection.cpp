#include <iostream>
using namespace std;


void printNumber1(int n)
{

	//base case
	if(n!=0)
	{
	printNumber1(n-1);
	}
	cout<<n<<endl;
	return;
	//rec case
}
void printNumber2(int n)
{

	//base case
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	printNumber2(n-1);
	//rec case
}

int main(int argc, char const *argv[])
{
	printNumber1(5);
	printNumber2(5);
	return 0;
}