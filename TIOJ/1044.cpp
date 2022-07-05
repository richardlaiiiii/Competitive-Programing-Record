#include <cstdio>
#include "lib1044.h"
int main() {
    int n=Initialize(),l=1,r=n;
    while(l<r) {
        int m=(l+r)>>1;
        if(Guess(m)) r=m;
        else l=m+1;
    }
    Report(l);
    return 0;
}