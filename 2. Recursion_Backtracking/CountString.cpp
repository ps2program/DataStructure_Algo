#include <iostream>
using namespace std;

int BinString(int n)
{
	//base case
	if(n==0)
		return 1;
	if(n==1)	
		return 2;
	if(n==2)
		return 3;

//rec case
	return BinString(n-1)+BinString(n-2);

}

 int main(int argc, char const *argv[])
 {
 	int n=0;
 	cin>>n;
 	cout<<BinString(n);
  	return 0;
 }
