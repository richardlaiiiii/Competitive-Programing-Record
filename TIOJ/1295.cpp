#include <stdio.h>
int f(int x){
    if(x==0) return 1;
    return f(x-1)*x;
}
main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
}