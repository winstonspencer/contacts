/**
 * @file main.cpp
 * @author Winston Spencer
 * @brief The contact application entry point.
 * @version 0.1
 * @date 2021-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

// Import required libraries
#include <string>
#include <iostream>
#include "ContactNode.h"

// Use the standard namespance (std)
using namespace std;

int main()
{

  // Test the Contact Node class.
  ContactNode *node = new ContactNode("Winston Spencer", "555-555-5551");
  node->InsertAfter(new ContactNode("Quanah Spencer", "555-555-5552"));
  node->InsertAfter(new ContactNode("Natasha Spencer", "555-555-5553"));
  node->InsertAfter(new ContactNode("Natalya Spencer", "555-555-5554"));
  node->InsertAfter(new ContactNode("Lois Spencer", "555-555-5555"));

  while(node->GetNext() != nullptr){
    node->PrintContactNode();
    node = node->GetNext();
  }

  cout << "Hello World." << endl;
  return 0;
}