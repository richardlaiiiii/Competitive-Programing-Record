#pragma GCC optimize("Ofast")
#include <cstdio>
#include <algorithm>
signed main(){
	int n,i;
    scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	std::sort(arr,arr+n);
	for(i=0;i<n;i++) printf("%d ",arr[i]);
	putchar('\n');
	return 0;
}