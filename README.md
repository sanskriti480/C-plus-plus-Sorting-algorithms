# Experiment 21: Sorting Algorithms

---

## Aim
---

- To study and implement different sorting algorithms (Bubble Sort, Selection Sort, and Quick Sort) in C++ 
- Analyze their working, efficiency, and applications.  

---

## Tools Used
---
VS code and Online C++ Compiler

---

## Objective
---

- Understand the fundamental working of sorting algorithms.
- Compare the time and space complexity of Bubble Sort, Selection Sort, and Quick Sort.
- Learn to implement sorting algorithms in C++ using arrays, loops, and recursion.
- Analyze the suitability of each algorithm for different types of datasets.
- Explore real-world applications of sorting algorithms.

---

## Theory  

## What is a Sorting Algorithm?
A sorting algorithm is a method of arranging elements in a particular order (ascending or descending). Sorting is fundamental in computer science for optimizing other algorithms, improving search efficiency, and organizing data.  

---

## Bubble Sort

**Definition:**  
Bubble Sort is a simple comparison-based sorting algorithm in which each pair of adjacent elements is compared, and the elements are swapped if they are in the wrong order. This process is repeated for all elements until the array is completely sorted.  

**Working Principle:**  
- Compare the first two elements; swap if needed.  
- Move to the next pair and repeat.  
- After each pass, the largest element “bubbles” to the end of the array.  
- Repeat this process for the remaining unsorted portion of the array.  

**Characteristics:**  
- Stable sorting algorithm (does not change the relative order of equal elements).  
- Simple to implement, but inefficient for large datasets.  
- Best suited for small or nearly sorted arrays.  

---

## Selection Sort

**Definition:**  
Selection Sort is a comparison-based sorting algorithm where the array is divided into two parts: the sorted part at the beginning and the unsorted part at the end. The smallest element from the unsorted part is repeatedly selected and placed at the correct position in the sorted part.  

**Working Principle:**  
- Start from the first element, assume it is the minimum.  
- Scan the remaining unsorted elements to find the true minimum.  
- Swap the minimum element with the first element of the unsorted part.  
- Move the boundary of the sorted part one element forward and repeat.  

**Characteristics:**  
- Performs fewer swaps than Bubble Sort.  
- Stable if implemented carefully.  
- Simple to understand but inefficient for large datasets (O(n²)).  
- Memory writes are minimal, making it suitable for systems with write-cost constraints.  

---

## Quick Sort

**Definition:**  
Quick Sort is a divide-and-conquer sorting algorithm that selects a “pivot” element from the array and partitions the other elements into two sub-arrays: elements smaller than the pivot and elements greater than the pivot. The sub-arrays are then recursively sorted.  

**Working Principle:**  
- Choose a pivot element (commonly the last element).  
- Rearrange elements so that all smaller elements come before the pivot and larger elements come after it (partitioning).  
- Recursively apply the same process to the sub-arrays on the left and right of the pivot.  
- Combine the results to get the sorted array.  

**Characteristics:**  
- Very efficient for large datasets (average time complexity O(n log n)).  
- In-place sorting algorithm, requiring minimal extra memory.  
- Not stable by default.  
- Performance depends on the pivot selection; poor pivot choice can lead to O(n²) worst-case complexity.  


---
## Use Cases of Sorting Algorithms  

1. **Bubble Sort:**  
   - Used in small datasets where simplicity is more important than efficiency.  
   - Educational purposes to demonstrate basic sorting logic.  

2. **Selection Sort:**  
   - Useful when memory writes are costly because it performs fewer swaps than Bubble Sort.  
   - Can be used in embedded systems or small hardware devices.  

3. **Quick Sort:**  
   - Suitable for large datasets due to its average-case efficiency.  
   - Widely used in databases, file systems, and libraries for efficient data handling.  

---

## Differences Between the Three Algorithms

| Feature                  | Bubble Sort                     | Selection Sort                    | Quick Sort                             |
|--------------------------|---------------------------------|----------------------------------|---------------------------------------|
| Approach                 | Swap adjacent elements          | Find minimum & place correctly   | Partition array & recursively sort    |
| Number of Swaps          | Many                            | Fewer than Bubble Sort           | During partitioning                    |
| Best Case Time Complexity| O(n)                            | O(n²)                            | O(n log n)                             |
| Average Case Time Complexity | O(n²)                        | O(n²)                            | O(n log n)                             |
| Worst Case Time Complexity   | O(n²)                        | O(n²)                            | O(n²)                                  |
| Space Complexity         | O(1)                            | O(1)                             | O(log n) (recursion)                   |
| Stability                | Stable                          | Stable                           | Not stable                             |


---

## Most Advantageous Algorithm  
- **Quick Sort** is generally the most advantageous because:  
  - Average-case time complexity of **O(n log n)** is much faster than Bubble or Selection Sort for large datasets.  
  - Works efficiently with large arrays and is widely used in practice.  
- Bubble Sort and Selection Sort are simpler but less efficient for large datasets.  

---

## Advantages & Disadvantages  

### Bubble Sort
- **Advantages:**  
  - Simple to implement  
  - Stable sorting  
- **Disadvantages:**  
  - Very slow for large arrays (O(n²))  
  - Performs unnecessary comparisons even if array is already sorted  

### Selection Sort
- **Advantages:**  
  - Performs fewer swaps than Bubble Sort  
  - Easy to implement  
  - Stable sorting  
- **Disadvantages:**  
  - Still slow for large datasets (O(n²))  
  - Not adaptive (doesn’t check if array is already sorted)  

### Quick Sort
- **Advantages:**  
  - Very fast for large datasets (average O(n log n))  
  - In-place sorting (requires small auxiliary memory)  
  - Widely used in industry  
- **Disadvantages:**  
  - Not stable by default  
  - Worst-case O(n²) if pivot is poorly chosen  

---

## Algorithms & Flowcharts for Sorting

### Bubble Sort

1. Start
2. Repeat for i = 0 to n-1
3. Repeat for j = 0 to n-i-1
   - If arr[j] > arr[j+1], swap arr[j] and arr[j+1]
4. End inner loop
5. End outer loop
6. Print sorted array
7. Stop

```
+------------------+
|      Start       |
+------------------+
          |
          v
+------------------+
|   i = 0          |
+------------------+
          |
          v
+------------------+
|   j = 0          |
+------------------+
          |
          v
+-----------------------------+
| Is arr[j] > arr[j+1]?       |
+-----------------------------+
       |Yes             |No
       v                |
+----------------+      |
| Swap arr[j] &  |      |
| arr[j+1]       |      |
+----------------+      |
       |                |
       v                v
   +---------------------+
   | j = j + 1           |
   +---------------------+
           |
           v
   +---------------------+
   | j < n-i-1 ?         |
   +---------------------+
       |Yes          |No
       v             v
  (Repeat inner)  i = i + 1
                     |
                     v
               +----------------+
               | i < n-1 ?      |
               +----------------+
                   |Yes |No
                   v     v
              (Repeat outer)  Print array
                                |
                                v
                           +-----------+
                           |   Stop    |
                           +-----------+


```

---
### 2. Selection Sort
1. Start
2. For i = 0 to n-1
   - Set minIndex = i
   - For j = i+1 to n-1
     - If arr[j] < arr[minIndex], minIndex = j
   - Swap arr[i] and arr[minIndex]
3. End loops
4. Print array
5. Stop

```
+------------------+
|      Start       |
+------------------+
          |
          v
+------------------+
| i = 0            |
+------------------+
          |
          v
+------------------+
| minIndex = i     |
+------------------+
          |
          v
+------------------+
| j = i + 1        |
+------------------+
          |
          v
+---------------------------+
| Is arr[j] < arr[minIndex]?|
+---------------------------+
       |Yes         |No
       v            |
+----------------+  |
| minIndex = j   |  |
+----------------+  |
       |            |
       v            v 
   +------------------+
   | j = j + 1        |
   +------------------+
           |
           v
   +------------------+
   | j < n ?          |
   +------------------+
       |Yes        |No
       v           v
  (Repeat inner)  Swap arr[i] & minIndex
                   |
                   v
               +----------------+
               | i = i + 1      |
               +----------------+
                     |
                     v
            +-------------------------+
            |       i < n-1 ?         |
            +-------------------------+
                 |Yes           |No
                 v              v
           (Repeat outer)   Print array
                                |
                                v
                           +-----------+
                           |   Stop    |
                           +-----------+


```

---

## 3. Quick Sort

### Algorithm:
1. Start
2. If low < high:
   - Partition array around pivot
     - Choose pivot (last element)
     - Place elements smaller than pivot to left, larger to right
   - Recursively quickSort left subarray
   - Recursively quickSort right subarray
3. Stop
```
+------------------+
|      Start       |
+------------------+
          |
          v
+---------------------+
|   low < high ?      |
+---------------------+
     |No       |Yes
     v          v
    Stop       +----------------------+
               | Partition array      |
               | around pivot         |
               +----------------------+
                       |
                       v
               +----------------------+
               | QuickSort left       |
               | (low to pivot-1)     |
               +----------------------+
                       |
                       v
               +----------------------+
               | QuickSort right      |
               | (pivot+1 to high)    |
               +----------------------+
                       |
                       v
                   +-----------+
                   |   End     |
                   +-----------+


```

---


## Industrial Applications  
1. **Quick Sort:**  
   - Used by **C++ STL `sort()` function**  
   - Databases like **MySQL** use Quick Sort for indexing and efficient query processing  

2. **Selection Sort:**  
   - Embedded systems where memory writes are costly  
   - Small-scale hardware sorting applications  

3. **Bubble Sort:**  
   - Educational tools and small scripts  
   - Rarely used in industry due to inefficiency  

---

## Concepts used
---

- Arrays: To store elements to be sorted.
- Loops: For iterating through array elements.
- Conditionals: To compare and decide when to swap elements.
- Swapping: Rearranging elements for sorting.
- Recursion: Used in Quick Sort to sort subarrays.
- Divide and Conquer: Quick Sort principle for efficient sorting.
- Time and Space Complexity: To analyze algorithm efficiency.

---

## Conclusion  
- Sorting is a fundamental operation in computing and data processing.  
- Quick Sort is preferred for large datasets due to its efficiency.  
- Bubble Sort and Selection Sort are easy to understand, useful for small arrays, and helpful for learning sorting concepts.
