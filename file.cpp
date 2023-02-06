#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
struct name
{
	char name[100];
	int mark;
}s[10];
int main()
{
	struct name;
	FILE *ptr;
	char str;
/*	int i,n;
	cout<<"u can add\n";
    cout<<"enter how many store name\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    	cout<<"enter name ";
    	cin>>s[i].name;
    	cout<<"enter marks";
    	cin>>s[i].mark;
	}*/
	
	ptr=fopen("C:\\Users\\Priye\\OneDrive\\Desktop\\New folder (2)","r");
	while(!feof(ptr))
	{
		str=fgetc(ptr);
		cout<<str;
	}
  fclose(ptr);
	
    
	
}
