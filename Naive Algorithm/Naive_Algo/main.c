#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


void naive(char *text, char *pattern, int n, int m){
    int isFound=0;
    for(int i=0;i<n-m+1;i++){
        int j;
        for(j=0;j<m;j++){
            if(text[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==m){
            isFound++;
            printf("Pattern is started at %d \n",i+1);
        }

    }
    if(isFound==0){
        printf("Pattern is not found");
    }else{
        printf("%d comparison are found...\n",isFound);
    }
}

int main()
{
    char text[100]="My name is Kavindu Pramod My name is Kavindu Pramod My name is Kavindu Pramod My name is Kavindu Pramod";
    char pattern[7]="Kavindu";
    naive(text,pattern,100,7);
    return 0;
}
