// Iterators are used and iterate through elements of data structure by pointing to them 
// it is called an iterator because iterating is the technical term for looping. 

vector<string> cars = {"volvo" , "bmw", "ford","mazda"};
vector<string> :: iterator it;

for( it = cars.begin() ; it != cars.end(); ++it ){
cout<< *it << "\n";
}
