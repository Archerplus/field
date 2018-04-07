#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*a为行列式，n为行列式的阶*/
int f(int **a,int n)
{
   int i,j,k;
   int len;/*子行列式的阶*/
   int s=0;
   len=n-1;
   /*按照定义，初始化一个子行列式数组的空间*/
   int **p=(int **)malloc(sizeof(int *)*len);
   for(i=0;i<len;i++)
       p[i]=(int *)malloc(sizeof(int)*len);
   /*阶为1，按照定义计算*/
   if(1==n)
       return a[0][0];
   for(k=0;k<n;k++)
   {
       for(i=0;i<len;i++)
           for(j=0;j<len;j++)
           {
               if(i<k)
                   p[i][j]=a[i][j+1];/*初始化子行列式的值*/
               if(i>=k)
                   p[i][j] = a[i+1][j+1];
           }
       s+=(int)pow(-1,k)*a[k][0]*f(p,len);/*递归计算*/
   }
   for(i=0;i<len;i++)free(*(p+i));
   free(p);
   return s;
}
int main()
{
   int i,j,n;
   printf("输入阶数：");
   scanf("%d",&n);
   int a[n][n];
   int **p=(int **)malloc(sizeof(int *)*n);//分配空间
   printf("输入行列式：");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
   }
   for(i=0;i<n;i++)
       p[i]=a[i];
   printf("%d",f(p,n));//调用函数
   free(p);
}

