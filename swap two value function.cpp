#include<iostraem>
using namespace std;

void swap( int& a, int& b)
{
  int temp=a;
  a=b;
}
int main()
{
  int x,Y;
  cout<<"Enter the value of x:";
  cin>>x;
  cout<<"Enter the value of Y:";
  cin>>Y;
  
  cout<<"\nBefore swaping:\n";
  cout<<"X="<<x<<",Y="<<Y<<endl;
  
  swap(x,Y);
  cout<<"\nAfter swapping:\n";
  cout<<"x="<<x<<",y="endl;
  
  return 0;
}