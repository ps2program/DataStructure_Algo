#include<iostream>
#include<vector>
using namespace std;



int Fib(int n) {

	//base case
	if(n==0 || n==1)
		return n;

	//recusive case	
	return(Fib(n-1)+Fib(n-2));
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<Fib(n);
	return 0;
}