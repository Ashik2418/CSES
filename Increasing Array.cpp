#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
int n,x,answer=0;
cin>>n;
int values[n];
for(int i=0;i<n;i++)
{
    cin>>values[i];
}
for(int i=1;i<n;i++)
{
    if(values[i]<values[i-1])
    {
        answer+=values[i-1]-values[i];
        values[i]=values[i-1];
    }
}
cout<<answer;


}
