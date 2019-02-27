#include <iostream>
using namespace std;
int main()
{
  int i,nomorbatas;
  long int arr[100];

  cout << "Masukkan batasan Fibonacci : ";
  cin >> nomorbatas;

  arr[0]=0;
  arr[1]=1;

  for(i = 2; i< nomorbatas ; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }

  cout << "Deret Fibonacci nya adalah : ";
  for(i=0; i< nomorbatas; i++)
    cout << arr[i]<<" ";
  return 0;
}
