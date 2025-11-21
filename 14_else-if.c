#include<stdio.h>

int main(){
    int age = 55;

    if(age>60){
        printf("you can drive but your age is senior ");
    }

    else if(age>40){
        printf("you can drive and you are elder");
    }

    else if(age>18){
        printf("you can drive");
    }

    else{
        printf("you can not drive");
    }


}