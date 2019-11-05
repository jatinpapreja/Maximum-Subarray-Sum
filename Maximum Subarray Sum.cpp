/**printing subarrays and finding max sum of these
subarrays in both conditions:
array is sorted and
is unsorted**/
#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
    for(int z=0;z<t;z++)
    {int cs{},ms{},n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];}
    for(int i{};i<n;i++)
        {
            cs+=a[i];
            if(cs>ms)
            {
                ms=cs;
            }
            if(cs<0)
                cs=0;
        }
    cout<<ms<<endl;}

    return 0;
}
