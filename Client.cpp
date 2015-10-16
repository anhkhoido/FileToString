#include <iostream>
#include <fstream>
#include <string>

int main() {

          int order = 0;

          //========================//
          // The name of the file.  //
          //========================//
          char fileName[] = "text.txt";
          
          //======================================//
          // The string where the file is copied. //
          //======================================//
          std::string finalResult;
          
          std::ifstream file(fileName);
          
          if (file) { // Check if the file exists, then open it.
                  
                  //========================================//
                  // Copy the text file into string named   //
                  // finalREsult.                           //
                  //========================================//
                  getline(file, finalResult, '\n');
                  
                  //====================//
                  // Close to the file. //
                  //====================//
                  file.close();
                  
                  //====================================//
                  // Display the content of std::string //
                  // named finalResult.                 //
                  //====================================//
                  std::cout << "The content of finalResult is:" << std::endl;
                  std::cout << finalResult << std::endl;
                  
          } else { // Worst case scenario: the file does not exist.
                  
                  std::cout << "The file does not exist." << std::endl;
                  
                  //=======================================//
                  // Re-assign a new value to the integer  //
                  // variable returned by the program.     //
                  //=======================================//
                  order = 1;
                  
          } // End of the else statement.
          
            
          //===============//
          // Exit order.   //
          //===============//
          return order;

} // End of the main function.
