#include<iostream>
#include<cmath>

using namespace std;

main()
{
	int a,b,c;
	cout<<"podaj 2 liczby nieparzyste";
	do
	{
		cin>>a;
		cin>>b;
	}
	while(a%2==0 && b%2==0);
	c=a*a+b*b;
	if(c%4==0)cout<<"suma kwadratów liczb jest podzielna przez 4";
	else cout<<"suma kwadratów liczb nie jest podzielna przez 4";
}
