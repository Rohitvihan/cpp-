to print pattern:-
                    *
                    **
                    ***
                    ****
                    *****
#include<bits/stdc++.h>
using namespace std;
void pattern_2(int n)
{
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    pattern_2(n);
    return 0;
}
