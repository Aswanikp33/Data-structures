#include<stdio.h>
void main()
{
int a[10],b[10],c[10],i,j,k,n,m,l,p;
printf("Enter the size of first array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the size of second array:");
scanf("%d",&m);
printf("Enter the elements:");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
printf("The resultant array is:\n");
i=0;
j=0;
k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;
}
}
if(i<n)
{
while (i<n)
{
c[k]=a[i];
i++;
k++;
}
}
else if(j<m)
{
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
}
 p=m+n;
for(k=0;k<p;k++)
{
printf("%d\n",c[k]);
}
}

    


