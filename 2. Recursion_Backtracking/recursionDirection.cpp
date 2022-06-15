#include <iostream>
using namespace std;


void printInDec(int n)
{

	//base case
	if(n!=0)
	{
	printInDec(n-1);
	}
	cout<<n<<endl;
	return;
	//rec case
}
void printInInc(int n)
{

	//base case
	if(n==0)
	{
		return;
	}
	cout<<n<<endl;
	printInInc(n-1);
	//rec case
}

int main(int argc, char const *argv[])
{
	printInDec(5);
	printInInc(5);
	return 0;
}