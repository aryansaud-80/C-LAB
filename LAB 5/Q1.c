// WAP to input ‘n’ numbers and sort them in ascending order.

#include <stdio.h>

void sortArray(int arr[], int n);

int main()
{
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);


  int arr[n],i;
  for (i = 0; i < n; i++)
  {
    printf("Enter %d integer: ", i + 1);
    scanf("%d", &arr[i]);
  }

  sortArray(arr,n);

  for ( i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}

void sortArray(int arr[], int n)
{
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}