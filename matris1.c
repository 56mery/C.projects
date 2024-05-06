//matris eleman oluşumu ve elemanların toplamı
int main()
{
   int A[3][3], B[3][3];
   int row,col,sem,toplam=0;
   
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
           if(A[row][col]<0){
               printf("negatif elemanlar A[%d][%d]=%d \n" ,row,col,A[row][col]);
           }
           else{
               printf("pozitif elemanlar A[%d][%d]=%d\n" ,row,col,A[row][col]);
           }
           toplam+=A[row][col];
       }
   }
   printf("elemanlar toplami:%d" ,toplam);


    return 0;
}
