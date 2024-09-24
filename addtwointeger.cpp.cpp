#include <iostream>
using namespace std;

int main()
{
  int first_number, second_number, sum;
  
  cout<<" Enter two integer:";
  cin>>first_number>> second_number;
  
  //Sum of two numbers in stored in variable sum of two numbers
  sum = first_number + second_number;
  
  //Prints Sum
  cout<<first_number<<"+"<<second_number<<"="<<sum;
  return 0;
}