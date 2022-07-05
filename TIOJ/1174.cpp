/*
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int main() {
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,m,ans=INT_MAX,a,b;
    cin>>n>>m;
    vector<int> v1(n+5),v2(m+5);
    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<m;i++) cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<n;i++) {
        a=lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
        if(a==0) ans=min(ans,abs(v2[a]-v1[i]));
        else {
            b=a--;
            ans=min(ans,abs(v2[a]-v1[i]));
            ans=min(ans,abs(v2[b]-v1[i]));
        }
 
   }
   cout<<ans<<'\n'; 
}
*/
#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
int N[100005],M[100005],n,m,dis;
int main(){
    ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>N[i];
    }
    for(int i=0;i<m;i++){
        cin>>M[i];
    }
    sort(N,N+n);
    sort(M,M+m);
    dis=(1<<30);
    for(int i=0,j=0;i<n&&j<m;){
        dis=min(dis,abs(N[i]-M[j]));
        if(dis==0)break;
        if(N[i]<M[j])i++;
        else j++;
    }
    cout<<dis<<'\n';
}