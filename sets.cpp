#include<set> // header files 
set<string>cars = {"Volvo","BMW","Mazda","Ford"};
for( string car : cars){
cout<< car << "\n";


//sort the elements in descending order bcoz list is already in ascending order by default
set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
// Print the elements
for (int num : numbers) {
  cout << num << "\n";
}
//for adding elements use .insert()
cars.insert("Tesla");
// for removing elements use .erase() or .clear()
cars.erase("volvo");
// for size use .size()
