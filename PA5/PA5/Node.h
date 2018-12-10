/*Programmer: Beth Hanson
Class: CptS 122, Fall 2018
Programming Assignment: Project 5
File: Node.h
Date: 10/15/18
Description: */

#pragma once
#include "Data.h"
#include <iostream>
#include <fstream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::string;

class QueueNode {
public:
	QueueNode();
	~QueueNode();
	QueueNode(Data &newData);
	Data *getData();
	QueueNode *getNext();
	void setData(Data &newData);
	void setNext(QueueNode *newNext);

private:
	Data *pData;
	QueueNode *pNext;
};