#pragma once

#include "ListNode.h"

#define MAX_SIZE   25

struct node {
	int key;
	string data;

	node *next;
	node *prev;
};

//typedef vector<node> List;

class linkList
{
public:
	linkList();
	linkList(ListNode newNode);
	~linkList();

	bool add(ListNode newNode);
	string deleteNode(int nodeKey);

	bool isEmpty();
	string printList();

private:

	vector<ListNode> myList;
	int size;
};

