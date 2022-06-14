#include<iostream>
#include<vector>
using namespace std;



int Fib(int n) {
	if(n==0 || n==1)
		return n;
	return(Fib(n-1)+Fib(n-2));
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int x=n;
	while(x!=0)
	{
		cout<<Fib(n-x)<<" ";
		x--;
	}
	return 0;
}