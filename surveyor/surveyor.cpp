//problem : The Surveyor
//Author : sravan
//input : test cases,t and n intigers each representing an angle in degrees,x.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t,x;
	float n;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x != 180)
			n = 360.0/(180-x);
		if(n >= 3 && floor(n) == n && x != 180)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
