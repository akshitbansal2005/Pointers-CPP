//Akshit Bansal 
//23070123013
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    
    int *ptr=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}

/*output
10
20
30*/
