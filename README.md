# Circular-Linked-List-Implementation-in-C
This project implements a Circular Linked List (CLL) in C
This project implements a Circular Linked List (CLL) in C, allowing users to perform various operations such as insertion, deletion, and traversal. The program provides an interactive menu to manage the linked list dynamically.

Features
The program supports the following operations:

Create a Circular Linked List – Allows the user to create a list by entering elements.
Display the List – Prints the elements in the circular linked list.
Insertion Operations
At the beginning
At the end
Deletion Operations
From the beginning
From the end
Exit the Program – Terminates execution.
Functions and Their Purpose
Function	Description
create_ll(start)	Creates a new circular linked list.
display(start)	Prints all elements in the circular linked list.
insert_beg(start)	Inserts a new node at the beginning.
insert_end(start)	Inserts a new node at the end.
delete_beg(start)	Deletes the first node.
delete_end(start)	Deletes the last node.
Edge Cases Handled
Empty List: Displays appropriate messages when performing operations on an empty list.
Node Not Found: Ensures logical handling of invalid operations.
Memory Allocation Failure: Prevents crashes due to failed memory allocation.
Possible Enhancements
Implement a search function to find elements in the list.
Implement a reverse function to print the list in reverse order.
