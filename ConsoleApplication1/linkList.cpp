#include "stdafx.h"
#include "linkList.h"


linkList::linkList()
{
	
	size = 0;
}

linkList::linkList(ListNode newNode)
{

	myList.push_back(newNode);


linkList::~linkList()
{
	//to-do: delete every node in the list;
}

bool linkList::add(ListNode newNode)
{
	return false;
}

string linkList::deleteNode(int nodeKey)
{
	return "Hola";
}

bool linkList::isEmpty()
{
	return size = 0;
}

string linkList::printList()
{
	return string();
}
