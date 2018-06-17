#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class ListNode
{
public:
	ListNode();

	ListNode(string newName, int newValue);

	~ListNode();

	string getName();

	int getValue();

	string print();

private:
	string name;
	int value;

};

