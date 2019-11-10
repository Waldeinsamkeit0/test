#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long long xuehao;
  char sex;
  cin>>xuehao>>sex;
  int x1,x2,x3,x4;
  cin>>x1>>x2>>x3>>x4;
  double ave;
  ave=(x1+x2+x3+x4)/4.0;
  if(ave>85)
	  cout<<xuehao<<" "<<"y"<<endl;
  else
	  cout<<xuehao<<" "<<"n"<<endl;
  return 0;
  
}
