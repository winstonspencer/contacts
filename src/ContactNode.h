/**
 * @file ContactNode.h
 * @author Winston Spencer
 * @brief The ContactNode class definition
 * @version 0.1
 * @date 2021-02-05
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef CONTACTS_SRC_CONTACT_NODE_H_
#define CONTACTS_SRC_CONTACT_NODE_H_

/**
 * @brief The class InvestmentData holds the investment data provided by the user.
 * 
 */
class ContactNode
{

private:
  bool m_headNode;
  bool m_tailNode;
  char *contactName;
  char *contactPhoneNum;
  ContactNode *m_nextNode;
  ContactNode *m_previousNode;

public:
  void InsertAfter(ContactNode* contactNode);
  char *GetName();
  char *GetPhoneNumber();
  ContactNode *GetNext();
  ContactNode *GetPrevious();
  void PrintContactNode();
};

#endif