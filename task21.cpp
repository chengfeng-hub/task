//#include <stdio.h>
//static double getCubeRoot(double input);
//int main()
//{
//    double num,value;
//    scanf("%lf",&num);
//    value=getCubeRoot(num);
//    printf("%.1f",value);
//    return 0;
//}
//static double getCubeRoot(double input)
//{
//    double value=1.0;
//    while(!(((value*value*value-input)<1e-3)&&((input-value*value*value)<1e-3)))
//    {
//    	value+=0.1;
//    	if(value==input/2)
//    	{ 
//    		printf("error");
//			break;
//		}
//	}
//    return value;
//}

#include <stdio.h>
inline double abs(double x){return (x>0?x:-x);}
double cubert(const double y){
    double x;
    for(x=1.0;abs(x*x*x-y)>1e-7;x=(2*x+y/x/x)/3);
    return x;
}
int main(){
    for(double y;~scanf("%lf",&y);printf("%.1lf\n",cubert(y)));
    return 0;
}
