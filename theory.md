# Theory

1. A linked list is a fundamental data structure in computer science used for storing and managing collections of data. It consists of a series of nodes, where each node contains both data and a reference (or link) to the next node in the sequence. The last node typically points to a null reference, indicating the end of the list.
2. There are several advantages to linked lists:  

- Dynamic size: linked lists can grow or shrink in size dynamically, as nodes can be easily added or removed without the need for contiguous memory allocation;  
- Ease of insertion and deletion: insertion and deletion operations are efficient, especially for singly linked lists, as they only require updating references to neighboring nodes;  
- Their versatility: linked lists can be implemented in various forms such as singly, doubly and circular linked lists, each suited to different scenarios;  
- Memory allocation flexibility: linked lists don't require contiguous memory allocation, making them suitable for situations where contiguous memory is not available or not efficient.  

    However, there are some disadavntages to linked lists, like  

- Sequential access: unlike arrays, linked lists don't support efficient random access to elements. Accessing an element in a linked list typically requires traversing the list from the beginning and checking every element, which can be inefficient for large lists;  
- Memory overhead: each node in a linked list requires additional memory for storing the reference to the next node, leading to higher memory overhead compared to arrays, especially for singly linked lists;  
- Cache performance: traversing a linked list may result in poor cache performance compared to arrays, as the elements are not stored in contiguous memory locations;  
- Extra complexity: implementing and manipulating linked lists often requires more complex code compared to arrays, especially for operations like reversing or sorting.

3. The uses of linked lists are  

- Dynamic memory allocation: linked lists are often used in dynamic memory allocation systems, such as those in programming languages like C and C++, where memory needs to be allocated and deallocated dynamically;  
- A base for stacks and queues: linked lists are used as a base for stack and queue data structures, where elements are added and removed in either a last-in-first-out (LIFO) or a first-in-first-out (FIFO) manner, respectively;  
- File systems: linked lists can be used to represent file systems' directories and their contents, where each node represents a directory or a file, and the links represent the hierarchical relationships between them;  
- Undo functionality: linked lists can be used to implement undo functionality in text editors or other software applications, where each node represents a state of the document, and the links represent the sequence of changes made.

4. A stack is a fundamental data structure in computer science that follows the Last In, First Out (LIFO) principle, meaning that the last element added to the stack is the first one to be removed. It can be envisioned as a stack of plates, where you can only add or remove plates from the top.
5. Stacks have multiple pros:

- Simple and efficient operations: stacks have very simple and efficient operations for adding (`push`) and removing (`pop`) elements. Both push and pop operations have a time complexity of O(1), making them very fast;
- Space efficiency: stacks use memory efficiently, as they only require memory proportional to the number of elements currently in the stack. They don't require a predetermined fixed size like arrays;
- Natural structure for certain problems: stacks naturally model certain problems and operations, such as function calls in programming languages (function call stack), backtracking algorithms, expression evaluation, and undo mechanisms in applications;
- Reversal of order: stacks can be used to reverse the order of elements efficiently. For example, you can push elements onto a stack and then pop them off in reverse order.

    There are also multiple cons:

- Limited access: stacks have limited access compared to other data structures like arrays or linked lists. You can only access the element at the top of the stack, and accessing elements in the middle requires popping off elements above them.
- Not suitable for random access: since stacks follow the LIFO principle, they are not suitable for scenarios where you need to access elements in a random order. If you need to access elements in arbitrary positions, other data structures like arrays or linked lists might be more appropriate.
- Dynamic memory management overhead: in some implementations, dynamic memory management (e.g., resizing the underlying array) can introduce overhead when the stack grows beyond its initial capacity.
- Potential for stack overflow: if the stack size exceeds the available memory in the system's stack space, it can lead to a stack overflow error, which can cause program termination or instability.

6. The uses of stacks are

- Memory management: stacks are used for managing memory in some programming languages. For example, in some languages, local variables and function call information are stored on the stack, while dynamically allocated memory is managed separately;
- Syntax parsing: stacks are used in parsing algorithms, such as recursive descent parsing or LR parsing, to keep track of the current state of the parsing process. They can be used to store grammar rules or intermediate parsing results;
- Function call stack: Stacks are used by programming languages to manage function calls. When a function is called, its parameters and local variables are pushed onto the stack, and when the function returns, its stack frame is popped off the stack;
- Browser history: stacks can be used to implement the back and forward functionality in web browsers. Each visited page is pushed onto the stack, allowing users to navigate backward and forward through their browsing history.