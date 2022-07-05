#include <iostream>
using namespace std;
int main() {
    int p,q;
    scanf("%d %d",&p,&q);
    if(p<q) swap(p,q);
    if(p%q==0) printf("%s","Y\n");
    else printf("%s","N\n");
}