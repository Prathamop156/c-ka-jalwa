#include<stdio.h>

void main(){
    int age = 45;
    if(age>60){
        printf("you can drive and you are a senior citizen");

    }
    else if(age>40){
        printf("you can drive and you are elder");
    }
    else if(age>18){
        printf("you can drive");

    }
    else{
        printf("you cannot drive");
    }

}