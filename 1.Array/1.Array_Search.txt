/*
output: 5 input

        9 key

7 8 9 5 6

2 (result)

*/
/*Time complexity:
Search: O(n)
*/



#include<iostream>
using namespace std;

int Search(int a[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return i;
            break;

        }

    }
     return -1;
}


int main()
{
    int n,key;

    cin>>n>>key;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }

    cout<<Search(a,n,key)<<endl;

    return 0;

}






