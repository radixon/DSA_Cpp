# DSA_Cpp
Data Structures and Algorithms in C++ <br/>
<br/>
# References <br/>
## Arrays <br/>
[1] S. Lippman, J. Lajoie, B. Moo, C++ Primer (5th Edition). Westford, MA: Addison-Wesley Professional, 2012. <br/>
[2] Erik Demaine, “2. Data Structures and Dynamic Arrays,” 2020 [Online]. Available: https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/resources/lecture-2-data-structures-and-dynamic-arrays/. <br/>
[3] Erik Demaine, "6.006 INTRODUCTION TO ALGORITHMS, RECITATION 2," 2020 [Online]. Available: https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/resources/mit6_006s20_r02/. <br/>
[4] Wade Fagen-Ulmschneider, "Ordered Data Structures," 2022 [Online].  Available: https://www.coursera.org/learn/cs-fundamentals-2. <br/>

# Static Arrays <br/>
<br/>
Arrays store data in blocks of sequential memory.  These blocks of data must be of the same type, and the size of the type of data is known. <br/>
<br/>
Arrays have a fixed capacity.  The capacity is the maximum nuber of elements that can be stored.  The size of an array is the current number of elements stored in the array.  To access an index in an array, the program multiplies the index by size_of(data). <br/>
<br/>

## Time Complexity  <br/>
Accessing an array index takes one computer step.  arr[n] is processes as size_of(data) * index. <br/>
This has a constant time, O(1), time complexity. <br/>
<br/>
Finding data within an array.  This requires traversing the array in order until the data is found.  <br/>
This has a linear time, O(n), time complexity. <br/>
<br/>
Finding data within a sorted array.  This requires jumping to the halfway point in the array and checking to see if the value is greater than or less than.  And repeating this process until the data is found. <br/>
This is a binary search with an O(lg n) time complexity. <br/>

# Linked Lists <br/>
<br/>
A linked list is a data structure in which the objects are arranged in linear order.  Linked lists provide a simple, flexible representation for dynamic sets. <br/>
<br/>
Linked memory stores data together with a "link" to the location, in memory, of the next /and previous node depending on whether the list is singly or doubly linked. <br/>
<br/>
In C++, these lists are sequential lists of nodes.  A list node has both the data and accompanying link(s).  A linked list has zero or more ListNode elements linked together. <br/>
<br/>
Linked lists have a pointer called the "head pointer" that stores the link to the beginning of the list.  Linked lists have a pointer to the nullptr marking the end of the list which is called the tail. <br/>

## Time Complexity  <br/>
