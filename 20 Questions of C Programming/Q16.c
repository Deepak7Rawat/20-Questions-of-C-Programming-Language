#include<stdio.h>
#include<string.h>
void main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9} ;
    int i , j ,s[3];
    for(i =0; i<3 ; i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Sum of array elements are -- \n\n");
    for(i=0;i<3;i++){
        for(j=0,s[i]=0 ;j<3;j++){
            s[i] = s[i] + A[j][i];
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("----------------\n");
    printf("%d %d %d \n",s[0],s[1],s[2]);
}
