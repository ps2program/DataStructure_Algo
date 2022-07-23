#include <iostream>
using namespace std;

int fastPow(int a, int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	int subProb=fastPow(a,n/2);
	int subsq=subProb*subProb;
	if(n&1){
		return a*subsq;
	}
	return	subsq;
}

 int main(int argc, char const *argv[])
 {
 	cout<<fastPow(2,10);
  	return 0;
 }

 //log(n) in space and time