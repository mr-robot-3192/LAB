#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,10};
    vector<int> sum;
    int i,j,l=0,h=4,mid,c=0;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
            sum.push_back(arr[i]+arr[j]);
    }
    vector<int>:: iterator it;
    for(it=sum.begin();it!=sum.end();it++)
    {
        l=0,h=4;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(*it==arr[mid])
            {
                c+=h-mid;
                break;
            }
            else if(*it<arr[mid])
            {
              c+=h-mid+1;
              h=mid-1;
            }
            else
            {

                l=mid+1;
            }

        }
    }
    cout<<c;
}
