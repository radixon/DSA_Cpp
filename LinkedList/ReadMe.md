# Linked Lists <br/>
<br/>
A linked list is a data structure in which the objects are arranged in linear order.  Linked lists provide a simple, flexible representation for dynamic sets. <br/>
<br/>
Linked memory stores data together with a "link" to the location, in memory, of the next /and previous node depending on whether the list is singly or doubly linked. <br/>
<br/>
In C++, these lists are sequential lists of nodes.  A list node has both the data and accompanying link(s).  A linked list has zero or more ListNode elements linked together. <br/>
<br/>
Linked lists have a pointer called the "head pointer" that stores the link to the beginning of the list.  Linked lists have a pointer to the nullptr marking the end of the list which is called the tail. <br/>


# Linked Lists and Merge Sort
## Ordered Data Structures — Week 1 ProjectUniversity of Illinois
### Introduction
In this assignment, we provide you with a templated LinkedList class, that is a doubly-linked list data structure. You’ll implement some of the member functions for this class that perform insertions and create sorted copies of lists. In the process you’ll see how to traverse a list with pointers, how to connect nodes in a doubly-linked list, and see how the classic “merge sort” and “merge” algorithms work.

# Compiling and Testing Your Code

To compile the code, you must use the terminal to enter the same directory where the Makefile is stored; it's in the same directory where main.cpp is located. As explained in the readings, use cd to change to the appropriate directory, use ls to view the file list in that directory (just to make sure that you’re in the right place), and then type make to automatically start the compilation. If you need to clear out the files you've previously built, type make clean. If you encounter any warnings or errors during compilation, study the messages in the terminal carefully to figure out what might be wrong with your code.
<br /><br />
If your compilation is successful, you’ll get an executable file simply called main in the same directory as main.cpp. You can try running it by typing ./main while you’re in that directory.
As the compilation message suggests, you should also run the unit tests included in the test program. To compile it automatically, just type make test at the same prompt. If this compilation is also successful, you’ll see a file named test appear in the directory. Then, you can run it by typing ./test similarly to before.
<br />

## To compile and run the main program:
make clean && make && ./main
<br /><br />
It is faster to just do “make” and not perform “make clean” first, but “make clean” can help you resolve certain compilation problems sometimes.


## To compile and run the test suite:
make clean && make test && ./test
<br /><br />
For this assignment, you can run the same test suite that the autograder will use on Coursera.


## To compile and run the benchmarks:
make clean && make test && ./test [bench]
<br /><br />
The benchmark test will compare the running times of some of the functions against lists of various sizes. If you tried to solve the problems in an incorrect way, yours may run much slower than the times suggested in the terminal output messages. (On the other hand, depending on what your version of the compiler does for optimizations on your processor, you might see one of the tests run twice as quickly as expected, or so on.)
<br /><br />
Some of the implementations given to you in the starter files are not necessarily optimal. For example, for simplicity, the starter code creates or passes extra working copies of lists instead of editing lists in-place solely by rewiring the pointers linking the nodes together. (If you are bored, try redoing the assignment for maximum efficiency.)
<br /><br />

## To make a package of your files for submission:
make zip
<br /><br />
This automatically bundles only those files that have been specified for you to edit. For this assignment, only LinkedListExercises.h will be collected.
