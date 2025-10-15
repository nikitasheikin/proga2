#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
    float a[10];
    a[0]=atof(argv[1]);
    for(int i =0; i<=9; i++){ 
        a[i] = atof(argv[i+1]);
    }

    float c = 0;
    for(int i = 0; i<=9; i++){
        c+=a[i];
    }
    printf("%.2f", c/10);
}