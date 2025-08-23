#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[7];
  for(int i=0;i<7;i++)
  {
    cin>>arr[i];
  }
  int hash[15] = {0};
  for(int i=0;i<7;i++)
  {
    hash[arr[i]] +=1;
  }
  bool hasThree = false, hasTwo = false;
  int countThree = 0, countTwo = 0;
  for (int i = 1; i <= 13; i++) {
    if (hash[i] == 3) {
        hasThree = true;
        countThree++;
    }
    if (hash[i] == 2) {
        hasTwo = true;
        countTwo++;
    }
}


if (hasThree && hasTwo && countThree == 1 && countTwo == 1) {
    cout << "Yes\n";
} else {
    cout << "No\n";
}

return 0;
}