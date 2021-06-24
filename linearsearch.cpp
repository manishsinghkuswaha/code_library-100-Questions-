// Linear Search in C++

#include <iostream>
using namespace std;

int search(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
  int n;
  int x;
  cin>>n>>x;
  int array[n] ;
  for(int i=0; i<n; i++)
  {
      cin>>array[i];
  }
  
  

  int result = search(array, n, x);

  (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
} 
