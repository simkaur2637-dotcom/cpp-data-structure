#include<queue>
queue<string> cars;  //or can = to and put the values in {}
cars.push("Volvo");
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");
cars.pop();// deleting the front element 

cout<< cars.front();// accessing the last and first elements 
cout<< cars.back();
