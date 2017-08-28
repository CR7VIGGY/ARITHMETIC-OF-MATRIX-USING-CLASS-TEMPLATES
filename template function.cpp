#include<bits/stdc++.h>
using namespace std;
#include<conio.h>

template<class T>
T big(T a,T b)
{
	if(a > b)
	return a;
	else
	return b;
	
}
int main()
{
	cout<<big(3,4)<<"\n";
	cout<<big(5.5,4.2);
	getch();
}
