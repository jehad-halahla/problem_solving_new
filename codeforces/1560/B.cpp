#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++){
        int a,b,c;
        scanf("%d %d %d" ,&a,&b,&c);
        int gap = abs(a - b);
        int numOfNodes = 2 + 2*(gap-1);
        if( max(a,b) > numOfNodes)
            printf("-1\n");
        else if( c  <= numOfNodes && c-gap > 0 )
            printf("%d\n",(c-gap));
        else if (c < numOfNodes && c+gap<= numOfNodes)
            printf("%d\n",(c+gap));
        else
            printf("-1\n");


    }
    return 0;
}
int max(int x , int y){
    return x > y ?x:y;
}
