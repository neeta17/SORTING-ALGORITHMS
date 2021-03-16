# include<stdio.h>
# define n 7


int partition ( int A[],int start ,int end) {
    int i = start + 1;
    int piv = A[start] ;            //make the first element as pivot element.
    for(int j =start + 1; j <=end ; j++ )  {
    /*rearrange the array by putting elements which are less than pivot
       on one side and which are greater that on other. */

          if ( A[ j ] < piv) {
         int temp=A[i];
         A[i]=A[j];
         A[j]=temp;
            i += 1;
        }
   } int temp=piv;
   A[start]=A[i-1];
   A[i-1]=temp;
  //put the pivot element in its proper place.
   return i-1;                     
}


void quick_sort ( int A[ ] ,int start , int end ) {
   if( start < end ) {
        
         int piv_pos = partition (A,start , end ) ;
         quick_sort (A,start , piv_pos -1);   
         quick_sort ( A,piv_pos +1 , end) ; 
   }

}

int main()
  {
     int A[n];
     printf("Enter %d array elememts",n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
     quick_sort(A,0,n);
      for(int k=0;k<n;k++)
{
    printf(" %d ",A[k]);
}

  }

