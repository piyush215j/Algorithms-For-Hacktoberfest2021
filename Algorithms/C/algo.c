#include iostream
using namespace std;
 
 Function to find the maximum sum of a contiguous subarray
 in a given integer array
int kadane(int arr[], int n)
{
     stores the maximum sum subarray found so far
    int max_so_far = 0;
 
     stores the maximum sum of subarray ending at the current position
    int max_ending_here = 0;
 
     traverse the given array
    for (int i = 0; i  n; i++)
    {
         update the maximum sum of subarray ending at index `i` (by adding the
         current element to maximum sum ending at previous index `i-1`)
        max_ending_here = max_ending_here + arr[i];
 
         if the maximum sum is negative, set it to 0 (which represents
         an empty subarray)
        max_ending_here = max(max_ending_here, 0);
 
         update the result if the current subarray sum is found to be greater
        max_so_far = max(max_so_far, max_ending_here);
    }
 
    return max_so_far;
}
 
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr)sizeof(arr[0]);
 
    cout  The maximum sum of a contiguous subarray is  
            kadane(arr, n);
 
    return 0;
}
