## 01. Floor and Ceil in Unsorted

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/ceil-the-floor2802/1)

### Problem Description

**Task:** Given an unsorted array arr[] of integers and an integer x, find the floor and ceiling of x in arr[].Floor of x is the largest element which is smaller than or equal to x. Floor of x doesn’t exist if x is smaller than smallest element of arr[].Ceil of x is the smallest element which is greater than or equal to x. Ceil of x doesn’t exist if x is greater than greatest element of arr[].Return an array of integers denoting the [floor, ceil]. Return -1 for floor or ceiling if the floor or ceiling is not present.Examples:Input: x = 7 , arr[] = [5, 6, 8, 9, 6, 5, 5, 6]

#### Examples

##### Example 1

- **Output:**
```text
6, 8
```
- **Explanation:** Floor of 7 is 6 and ceil of 7 is 8.

##### Example 2

- **Input:**
```text
x = 10 , arr[] = [5, 6, 8, 8, 6, 5, 5, 6]
```
- **Output:**
```text
8, -1
```
- **Explanation:** Floor of 10 is 8 but ceil of 10 is not possible.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (Java)

- **Submitted:** 2026-11-23 17:05:26
- **Status:** Correct
- **Marks:** 2

```java
import java.util.Arrays;

class Solution {
    public int[] getFloorAndCeil(int x, int[] arr) {

        int floor = -1;
        int ceil = -1;

        // Edge case: empty array
        if (arr.length == 0) {
            return new int[]{floor, ceil};
        }

        // Step 1: Sort the array
        Arrays.sort(arr);

        // Step 2: Find Floor using forward loop
        for (int i = 0; i < arr.length; i++) {

            if (arr[i] <= x && arr[i] > floor) {
                floor = arr[i];
            }
        }

        // Step 3: Find Ceil using backward loop
        for (int i = arr.length - 1; i >= 0; i--) {

            if (arr[i] >= x) {
                ceil = arr[i];
            }
        }

        // Step 4: Return both values
        return new int[]{floor, ceil};
    }
}
```

*Generated on: 11/23/2026, 5:05:54 PM*