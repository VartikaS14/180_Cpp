#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<(row-1)*n+col<<" ";
            c++;
        }
        cout<<endl;
    }
}
