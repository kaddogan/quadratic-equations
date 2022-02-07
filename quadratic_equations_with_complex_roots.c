#include<stdio.h>
#include<math.h>

int main(){

    double a,b,c,delta=0.0;
    double r_1=0.0,r_2=0.0;

    printf("\n\nAx2+Bx+C denkleminde A,B ve C'yi sirayla girin:");
    scanf("%lf %lf %lf",&a,&b,&c);

    delta=b*b-4*a*c;

    if(delta>0){
        printf("==>Denklemin iki reel koku bulunmaktadir.\n");//1 5 3 ==>R_1=-0.6972     R_2=-4.3028

        r_1=(-b+sqrt(delta))/(2*a);
        r_2=(-b-sqrt(delta))/(2*a);

        printf("\nR_1=%.4lf\tR_2=%.4lf\n ",r_1,r_2);
    }
    else if(delta==0){
        printf("==>Denklemin tek koku bulunmaktadir.\n");//1 4 4 ==>R_1=R_2=-2.0000

        r_1=(-b)/(2*a);

        printf("R_1=R_2=%.4lf\n",r_1);
    }
    else if(delta<0){
        printf("==>Denklemin komlex kokleri bulunmaktadir.\n");//1 5 9 ==>R_1=-2.5.00+0.83i R_2=-2.5.00-0.83i

        r_1=(sqrt(-delta))/(2*a);
        r_2=(sqrt(-delta))/(2*a);

        printf("\nR_1=%.2lf + %.2lfi\tR_2=%.2lf - %.2lfi\n\n",-b/2,r_1/2,-b/2,r_2/2);  
        
    }
 
    return 0;
}
