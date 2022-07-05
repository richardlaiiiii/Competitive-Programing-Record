#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
using namespace std;
int n,i,j,a,b,c;
char plate[505][505];
bool visited[505][505]={0};
int stepx[8]={-1,-1,-1,0,0,1,1,1};
int stepy[8]={0,1,-1,-1,1,0,1,-1};
void dfs(int x,int y,char z) {
    visited[x][y]=1;
    for(int i=0;i<8;i++) {
        if(x+stepx[i]>=0 && x+stepx[i]<=n && y+stepy[i]>=0 && y+stepy[i]<=n && !visited[x+stepx[i]][y+stepy[i]] && plate[x+stepx[i]][y+stepy[i]]==z) {
            dfs(x+stepx[i],y+stepy[i]);
        }
    }
}
int main() {
    fastio;
    while(cin>>n,n) {
        a=b=c=0;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                cin>>plate[i][j];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(plate[i][j]=='A') {
                    a++;
                    dfs(i,j,'A');
                }else if(plate[i][j]=='B') {
                    b++;
                    dfs(i,j,'B');
                }else {
                    c++;
                    dfs(i,j);
                }
            }
        }
    }
    return 0;
}