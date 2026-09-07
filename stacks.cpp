#include<stack>
stack<string>cars;
// adding elements
cars.push("volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");
//accessing the element 
cout<< cars.top();
//changing the top element
cars.top() ="Tesla";
// removing elements
cars.pop(); // remove the top element 
cout<< cars.size();   // get the size of the stack

//A stack stores multiple elements in a specific order, called LIFO.

//LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

//Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.

//To use a stack, you have to include the <stack> header file:



