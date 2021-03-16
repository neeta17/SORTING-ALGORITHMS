# include<stdio.h>
void insertion_sort ( int A[ ],int n)
{int i,j,k;
     for(  i = 0 ;i < n ; i++ ) {


      int temp = A[ i ];
      j = i;
          while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];
                j= j - 1;

           }

           A[ j ] = temp;

     }
     for( k=0;k<n;k++)
{
    printf(" %d ",A[k]);
}


}

     int main()
  {
     int n=7,A[n],i;
     printf("Enter %d array elememts",n);
     for( i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
     insertion_sort ( A,n);

  }


