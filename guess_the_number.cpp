#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int n;
srand(time(0));
n = rand()%100 + 1;
int guess , nguess= 1;
do{
    printf("guess the number \n");
    scanf("%d",&guess);
    if(guess < n){
        printf("higher number please \n ");
    }else if (guess > n){
        printf("lower number please \n");
    }else {
    printf("you have guessed the number in %d attempts ",nguess);}
    nguess++;
}while(guess!=n);
return 0;
}