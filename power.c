#include<stdio.h>

double power(double b , int p);

int main(){
    int p;
    double b;
    printf("Enter your base number.\n");
    scanf("%lf",&b);
    printf("Now enter your power number.\n");
    scanf("%d",&p);

    printf("%.6lf",power(b, p));
}

double power (double b , int p){
    double result=1;
    if(p>=0){
        for(int i=1; i<=p; i++){
            result=result*b;
        }
    }
    else{
        for(int i=1; i<=-p; i++){
            result=result*b;
        }        
        result = 1.0/result;
    }

    return result;
}