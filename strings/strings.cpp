//Problem: Hasmukh And Strings
//Editor: H Sravan

//Explaination:
/*
		I.Algorithm:
		    1.Find the transformed index(NewIndex) from the value of Query(q), no. of left rotations(Kleft),
		      no. of right rotations(Kright).
		
		    2.Output the character at NewIndex
		
		
	   II.Finding transformed Index:
			1.Let 'Abcdef' be the Input String with their positions shown below.
				(character in 0th position is highlighted in the explaination)
		    
		    2.Each right rotation corresponds to the movement of all the charecters in the string right direction.
		    	transformed sring = 'Fabcde', which shows one Kright results in the decrease of original index by 1.
		    	i.e NewIndex = Original - Kright.
		    	
		    3.Each left rotation corresponds to the movement of all the charecters in the string left direction.
		    	transformed sring = 'Bcdefa', which shows one Kleft results in the increase of original index by 1.
		    	i.e NewIndex = Original + Kleft.
		    
		    4.Combining 2,3 
		    		NewIndex = Original - Kright + Kleft.
		
		
	  III.Boundary conditions:
		  The above formula can result in either a positive or a negative value for NewIndex resulting in the Array Out of Bound.
		  
		  1.Positive value greater than Length of the input string(Length).
		  
		  	'abcdef' let NewIndex obtained = 15, of each and every 6(Length) Left rotations of the string
		  	the new string obained is same as the actual string.
		  	so, NewIndex = NewIndex % Length
		  	
		  2.Negative value.
		  
		  	'abcdef' let NewIndex obtained = -9, of each and every 6(Length) Right rotations of the string
		  	the new string obained is same as the actual string.
		  	so, while(NewIndex < 0)
		  			NewIndex = NewIndex + Length;

*/

//Solution Code
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	//Handling Input
	long int Tests,Quiries,NewIndex,Length,Kleft,Kright,q;
	string IpString;
	cin>>Tests;
	
	//Handling Testcases
	while(Tests--)
	{
		cin>>IpString>>Kleft>>Kright>>Quiries;
		Length = IpString.length();
		
		//Handling the Queries
		while(Quiries--)
		{
			cin>>q;
			
			//Calculating Transformed Index
			NewIndex = q-Kright+Kleft;
			
			//Eliminating Negative Index out of bound
			while(NewIndex < 0)
				NewIndex += Length;
			
			//Eliminating positive inndex out of bound
			NewIndex = NewIndex % Length;
			
			cout<<IpString[NewIndex]<<endl;
		}
	}
	return 0;
}
