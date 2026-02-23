#include <stdio.h>    //Пятницький Данило, 101 група, 7 лабораторна, 7 завдання.
#include <limits.h>   
#include <stdlib.h>
int main()
{

int N,diff=0,size,g=0;
printf("Enter N:\n");
scanf("%d",&N);//Введення N
if(N<0) return 0;//Перевірка
int *A = (int*)malloc(N * sizeof(int));
   
   printf("A[0]=", A[0]);       //Введення першого елемента
   scanf("%d", &A[0]);
   for(int i=1;i<N;i++){        //Введення
       printf("\nA[%d]=", i);
       scanf("%d", &A[i]);
   }
          
   for(int j=0;j<N;j++){        
      if(A[j]>10){
          diff++;
      }
   }
   size = diff;
   int *B = (int*)malloc(size * sizeof(int));
   for(int f=0;f<N;f++){
        if(A[f]>10){
            B[g]=A[f];
            g++;
        }
   }
        for(int p=0;p<size;p++){
         printf("%d ",B[p]);
      }    
      free(A);
      free(B);
    return 0;
}
