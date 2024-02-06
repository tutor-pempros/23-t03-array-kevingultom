// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int arr, besar, kecil, i;
  
  scanf("%d", &arr);
int arr1[arr];
int arr2[arr];
  for (int i = 0; i < arr; i++)
  {
    scanf("%d", &arr1[i]);
    besar = arr1[i];
    kecil = arr1[i];
  }
  for (int i = 0; i < arr; i++)
    if (arr1[i] < kecil)
    {
      kecil = arr1[i];
    }
     if (arr1[i] > besar)
    {
      besar = arr1[i];
    }

  
 printf("%d\n", kecil);
  printf("%d\n", besar);

  return 0;
}


