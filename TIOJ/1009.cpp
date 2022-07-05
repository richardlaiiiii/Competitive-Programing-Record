#include <stdio.h>
main() {
    int a,b,c,d,e,f;
    scanf("%d:%d:%d",&a,&b,&c);
    scanf("%d:%d:%d",&d,&e,&f);
    if(a>=d) d+=24;
    int s1=3600*a+60*b+c,s2=3600*d+60*e+f,s3=s2-s1;
    printf("%02d:%02d:%02d",(s3/3600),s3/60%60,(s3%60));
}