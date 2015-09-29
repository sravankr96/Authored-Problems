#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream ipfile;
	int n = 0,t = 9;
	char c[20];
	while(t--)
	{
		n+=100;
		cin>>c;
		ipfile.open(c);
		ipfile<<n<<endl;
		for(int i=0;i<n;i++)
			ipfile<<rand()%n<<endl;
		ipfile.close();
	}
	return 0;
}
