#include "LinkedList.h"

int main()
{

	LinkedList list, list2;

	//Add elements
	list.push(1111);
	list.push(4444);
	list.push(1110);
	list.push(4440);
	list.push(1100);
	list.push(4400);
	list.push(1000);
	list.push(4000);
	list.push(3333);
	
	list2 = list;
	
	//print list
	cout <<"elements list: " << list << endl;
	cout <<"elements list2: "<< list2 << endl;

	cout << list[2] << endl;
	cout << list[3] << endl;

	//length
	cout << "length of list: " << list.size() << endl;


	if (list.search_element(4440)) {
		cout << "4440 is found"<< endl;
		if (list.search_element(4445))
			[]() {}();
		else
			cout << "4445 is not found"<< endl;
	}
	//test pop
	list.pop();
	list.pop();
	list.pop();
	list.pop();

	cout << "list after pop: " << list << endl;

	//insert by position
	list.insert(7, 1);
	list.insert(5, 2);
	list.insert(7, 3);

	cout << "list after insert by position: " << list << endl;

	//test count
	cout << "count of elements equal: " << list.count(7)<<endl;


	////////////////////////////////////////////////////////////////
	////////////////////////list2///////////////////////////////////
	////////////////////////////////////////////////////////////////

	cout << "list2 "<< endl;

	cout << "elements: " << list << endl;

	//cout << list2[2] << endl;
	//cout << list2[3] << endl;

	cout << "length of list: " << list.size() << endl;

	if (list2.search_element(4440)) {
		cout << "4440 is found" << endl;
		if (list2.search_element(4445))
			[]() {}();
		else
			cout << "4445 is not found" << endl;
	}
	//test pop
	list.pop();
	list.pop();
	list.pop();
	list.pop();

	cout << "list after pop: " << list << endl;

	//insert by position
	list.insert(8, 1);
	list.insert(6, 2);
	list.insert(9, 3);

	cout << "list after insert by position: " << list << endl;

	//test count
	cout << "count of elements equal: " << list.count(6) << endl;
}

//complete:
//size
//search 
//add (in head)
//pop
//add (position)
//count
//rename equal
//implement in separate files

//todo:

