#include<stdio.h>
#include<string.h>
void main()
{
    int A[3][3]={1,2,3,4,5,6,7,8,9} ;
    int i , j ,s =0;
    for(i =0; i<3 ; i++){
        for(j=0;j<3;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n Sum of array elements are -- \n\n");
    for(i=0;i<3;i++){
        s=0;
        for(j=0 ;j<3;j++){
            printf("%d ",A[i][j]);
            s = s + A[i][j];
        }
        printf(" = %d \n",s);
    }
}
