
//
//  sortList.cpp
//  Sort List
//
//  write a program that uses dynamics arrays
//a. create a list of items
//b. sort the list into a new array, eliminate duplicates
/* test data;
 cat
 giraffe
 gorilla
 dog
 lion
 tiger
 
 */
//  Created by Lydie Gemima Wembalonge on 9/24/16.
//  Copyright © 2016 Lydie Gemima Wembalonge. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

void sort( string myArray[], int size)
{
    string temp;
    
    // alphabetical sort for each element
    for ( int index = 0; index < size ; index ++)
    {
        temp = myArray[index]; // to stored element tenporary
        
        // loop through all the element others after the current one
        for ( int i = index + 1; i < size; i++)
        {
            if (temp > myArray[i])
            {
                 myArray[index] = myArray[i];
                 myArray[i] = temp;
                temp = myArray[index];
            }
            
        }
    }
} // end of function

// main function
int main() {
    
    // declare variable
    string *myArray = nullptr;  // dynamically allocate an array
    string items;
    int numItems;
    
    // get the number of items
    cout << " how many items do you want to  enter? \n"
    << " number of items :";
    cin >> numItems;
    cout << "\n\n";
    
    // dynamically aloocate an array large enough to hold the items
    
    myArray = new string [numItems];
    cout << " Enter your item.\n";
    for (int i = 0; i < numItems; i++)
    {
        cout << " item " << (i + 1) << ": ";
        cin >> myArray[i]; // input the items
    } cout << endl << endl;
    
    // sort the size in the array, calling the sort() function
    sort(myArray, numItems);
    
    // make a duplicate until "\0" is reached
    
    for (int i = 0; i < numItems; i++)
    {
        int items = i;
        for (int j = items + 1; j < numItems; j++)
        {
    if (myArray[items] == myArray[j])
        myArray[j] = "\0";
            
        }
    }
    
    // Display the result without showing the "\0"
    cout << " The complete sorted list: \n";
    for (int k = 0; k < numItems; k++){
    if (myArray[k] != "\0")
        cout << myArray[k] << endl;
    }
    
    delete [] myArray ;
    myArray  = nullptr;
    
    return 0;
} // end of main


