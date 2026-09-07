// created a vector
vector<string> cars = { "volvo", " BMW","ford", "mazda"};
for(string car : cars){
  cout<< cars[0];//access a vector 
  cout<< cars.at(1);//access a vector 
  cars.push_back("tesla");  // add vector elements 
  cars.pop_back(); // deleting a vector 
  cout << cars.size(); // to find size of the vector 
  cout<< cars.empty(); //chcek if vector is empty 


  for( int i=0; i<cars.size(); i++ ){ // loop through a vector 
    cout << cars[i]
      }


  cars[2] = "opel"; // change the value of the first element 
  cout<< cars[2];
   cout<< car<< "\n";
}

