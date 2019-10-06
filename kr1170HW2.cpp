/* Author:      Kerimjan Rejepov
   Date:        10/5/2019
   Instructor:  Pradhemna Shrestha
   Description: Program helps the client to ship the package using basic 
                interface. User inputs the option where the description
                of their action is explained. After, the program calculates
                the costs using the values inputted by the user.
*/


#include <iostream>
using namespace std;


int main()

{
   int    menuOption;                
   int    originZip;
   int    destinationZip;
   double distance;                                                                    // declaring variables
   double itemWeight;
   double expedited;
   double priority;
   double standard;
   enum   Choice {AIR = 1, TRUCK , COURIER , EXIT};
     
 

                                                                                      // Introduction menu where my name and EUID is included 
   cout << "+----------------------------------------------+" << endl;
   cout << "|      Computer Science and Engineering        |" << endl;
   cout << "|       CSCE 1030 - Computer Science I         |" << endl;
   cout << "|  Kerimjan Rejepov KR1170  kr1170@my.unt.edu  |" << endl;
   cout << "+----------------------------------------------+" << endl;

  
   cout << endl;
   cout << "+******************* MENU *******************+" << endl;
   cout << "| Choose a Service for Package Delivery:     |" << endl;                  // Menu that lets the user to choose the service of their choice
   cout << "|  1. FastShip Air           (Expedited)     |" << endl;
   cout << "|  2. FastShip Frieght Truck (Priority)      |" << endl;
   cout << "|  3. FastShip Local Courier (Standard)      |" << endl;                    
   cout << "|  4. Exit                                   |" << endl;
   cout << "+********************************************+" << endl;
   cout << endl;
  

   cout << " ----> " ; 
   cin  >> menuOption;

   while (menuOption != 4)                                                          // beginnning of the loop. Loop termination is number 4

   {

                                                                                    // Main Menu. Asks for the user input

   switch (menuOption)

   {

//---------------------------------------------------------------------------------------------------------------------------------------------------
      case 1:                                                                       // if number menuOption is 1 this case will be executed
         
        cout << "Enter ZIP code of origin: " ;
        cin  >> originZip;

        while (originZip < 0 || originZip > 99999)                                 // Loop that checks whether the number is less than 0 or more than 99999. If it is, it prints invalid.
      
        {
          
           cout << "Invalid entry. "     << endl;  
           cout << "Enter ZIP code of origin: " ;         
           cin  >> originZip;                                                      // Getting input for originZip. We gonna use it for calculation

           if (originZip > 0 && originZip < 99999)

           {
              break;

           }




        }
 
         


        cout << "Enter ZIP code of destination: " ;
        cin  >> destinationZip;                                                    // Gettin input for destinationZip.


        while (destinationZip < 0 || destinationZip > 99999)
     
        {

           cout << "Invalid entry. " << endl;
           cout << "Enter ZIP code of destination: " ;
           cin  >> destinationZip;

           if (destinationZip > 0 && destinationZip < 99999)

           {

              break;


           }



        }


        cout << "Enter weight of parcel in pounds: " ;
        cin  >> itemWeight;                                                      // Getting input for weight of an item. Has loop for multiple trials.

        while (itemWeight <= 0)

        {


           cout << "Invalid entry. " << endl;
           cout << "Enter weight of parcel in pounds: " ;
           cin  >> itemWeight;

           if (itemWeight > 0)
 
           {

              break;

           }



        }


       if ( originZip > destinationZip )                                                    // Code finds the difference for distance. 

       {

          distance = (originZip - destinationZip) / 1000;                         

       }

       else if ( originZip < destinationZip )

       {

          distance = (destinationZip - originZip) / 1000;

       }

       else

       {                                                                                // All the calculations for the final price. 

          cout << " Something went wrong. " ;

       }


       expedited = distance * itemWeight * 0.295;


 
       cout << "FastShip EXPEDITED Service: $" << expedited << endl ;
 


       cout << endl;
       cout << "+******************* MENU *******************+" << endl;
       cout << "| Choose a Service for Package Delivery:     |" << endl;
       cout << "|  1. FastShip Air           (Expedited)     |" << endl;
       cout << "|  2. FastShip Frieght Truck (Priority)      |" << endl;
       cout << "|  3. FastShip Local Courier (Standard)      |" << endl;
       cout << "|  4. Exit                                   |" << endl;
       cout << "+********************************************+" << endl;
       cout << endl;
  

       cout << " ----> " ; 
       cin  >> menuOption;

       if (menuOption == 4)
       {
          break;
       }
 
//---------------------------------------------------------------------------------------------------------------------------------------------------

     case 2:

       cout << "Enter ZIP code of origin: " ;
       cin  >> originZip;

        while (originZip < 0 || originZip > 99999)
      
        {
          
           cout << "Invalid entry. "     << endl;  
           cout << "Enter ZIP code of origin: " ;         
           cin  >> originZip;                                                      // Getting input for originZip. We gonna use it for calculation

           if (originZip > 0 && originZip < 99999)

           {
              break;

           }




        }
 
         


        cout << "Enter ZIP code of destination: " ;
        cin  >> destinationZip;                                                    // Gettin input for destinationZip.


        while (destinationZip < 0 || destinationZip > 99999)
     
        {

           cout << "Invalid entry. " << endl;
           cout << "Enter ZIP code of destination: " ;
           cin  >> destinationZip;

           if (destinationZip > 0 && destinationZip < 99999)

           {

              break;


           }



        }


        cout << "Enter weight of parcel in pounds: " ;
        cin  >> itemWeight;                                                      // Getting input for weight of an item. Has loop for multiple trials.

        while (itemWeight <= 0)

        {


           cout << "Invalid entry. " << endl;
           cout << "Enter weight of parcel in pounds: " ;
           cin  >> itemWeight;

           if (itemWeight > 0)
 
           {

              break;

           }



        }


       if ( originZip > destinationZip )

       {

          distance = (originZip - destinationZip) / 1000;

       }

       else if ( originZip < destinationZip )

       {

          distance = (destinationZip - originZip) / 1000;

       }

       else

       {                                                                                // All the calculations for the final price. 

          cout << " Something went wrong. " ;

       }


       priority = distance * itemWeight * 0.165;


 
       cout << "FastShip PRIORITY Service: $" << priority << endl ;
 


       cout << endl;
       cout << "+******************* MENU *******************+" << endl;
       cout << "| Choose a Service for Package Delivery:     |" << endl;
       cout << "|  1. FastShip Air           (Expedited)     |" << endl;
       cout << "|  2. FastShip Frieght Truck (Priority)      |" << endl;
       cout << "|  3. FastShip Local Courier (Standard)      |" << endl;
       cout << "|  4. Exit                                   |" << endl;
       cout << "+********************************************+" << endl;
       cout << endl;
  

       cout << " ----> " ; 
       cin  >> menuOption;


       if (menuOption == 4)
       {
          break;
       }

// ----------------------------------------------------------------------------------------------------------------------------------------------

     case 3:


        cout << "Enter ZIP code of origin: " ;
        cin  >> originZip;

        while (originZip < 0 || originZip > 99999)
      
        {
          
           cout << "Invalid entry. "     << endl;  
           cout << "Enter ZIP code of origin: " ;         
           cin  >> originZip;                                                      // Getting input for originZip. We gonna use it for calculation

           if (originZip > 0 && originZip < 99999)

           {
              break;

           }




        }
 
         


        cout << "Enter ZIP code of destination: " ;
        cin  >> destinationZip;                                                    // Gettin input for destinationZip.


        while (destinationZip < 0 || destinationZip > 99999)
     
        {

           cout << "Invalid entry. " << endl;
           cout << "Enter ZIP code of destination: " ;
           cin  >> destinationZip;

           if (destinationZip > 0 && destinationZip < 99999)

           {

              break;


           }



        }


        cout << "Enter weight of parcel in pounds: " ;
        cin  >> itemWeight;                                                      // Getting input for weight of an item. Has loop for multiple trials.

        while (itemWeight <= 0)

        {


           cout << "Invalid entry. " << endl;
           cout << "Enter weight of parcel in pounds: " ;
           cin  >> itemWeight;

           if (itemWeight > 0)
 
           {

              break;

           }



        }


       if ( originZip > destinationZip )

       {

          distance = (originZip - destinationZip) / 1000;

       }

       else if ( originZip < destinationZip )

       {

          distance = (destinationZip - originZip) / 1000;

       }

       else

       {                                                                                // All the calculations for the final price. 

          cout << " Something went wrong. " ;

       }


       standard = distance * itemWeight * 0.085;


 
       cout << "FastShip STANDARD Service: $" << standard << endl ;
 


       cout << endl;
       cout << "+******************* MENU *******************+" << endl;
       cout << "| Choose a Service for Package Delivery:     |" << endl;
       cout << "|  1. FastShip Air           (Expedited)     |" << endl;
       cout << "|  2. FastShip Frieght Truck (Priority)      |" << endl;
       cout << "|  3. FastShip Local Courier (Standard)      |" << endl;
       cout << "|  4. Exit                                   |" << endl;
       cout << "+********************************************+" << endl;
       cout << endl;
  

       cout << " ----> " ; 
       cin  >> menuOption;

       if (menuOption == 4)
       {
          break;
       }




   }

   if (menuOption < 1 || menuOption > 4)

   {

       cout << "Invalid selection " << "(" << menuOption << ")." << "Enter option 1 - 4." << endl;
       cout << endl;
       cout << "+******************* MENU *******************+" << endl;
       cout << "| Choose a Service for Package Delivery:     |" << endl;
       cout << "|  1. FastShip Air           (Expedited)     |" << endl;
       cout << "|  2. FastShip Frieght Truck (Priority)      |" << endl;
       cout << "|  3. FastShip Local Courier (Standard)      |" << endl;
       cout << "|  4. Exit                                   |" << endl;
       cout << "+********************************************+" << endl;
       cout << endl;
  

       cout << " ----> " ; 
       cin  >> menuOption;

   }

   }

      cout << "Thank you for using FastShip Services!" << endl;





return 0;

}
