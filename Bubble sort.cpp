#include<stdio.h>
 void bubble_sort(int A[ ],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
	 {
        for(int j = 0; j< n-i-1; j++)
		{
            if(A[ j] > A[ j+1] )
			{
                temp = A[ j ];
             A[ j] = A[ j+1 ];
              A[ j + 1] = temp;
            }
        }
    }

for(int i=0;i<n;i++)
{
    printf(" %d ",A[i]);
}

}



  int main()
  {    int n=7;
     int A[n];
     printf("Enter %d array elememts",n);
     for(int i=0;i<n;i++)
     {
         scanf("%d",&A[i]);
     }
     bubble_sort(A,n);
  }

