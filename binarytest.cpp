#include <iostream>


int main() {

  int arr[8];
  int arr2[8];
  int ans[8];

  ans[0] = 0;
  ans[1] = 1;
  ans[2] = 0;
  ans[3] = 0;
  ans[4] = 1;
  ans[5] = 1;
  ans[6] = 0;
  ans[7] = 1;

  // TODO(Scott): turn decimal to binary
  //              check range
  //              divide by first highest then continue till binary

  //TODO(Scott): make function check arr[7] and arr2[7]
  for (unsigned int i = 0; i < sizeof(arr); i++)
    {
      if (arr[i] == arr2[i])
        {
          // go to next
        }
      else if (arr[i] == arr2[i])
        {
        }
      else
        {
        }
    }

  for (unsigned int i = 0; i <= ((sizeof(ans) / sizeof(int)) - 1); i++)
    {
      std::cout << ans[i] << "\n";
    }

  return 0;
}
