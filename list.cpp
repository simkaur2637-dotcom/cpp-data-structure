list<string> cars = { "volvo", "bmw", "food"," mazda"};
for ( string car:cars){
cout<< car << "\n";
}
//for accessing the elements from front amd nack use 
// .front() amd .back()



// change a list elements 
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Change the value of the first element
cars.front() = "Opel";

// Change the value of the last element
cars.back() = "Toyota";

cout << cars.front(); // Now outputs Opel instead of Volvo
cout << cars.back();  // Now outputs Toyota instead of Mazda

