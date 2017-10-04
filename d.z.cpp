
#include <iostream>
#include <string>
using namespace std;


int main()
{
    int a[10];
    int sum=0;
    for (int i=0;i<10;i++)
    {
        cin >> a[i];
        if (a[i]>0)
            sum=sum+a[i];
    }
    cout<< sum;
    return 0 ;
    cin.get();
 
 
}
