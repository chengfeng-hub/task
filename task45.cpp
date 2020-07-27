
#include<stdio.h>
int main(int argc, char **argv)
{
    int iY,iM,iD; //ƒÍ‘¬»’
    int R;
    int iDay = 0;
    scanf("%d",&iY);
    scanf("%d",&iM);
    scanf("%d",&iD);
    if((iY%4 == 0 && iY%100 != 0) || iY%400 == 0)
        R = 29;
    else
        R = 28;
    //iM = iM - 1;
    switch (--iM)
    {
        case 12: iDay += 31;
        case 11: iDay += 30;
        case 10: iDay += 31;
        case 9: iDay += 30;
        case 8: iDay += 31;
        case 7: iDay += 31;
        case 6: iDay += 30;
        case 5: iDay += 31;
        case 4: iDay += 30;
        case 3: iDay += 31;
        case 2: iDay += R;
        case 1: iDay += 31;
    }
    iDay += iD;
    printf("%d",iDay);
    return 0;
}
