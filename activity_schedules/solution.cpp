#include<bits/stdc++.h>
using namespace std;
int cnt=0, n;
vector<string> a ={"Swimming", "Running", "Football"};

void rec(vector<string>v,int idx=0)
{
    if(idx==n){if(v.size()==n){for(auto it : v)cout<<it<<" ";cout<<endl;cnt++;}return;}
    for (int i = 0; i < 3; i++) {
        vector<string>v1=v;
        if(!v1.empty()&& v1.back()==a[i])continue ;
        v1.push_back(a[i]);
        rec(v1,idx+1);
    }

}
int main()
{

    cin>>n;
    rec({});
    // formuila :count always be 3*(2^n-1);
    cout<<"Count : "<<cnt<<endl;
}
