# select-number in the array
## Student Information -
 **Name**: kidist abebe
 **Student ID**: RNS-9562/23
 **Course**: data structure and algorism
 
## Algorithm 
# for smallest number in the array
1. Initialize a variable `smallest` with the first element of the 
array. 
2. Iterate through the array starting from the second element. 
3. Compare each element with `smallest`. 
4. If the current element is greater than `smallest`, update 
`smallest` with the current element. 
5. After the loop ends, `smallest` will contain the largest 
number in the array. 



#for pinter bubble sorting
Bubble sort and insertion sort are classic sorting algorithms, and their pointer-based implementations are particularly useful in languages like C or C++ when working with dynamically allocated arrays. Here's a quick explanation of both algorithms:

Pointer-Based Bubble Sort Algorithm
Bubble sort repeatedly steps through the array, comparing adjacent elements and swapping them if they are in the wrong order. Here's the algorithm:

Define a pointer to the array.

Use nested loops:

The outer loop runs 
𝑛
−
1
 times, where 
𝑛
 is the size of the array.

The inner loop compares adjacent elements using the pointer.

Swap elements using pointers if they are out of order
Time Complexity
Best Case (Already Sorted Array): 
𝑂
(
𝑛
)

If the array is already sorted, Bubble Sort can detect this by completing a single pass without any swaps.

Average Case: 
𝑂
(
𝑛
2
)

On average, each element is compared with every other element, leading to quadratic growth in the number of comparisons.

Worst Case (Reverse Sorted Array): 
𝑂
(
𝑛
2
)

Bubble Sort requires 
(
𝑛
−
1
)
+
(
𝑛
−
2
)
+
⋯
+
1
=
𝑛
(
𝑛
−
1
)
2
≈
𝑂
(
𝑛
2
)
 comparisons and swaps in the worst-case scenario.

Space Complexity
𝑂
(
1
)
 (In-Place Algorithm)

Bubble Sort operates directly on the input array and requires no extra space other than a few temporary variables for swapping.

# pointer insertion
Insertion sort builds the sorted array one element at a time by comparing each element to the already sorted portion of the array. Here's the algorithm:

Define a pointer to the array.

Iterate over the array starting from the second element:

Use the pointer to find the correct position for the current element in the sorted portion of the array.

Shift elements using pointers to make space for the current element.

Place the current element in its correct position using the pointer.

Would you like me to write example code for these algorithms in C or C++? Let me know!

Time Complexity
Best Case (Already Sorted Array): 
𝑂
(
𝑛
)

Only one comparison is needed per element if the array is already sorted, resulting in linear time.

Average Case: 
𝑂
(
𝑛
2
)

On average, each element has to be compared with and inserted among 
𝑛
/
2
 elements of the sorted portion, leading to quadratic complexity.

Worst Case (Reverse Sorted Array): 
𝑂
(
𝑛
2
)

In the worst case, each element has to traverse and insert through the entire sorted portion, resulting in 
𝑛
(
𝑛
−
1
)
2
 comparisons.

Space Complexity
𝑂
(
1
)
 (In-Place Algorithm)

Like Bubble Sort, Insertion Sort also works directly on the input array and doesn't use extra memory.


#Ternary Search
Ternary search is used to find the maximum or minimum of a unimodal function or to search in a sorted array. It works by dividing the range into three parts:

Find two midpoints, dividing the range into three equal parts.

Compare the values at these midpoints.

Based on the comparison, reduce the range to the subrange that contains the desired value (or unimodal peak).

Repeat until the range narrows down to the target.

Pseudocode:

python
def ternary_search(array, target):
    left, right = 0, len(array) - 1
    while left <= right:
        mid1 = left + (right - left) // 3
        mid2 = right - (right - left) // 3
        if array[mid1] == target:
            return mid1
        elif array[mid2] == target:
            return mid2
        elif target < array[mid1]:
            right = mid1 - 1
        elif target > array[mid2]:
            left = mid2 + 1
        else:
            left = mid1 + 1
            right = mid2 - 1
    return -1  # If not found
    #Interpolation search works on sorted arrays and improves the efficiency of binary search by trying to estimate the position of the target element using interpolation formulae, particularly when the elements are uniformly distributed.

Key Steps:

Instead of taking the middle, compute the probable position using:

pos = left + ((target - array[left]) * (right - left)) // (array[right] - array[left])
Compare the target with the value at pos.

Narrow the search space depending on the comparison:

If the target is larger, search in the upper part.

If smaller, search in the lower part.

Repeat until the target is found or the range is exhausted.

Pseudocode:

python
def interpolation_search(array, target):
    left, right = 0, len(array) - 1
    while left <= right and target >= array[left] and target <= array[right]:
        if left == right:
            if array[left] == target:
                return left
            return -1
        
        # Estimate the position using interpolation formula
        pos = left + ((target - array[left]) * (right - left)) // (array[right] - array[left])
        
        if array[pos] == target:
            return pos
        elif array[pos] < target:
            left = pos + 1
        else:
            right = pos - 1
    return -1  # If not found
These algorithms differ in their application: ternary search is great for unimodal functions, while interpolation search excels in scenarios where data is sorted and uniformly distributed. Let me know if you need further clarification or examples! 😊

