#include<iostream>
using namespace std;

int main()
{
	string s="aacbadfeefff";
	int length=s.length();
	int count=0;
	for(int i=1;i<length;i++)
	{   if(s[i]>=s[i-1])
	{
		while(s[i]>=s[i-1] && i<length)    //for the increasing order
		{
			i++;
		}
		count++;
	}
	else
	{
		while(s[i]<=s[i-1] && i<length)       //for decreasing order
       {
          i++;	
	   }
	   count++;
		}	
		
	   		
	}
	cout<<"String:"<<s<<endl<<"Good_string_count:"<<count;
}
