#include <iostream>
using namespace std;

int pairIt(int n)
{
	//base case
	if(n==0)
		return 1;
	if(n==1)	
		return 1;
	if(n==2)
		return 2;

//rec case
	return pairIt(n-1)+(n-1)*pairIt(n-2);

}

 int main(int argc, char const *argv[])
 {
 	int n;
 	cin>>n;
 	cout<<pairIt(n);
  	return 0;
 }

 // time complexity = O(2^n)
 // but can be reduce to lenear using dp- memoization.
