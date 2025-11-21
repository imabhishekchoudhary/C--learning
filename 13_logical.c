#include<stdio.h>

int main(){
    int a=1;int b=1;
    printf("the value of a and b is %d\n",a&&b);
    printf("the value of a or b is %d\n",a||b);
    printf("the are not(a)%d\n",!(a));
   // printf("this are the compear%d\n",!(a<b));
    if(a&&b){
        printf("both are true\n" );
    }

    // same of the code ..
    if(a){
        if(b){
            printf("both are true");
        }
    }
}