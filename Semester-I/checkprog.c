#include <stdio.h>
 
int main(void){
 
    enum{off, on}button;
 
    button = on;
 
    if(button)
         printf("button on, value is %d\n", button);
 
    ///button = off;
    if(!button)
         printf("button off, value is %d\n", button);
 
    getchar();
    return (0);
}
