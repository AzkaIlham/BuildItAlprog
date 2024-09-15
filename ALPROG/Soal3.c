#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    
    scanf("%d", &N);

    if (N % 2 != 0 || N == 2)
    {
        printf("PRIMA\n");
    }else
    {
        printf("BUKAN\n");
    }
    
    

    return 0;
}
