#include<iostream>
using namespace std;

int main()
{
	int donald[5];
	int *dp0 = &donald[0];
	int *dp1 = &donald[1];
	int *dp2 = &donald[2];
	
	cout<<"dp0 is at "<<dp0<<endl;
	cout<<"dp1 is at "<<dp1<<endl;
	cout<<"dp2 is at "<<dp2<<endl;
	
	dp0++;
	cout<<"dp0 is now at "<<dp0<<endl;
}
