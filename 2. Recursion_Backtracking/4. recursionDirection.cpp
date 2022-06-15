#include <iostream>
using namespace std;

//large first then small work
void dec(int n)
{
	if(n==0)
	{
		return;
	}

	cout<<n<<endl;
	dec(n-1);
}


//small first then large work
void inc(int n)
{
	if(n==0)
	{
		return;
	}
	inc(n-1);
	cout<<n<<endl;
}

 int main(int argc, char const *argv[])
 {
 	dec(5);
 	inc(5);
 	return 0;
 }