
#include <iostream>
#include <string>
using namespace std;


int main()
{
int a[10];
int sum=0;
int max=0;
for (int i=0;i<10;i++)
{
    cin >> a[i];
    if (a[i]>0) 
    {
        sum=sum+a[i];
    }
    else if(sum>max)
    {
			      max=sum;
        sum=0;
			
    }
}
    if (max==0 && sum!=0)
    {
        max=sum ;
    }
cout<< max;
return 0 ;
}
