# Arrays <br/>

Arrays are a great opportunity to explore object-oriented principles such as encapsulation, abstraction, inheritance, and polymorphism.  <br/>

Array.h abstracts the methods used to develop an array that can be accessed by an end-user.  Think of .h files as an Application Programming Interface (API).  Allowing users access to the .h files should provide the necessary documentation to use the classes developed.<br/>
<br/>
In developing the classes for static and dynamic arrays, it became clear that dynamic arrays are simply an extension of static arrays.  As such, this was a great opportunity to explore inheritance in C++.  The constructors, destructors, move, assignment, and overloaded operators are the same.  As such, to access the operators in the child class, DynamicArray, the using Base::Base method was used.<br/> <br/>

To see the development of the classes individually, see the SeparateHeaders file.
