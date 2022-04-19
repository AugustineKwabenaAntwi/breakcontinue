#include <stdio.h>
int main(){
    while (1)
    {
        int value;
        printf("enter negative value here: ");
        scanf("%d", &value);
        if (value>=0)
        {
            printf("Positive value\n");
            break;
        }
        if ((value-1)%-2!=0)
        {
            printf("negative even, only printing negaitve odd values\n");
            continue;
        }
        
        printf("\n%d\n",value);
    }
    
}