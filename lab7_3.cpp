#include<iostream>

using namespace std;

int adiff(int x1,int x2)
{
  int r1,r2;
  r1 = x1%360;
  r2 = x2%360;
  if(r1>r2)
  {
  if( (r1-r2) <=180 )
  {
    return (r1-r2);
  }
  else if ( (r1-r2) >180)
  {
    return (360-(r1-r2));
  }
  }
  else
  {
    if( (r2-r1) <=180 )
  {
    return (r2-r1);
  }
  else if ( (r2-r1) >180)
  {
    return (360-(r2-r1));
  }
  }
  
  return 0;
}