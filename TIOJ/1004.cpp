#include <stdio.h>
using namespace std;
int main() {
    int x,y=1;
    scanf("%d",&x);
    while((y<<1)<=x) y<<=1;
    printf("%d\n",((x-y)<<1)+1);
}