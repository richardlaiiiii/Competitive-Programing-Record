#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
void merge(int *,int,int,int);
void mergesort(int *,int,int);
void printa(int *a,int n) {
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    cout<<'\n';
}
void mergesort(int *a,int L,int R) {
    int M;
    if(L<R) {
        M=(L+R)>>1;
        mergesort(a,L,M);
        mergesort(a,M+1,R);
        merge(a,L,M,R);
    } 
}
void merge(int *a,int L,int M,int R) {
    int left=L,right=M+1,i=L,tmp[10];
    while((left<=M)&&(right<=R)) {
        if(a[left]<a[right]) tmp[i]=a[left],i++,left++;
        else tmp[i]=a[right],i++,right++;
    }
    while(left<=M) tmp[i]=a[left],i++,left++;
    while(right<=R) tmp[i]=a[right],i++,right++;
    for(int i=0;i<10;i++) {
        a[i]=tmp[i];
    }
}
signed main() {
    int A[10]={354,234,2395,232,111,124,786,751,203,833};
    mergesort(A,0,9);
    for(int i=0;i<10;i++) {
        cout<<A[i]<<" ";
    }
    cout<<'\n';
    return 0;
}