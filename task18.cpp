#include<stdio.h>
#define l(x) (((x)+2)/3)
int main(){
    int l, r;
    while(scanf("%d%d", &l, &r))
        printf("%d\n", r-l+1-l(r)+l(l-1));
    return 0;
}
