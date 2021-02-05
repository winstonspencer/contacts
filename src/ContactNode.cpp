/**
 * @file ContactNode.cpp
 * @author Winston Spencer
 * @brief The ContactNode class implementation
 * @version 0.1
 * @date 2021-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

// Import required libraries
#include <iostream>
#include "ContactNode.h"

using namespace std;

ContactNode::ContactNode(char *t_contactName, char *t_contactPhone)
{
  this->m_headNode = true;
  this->m_tailNode = true;
  this->m_contactName = t_contactName;
  this->m_contactPhone = t_contactPhone;
}

ContactNode::~ContactNode()
{
  this->m_headNode = false;
  this->m_tailNode = false;
  delete this->m_contactName;
  delete this->m_contactPhone;
  delete this->m_nextNode;
}

void ContactNode::InsertAfter(ContactNode *contactNode)
{
  ContactNode *tempNode = nullptr;

  if (this != contactNode)
  {
    this->m_tailNode = false;

    tempNode = this->m_nextNode;
    this->m_nextNode = contactNode;
    contactNode->m_nextNode = tempNode;
    contactNode->m_headNode = false;
  }
}

char *ContactNode::GetName()
{
  return this->m_contactName;
}
char *ContactNode::GetPhoneNumber()
{
  return this->m_contactPhone;
}

ContactNode *ContactNode::GetNext()
{
  return this->m_nextNode;
}

void ContactNode::PrintContactNode()
{
  cout << "Name: " << this->m_contactName << endl;
  cout << "Phone number: " << this->m_contactPhone << endl;
}