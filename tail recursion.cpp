#include<iostream>
using namespace std ;
int main ()
{
	int no,i,a[100];
	cin>>no;
	for (i=1;i<=no;i++)
	cin>>a[i];
	for (i=1;i<=no;i++)
	{
		if (a[i]>=1 && a[i]<=10)
		{
			if(a[i]==1)
      cout<<"one\n";
    else if(a[i]==2)
      cout<<"two\n";
    else if(a[i]==3)
      cout<<"three\n";
    else if(a[i]==4)
      cout<<"four\n";
    else if(a[i]==5)
      cout<<"five\n";
    else if(a[i]==6)
      cout<<"six\n";
    else if(a[i]==7)
      cout<<"seven\n";
    else if(a[i]==8)
      cout<<"eight\n";
    else if(a[i]==9)
      cout<<"nine\n";
    else if(a[i]==10)
      cout<<"ten\n";
		}
		else 
		cout<<"not in range\n";
	}
return 0;
}
