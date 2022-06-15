#include <iostream>
using namespace std;

int fillBoard(int n)
{
	//base case
	if(n<4)
		return 1;
	return fillBoard(n-1)+fillBoard(n-4);

}

 int main(int argc, char const *argv[])
 {
 	int n;
 	cin>>n;
 	cout<<fillBoard(n);
  	return 0;
 }


// there is possibility of using dynamic programming