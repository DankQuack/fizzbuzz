#include<stdio.h>

void main(){
    char fizz[]= "Fizz", buzz[]="Buzz" ;
    for(int i=1; i<101;++i){
            if(i%15 == 0)
              printf("%s%s\n",fizz,buzz);
            else if(i%3 == 0)
                printf("%s\n",fizz);
            else if(i%5 == 0)
                printf("%s\n",buzz);
            else
                printf("%d\n",i);
        }
}