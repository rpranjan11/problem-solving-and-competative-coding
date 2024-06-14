#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
int n,m,k;
cin>>n>>m>>k;
int arr[23][23];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++) cin>>arr[i][j];
}

int var,ans =0 ;
for(int i=0; i <(1<<m);i++)
{
var = k - __builtin_popcount(i);
if(var<=0) continue;

vector<int > vec;
for(int a=0 ;a < n; a++)
{
int sum =0;
for(int b=0 ; b<m ; b++)
{
if((i>>b)&1)
{
if(arr[a][b]==1)
{
sum++;
}
}
}
vec.push_back(sum);
}
sort(vec.begin(),vec.end()); reverse(vec.begin(),vec.end());
//or(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
cout<<endl;
int l =0;
var = min(var,n);
for(int i=0;i<var;i++)
{
l += vec[i];
}
ans = max(ans,l);
}
cout<<ans;
}