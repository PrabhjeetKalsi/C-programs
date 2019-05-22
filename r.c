#include<stdio.h>
int main()
{ 
  int i,m,n;
  scanf("%d",&m);
  int a[m];
  for(i=0;i<m;i++)
    scanf("%d",&a[i]);
  scanf("%d",&n);
  int b[n],j;
  for(i=0;i<n;i++)
    scanf("%d",&b[i]);
  int count=1;
  int tf;
  int u=1;
  int c[m];
  c[0]=a[0];
  for(i=1;i<m;i++)
  {
    tf=0;
    for(j=0;j<i;j++)
    {
      tf=1;
      if(a[i]==a[j])
      {
        tf=0;
        break;
      }
    }
    if(tf==1)
    {
      count++;
      c[u]=a[i];
      u++;
    }
  }
  for(i=0;i<n;i++)
  { 
    if(b[i]>=c[0])
    {
      printf("%d\n",1);
      continue;
    }
  //dhskkfkkjbskdjbfksjdfskdbfksjbsbjfksbf
    for(j=0;j<count;j++)
    {
      if((b[i]>=c[j])&&(b[i]<c[j-1]))
      {
        printf("%d\n",j+1);
        break;
      }
    }
    if(b[i]<c[count-1])
      printf("%d\n",count+1);
  }
  return 0;
}
