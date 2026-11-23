## 01. Array with All Palindromes

The problem can be found at the following link: [Question Link](https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1)

### Problem Description

**Task:** Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.Examples:Input: arr[] = [111, 222, 333, 444, 555]

#### Examples

##### Example 1

- **Output:**
```text
false
```
- **Explanation:** 20 is not a palindrome hence the output is false.

### Time and Auxiliary Space Complexity

- **Expected Time Complexity:** O(n log n)
- **Expected Auxiliary Space Complexity:** O(1)

### Accepted Solutions (1)

#### Solution 1 (Java)

- **Submitted:** 2026-11-23 12:14:53
- **Status:** Correct
- **Marks:** 1

```java
class Solution {
    public static boolean isPalinArray(int[] arr) {
        
        for(int i=0; i<arr.length; i++){
            
            int currentEle = arr[i];
            int rev = 0;
            
            while(arr[i] > 0){
                
                int lastDigit = arr[i] % 10;
                rev = (rev * 10) + lastDigit;
                arr[i] = arr[i] / 10;
            }
            
            if(currentEle != rev){
                return false;
            }
            
        }
        return true;
    }
}
```

*Generated on: 11/23/2026, 12:15:30 PM*