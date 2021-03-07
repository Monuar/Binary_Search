#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;

    //cout<<x<<endl;
    cin>>m;
    int x=m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ma=a[n-1];
    //cout<<ma<<endl;
    for(int i=0;i<n;i++){
        if(a[i]<ma){
            int dif=ma-a[i];
            a[i]+=dif;
            m=m-dif;
        }
    }
   /* for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    int d=0;
    if(m>0){
         d=ceil((double)m/n);
    }


    //cout<<"d "<<d<<endl;
    cout<<ma+d<<" "<<ma+x<<endl;

}
