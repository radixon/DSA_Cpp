# DSA_Cpp
Data Structures and Algorithms in C++ <br/>
<br/>
# Arrays <br/>

Arrays store data in blocks of sequential memory.  These blocks of data must be of the same type, and the size of the type of data is known. <br/>
<br/>

## Static Arrays <br/>
<br/>
Static arrays have a fixed capacity.  The capacity is the maximum number of elements that can be stored.  The size of a static array is the current number of elements stored in the array.  To access an index in an array, the program multiplies the index by size_of(data). <br/>
<br/>

## Dynamic Arrays <br/>
<br/>
Dynamic arrays are static arrays that are reallocated.  An indicator is used to determine whether the array is full.  When the array is full, a new, larger array is created.  Then the original array is copied over and finally deleted.<br/>
<br/>
Doubling the size each time an array is at capacity allows for O(1) time complexity on inserting at the front or back of the array. <br/>
<br/>

## Arrays on the Heap <br/>
<br/>
Arrays on the heap must be manually destroyed with a destructor.  These arrays will not be removed from memory by the compiler when the method or program ends. <br/>
<br/>

## Arrays on the Stack <br/>
Arrays on the stack are removed from memory at the end of the method in which the array was created.  The limitation is that the size of the array must be determined when the array is initialilzed. <br/>
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

# References <br/>
## Arrays <br/>
[1] S. Lippman, J. Lajoie, B. Moo, C++ Primer (5th Edition). Westford, MA: Addison-Wesley Professional, 2012. <br/>
[2] Erik Demaine, “2. Data Structures and Dynamic Arrays,” 2020 [Online]. Available: https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/resources/lecture-2-data-structures-and-dynamic-arrays/. <br/>
[3] Erik Demaine, "6.006 INTRODUCTION TO ALGORITHMS, RECITATION 2," 2020 [Online]. Available: https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/resources/mit6_006s20_r02/. <br/>
[4] Wade Fagen-Ulmschneider, "Ordered Data Structures," 2022 [Online].  Available: https://www.coursera.org/learn/cs-fundamentals-2. <br/>

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

Inserting new data at the head of the list takes O(1) time.  The new data points to the first element and head points to the new node.<br/>
<br/>
Access data at a given index requires advancing through the list until the index is reached.  This is O(n), linear, time. <br/>
<br/>
Finding data in a linked list requires advancing through the list until the index is reached.  This is O(n) time. <br/>
<br/>
Inserting after a given index requires changine the next pointer of the given index to the new node, and pointing the next pointer of the new node to the next element.  This takes O(1) time.<br/>

# References <br/>
## Linked List <br/>
[1] S. Lippman, J. Lajoie, B. Moo, C++ Primer (5th Edition). Westford, MA: Addison-Wesley Professional, 2012. <br/>
[2] Erik Demaine, "6.006 INTRODUCTION TO ALGORITHMS, RECITATION 2," 2020 [Online]. Available: https://ocw.mit.edu/courses/6-006-introduction-to-algorithms-spring-2020/resources/mit6_006s20_r02/. <br/>
[3] Wade Fagen-Ulmschneider, "Ordered Data Structures," 2022 [Online].  Available: https://www.coursera.org/learn/cs-fundamentals-2. <br/>
[4] Tomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, Clifford Stein, Introduction To Algorithms (THIRD EDITION). Cambridge, MA: Massachusetts Institute of Technology, 2009. <br/>
