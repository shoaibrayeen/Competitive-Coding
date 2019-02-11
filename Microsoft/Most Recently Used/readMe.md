## Given an integer K and an array arr[] of N integers which contains the ids of the opened apps in a system where

- arr[0] is the app currently in use
- arr[1] is the app which was most recently used and
- arr[N – 1] is the app which was least recently used.
## The task is to print the contents of the array when the user using the system presses Alt + Tab exactly K number of times. Note that after pressing Alt + Tab key, app opening pointer will move through apps from 0th index towards right, depending upon the number of presses, so the app on which the press ends will shift to 0th index, because that will become the most recently opened app.

```
Input: arr[] = {3, 5, 2, 4, 1}, K = 3
Output: 4 3 5 2 1
User want to switch to the app with id 4, it’ll become the currently active app and the previously 
active app (with id 3) will be the most recently used app.

Input: arr[] = {5, 7, 2, 3, 4, 1, 6}, K = 10
Output: 3 5 7 2 4 1 6
```
