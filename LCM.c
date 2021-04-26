//finding lcm of two numbers
#include<stdio.h>
int lcm(int x,int y)

{ static int m=0;
  m=m+y;
  if(m%x==0 && m%y==0)
  { return m;
  }
  else
  { return lcm(x,y);
  }
}

int main()
{ int a,b;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);

  printf("LCM of %d and %d is %d",a,b,lcm(a,b));
  return 0;
}



