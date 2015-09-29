//problem : The Surveyor
//Author : sravan
//input : test cases,t and n intigers each representing an angle in degrees,x.

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	ifstream ipfile;
	ofstream opfile;
	char ip[20],op[20];
	int t,x,num = 2;
	float n;
	while(num--)
	{
		cin>>ip>>op;
		ipfile.open(ip);
		opfile.open(op);
		cout<<"check1"<<endl;
		ipfile>>t;
		while(t--)
		{
			cout<<"check2"<<endl;
			ipfile>>x;
			if(x < 180)
				n = 360.0/(180-x);
			if(n >= 3 && floor(n) == n && x < 180)
				opfile<<"YES"<<endl;
			else
				opfile<<"NO"<<endl;
		}
		ipfile.close();
		opfile.close();
	}
	return 0;
}
