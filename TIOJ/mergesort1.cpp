#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void merge(int L,int M,int R) {
    int left,right;
    vector<int> tmp;
    left=L;
    right=M+1;
    while((left<=M)&&(right<=R)) {
        if(v[left]<v[right]) tmp.push_back(v[left]),left++;
        else tmp.push_back(v[right]),right++;
    }
    while(left<=M) tmp.push_back(v[left]),left++;
    while(right<=R) tmp.push_back(v[right]),right++;
    for(int i=0;i<20;i++) v[i]=tmp[i];
}
void mergesort(int L,int R) {
    int M;
    if(L<R) {
        M=(L+R)>>1;
        mergesort(L,M);
        mergesort(M+1,R);
        merge(L,M,R);
    }
}
signed main() {
    srand(time(NULL));
    for(int i=0;i<20;i++) {
        v.push_back(rand()%1000+1);
    }
    for(auto i:v) cout<<i<<' ';
    cout<<'\n';
    mergesort(0,20);
    for(auto i:v) cout<<i<<' ';
    cout<<'\n';
}