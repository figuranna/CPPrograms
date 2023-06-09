#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <string>
#include "rapidxml.hpp"

using namespace std;
using namespace rapidxml;

xml_document<> doc;
xml_node<> * root_node = NULL;


int main(void)
{
	string item_type, item_name;
	
    cout << "\nParsing my shopping list....." << endl;
    cout << endl;
   
    // Reads the list.xml
    ifstream theFile ("list.xml");
    vector<char> buffer((istreambuf_iterator<char>(theFile)), istreambuf_iterator<char>());
    buffer.push_back('\0');
   
    // Parses the buffer
    doc.parse<0>(&buffer[0]);
   
    // Finds out the root node
    root_node = doc.first_node("Cart");
   
    // Iterates over the item nodes and gets the nodes attributes and its values
    for (xml_node<> * item_node = root_node->first_node("Item");item_node; item_node = item_node->next_sibling())
    {
    	int item_id = stoi(item_node->first_attribute("item_id")->value());
		
		char* item_type_char = item_node->first_attribute("item_type")->value();
		item_type = item_type_char;
		
		char* item_name_char = item_node->first_attribute("item_name")->value();
		item_name = item_name_char;
		
    	int price = stoi(item_node->first_attribute("price")->value());
    	
    	
    	cout << "Item ID    = " << item_id << endl;
    	cout << "Item Type  = " << item_type << endl;
    	cout << "Item Name  = " << item_name << endl;
    	cout << "Item Price = " << price << endl;
    	cout << endl;

    }
   
    return 0;
}
