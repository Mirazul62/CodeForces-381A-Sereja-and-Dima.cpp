#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,a[100000],c1=0,c2=0,l,r,ans=0,t=1;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    l=0;
    r=n-1;
    while(l<=r)
    {
        i=t;
        if(i%2!=0)
        {
            ans=max(a[l],a[r]);
           /// cout<<ans;
            if(ans==a[l])
                l++;
            else
                r--;
            c1+=ans;
                t++;
        }
        else
        {
            ans=max(a[l],a[r]);
            if(ans==a[l])
                l++;
            else
                r--;
            c2+=ans;
            t++;
        }

    }
        cout<<c1<<" "<<c2<<endl;
}
