//Exception handling lets you catch and handle errors during runtime - so your program doesn't crash.
try{ 
int age = 15;
if(age>= 18){
cout <<"access granted - you are old enough.";
} else {
throw(age);
}
}
  catch( int mynum){
cout << "access denied - you must be at least 18 years old. \n";
cout<< "age is :" << myNum;
  }

// if u do not know the type in the try block , you can use the "three dots" syntax (..) inside the catch block , which will handle any type of exceptiom 
try {
  int age = 15;
  if (age >= 18) {
    cout << "Access granted - you are old enough.";
  } else {
    throw 505;
  }
}
catch (...) {
  cout << "Access denied - You must be at least 18 years old.\n";
}
