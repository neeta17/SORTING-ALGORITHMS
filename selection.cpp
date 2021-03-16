# include<stdio.h>

void selection_sort (int A[ ],int n) {
        
        int minimum;
        
        for(int i = 0; i < n-1 ; i++)  {

           
             minimum = i ;


            for(int j = i+1; j < n ; j++ ) {
                if(A[ j ] < A[ minimum ])  {                
                minimum = j ;
                }
             }
          int temp;
          temp=A[minimum];
          A[minimum]=A [i];
          A[i]=temp;
        }
         for(int k=0;k<n;k++)
{
    printf(" %d ",A[k]);
}

   }
   int main()
  {
     int n;
     printf("Enter n");
     scanf("%d",&n);
     int A[n];
     printf("Enter %d array elememts",n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
    selection_sort(A,n);
  }

