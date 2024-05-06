//transpoz bulma

int main() {
   int A[3][3], B[3][3];
   int row,col,sem;
   
   printf("3x3 lük matrisin elemanlaririni giriniz:\n");
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           scanf("%d" ,&A[row][col]);
       }
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           printf("A[%d][%d]=%d \t" ,row,col,A[row][col]);
       }
       printf("\n");
   }
   
   for(row=0; row<3; row++){
       for(col=0; col<3; col++){
           B[row][col]=A[col][row];
           printf("A nın transpozu:%d \t" ,B[row][col]);
       }
       printf("\n");
   }

    return 0;
}
