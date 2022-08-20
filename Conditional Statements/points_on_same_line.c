
 #include<stdio.h>
 int main()
{
  int x1,y1,x2,y2,x3,y3,slope1,slope2;

 printf("Enter coordinates of 1st point (x1,y1) : ");
  scanf("%d%d",&x1,&y1);
 printf("Enter coordinates of 2nd point (x2,y2) : ");
 scanf("%d%d",&x2,&y2);
 printf("Enter coordinates of 3rd point (x3,y3) : ");
 scanf("%d%d",&x3,&y3);
  slope1=(y2-y1)/(x2-x1);
  slope2=(y3-y2)/(x3-x2);
  if(slope1==slope2)
  {
   printf("The given point fall on one straight line.");
  }
  else
  {
   printf("The given point does not fall on one straight line.");
  }

  return 0;
}
