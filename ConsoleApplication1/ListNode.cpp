#include "stdafx.h"
#include "ListNode.h"


ListNode::ListNode()
{
	value = 0;
	name = " ";
}

ListNode::ListNode(string newName, int newValue)
{

	value = newValue;
	name = newName;
}


ListNode::~ListNode()
{
}

string ListNode::getName()
{
	return name;
}

int ListNode::getValue()
{
	return value;
}

string ListNode::print()
{
	ostringstream outdata;


	return outdata.str();
}
