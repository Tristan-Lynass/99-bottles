#include <stdio.h>
#include <stdlib.h>
#define P printf
#define B " beer on the wall"
void s(int b){while(P("%d bottle%s of%s, %d bottle%s of beer.\nTake one down and pass it around, ",b,b>2?"s":"",B,b,b>2?"s":""),b>1?P("%d",b-1):P("no more"),P(" bottle%s of%s.\n\n",b==1?"s":"",B),b>1?s(b-1):P("Go to the store and buy some more, 99 bottles of%s.",B),0){}}int main(){while(s(99),exit(0),0){}}