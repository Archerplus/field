#include <stdio.h> 
#define MIN(x,y) (x>y) ? (y) : (x) 
fun ( int a11, int i, int j, int n) 
{ int min, a22; 
if ( i==j && i<=1 ) return a11; 
else if ( i==j && i<=(n+1)/2) return ( fun(a11,i-1,i-1,n)+4*(n-2*i+3) ); 
else if ( i==1 && j!=1 ) return ( a11+j-1 ); 
else if ( i!=1 && j==n ) return ( a11+n+i-2 ); 
else if ( i!=1 && j==1 ) return ( a11+4*n-3-i ); 
else if ( i==n && j!=1 ) return ( a11+3*n-2-j ); 
else 
{ if (i>=(n+1)/2 && j>=(n+1)/2) min = MIN(n-i+1,n-j+1); 
else if (i<(n+1)/2 && j>=(n+1)/2) min = MIN(i,n-j+1); 
else if (i>=(n+1)/2 && j<(n+1)/2) min = MIN(n-i+1,j); 
else min = MIN(i,j); 
a22 = fun(a11,min,min,n); 
return fun(a22, i-min+1, j-min+1, n-2*(min-1) ); 
} 
} 
main ( ) 
{ int a11=1, i, j, n; 
printf ("Enter n="); 
scanf("%d", &n); 
for (i=1; i<=n; i++) 
{ for (j=1; j<=n; j++) 
printf ("%4d", fun(a11,i,j,n) ); 
printf ("\n"); 
} 
} 

