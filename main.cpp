#include <iostream>
using std::cout;
using std::cin;


//while and for loops.
//steps: initalize, condition, counter(step)

int main() {


//*********************************************************************************

  // this is example 1
  
/*int counter {0};//variable that changes the value; initialization
  while(counter <10) { // condition
    cout <<"The value is now " << counter << ". \n";
   counter++;
  }*/


// ***********************************************************************************

// this is example 2. For loops.

  // int counter {0};
  // for(counter=0;counter<=10;counter++){
  //   cout <<"The value is now " << counter << ". \n";
  // }

//*****************************************************************
// int n{0};
// int counter{0};
  
// cout<<"Hi, please enter a value: ";
// cin >> n;

//   while(counter <= n) {
//     cout << "The value is now " << counter << ".\n";
//     counter++;
//   }
  

  // *************************************** problem 3

  // int counter{1};
  // int input{0};
  

  // cout << "Please input a number: ";
  // cin >> input; 

  // while(counter <11) {
  //   cout << input << "*" << counter << "=" << input*counter << "\n";
  //   counter++;
  // }


  // ****************************************************************

// int counter {0};

// while (counter <=20) {
// counter = counter +2;
// cout << counter << "\n";
  
// }
//*****************************************


  int counter {1};
  std::string input;

cout << "Do you want to print even or odd? ";
cin >> input;
  
  while (counter <=20) {

if (input == "odd"){
  counter++;
  cout << counter +1 << "\n";
} else if (input == "even") {
  counter = counter+2;
  cout << counter +2 << "\n";
}

 
  }



  
}