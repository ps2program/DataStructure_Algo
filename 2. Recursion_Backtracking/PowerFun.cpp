#include <iostream>
using namespace std;

int Pow(int a, int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	return a*Pow(a,n-1);
}

 int main(int argc, char const *argv[])
 {
 	cout<<Pow(2,10);
  	return 0;
 }