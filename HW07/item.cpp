#include "item.h"
using namespace ItemManage;
void ManageInventory::addItem(string name, int quantity, float cost)
{
 Item *newitem;
 newitem = new Item;

 newitem -> name = name;
 newitem -> cost = cost;
 newitem -> quantity = quantity;
 p_pInventoryItems[count] = newitem;
 count++;

}
ManageInventory::~ManageInventory(){}
void ManageInventory::Print()
{
	cout << endl;
	cout << left << setw(24) << "Name of Equipment" << setw(11) << "Quantity" << "Cost" << endl;
	for (int x=0;x < count; x++)
	{
	cout << setw(24) << p_pInventoryItems[x]->name << setw(11) << p_pInventoryItems[x]->quantity<< "$" << p_pInventoryItems[x]->cost<< endl;
	}
	cout << endl;
}

void ManageInventory::subItem()
{
 p_pInventoryItems[0]->quantity=20;
 p_pInventoryItems[1]->quantity=30;
 p_pInventoryItems[2]->quantity=10;
 p_pInventoryItems[4]->quantity=73;
}

float ManageInventory::Purchase()
{
	float total;
	 total= (p_pInventoryItems[0]->cost*2)+(p_pInventoryItems[1]->cost*3)+(p_pInventoryItems[4]->cost*4)+(p_pInventoryItems[2]->cost);
return total;
}

ManageInventory::ManageInventory(ManageInventory& src)
{
	count = src.count;
	p_pInventoryItems = new Item*[count];
	for(int x=0; x<count; x++)
	{
		p_pInventoryItems[x] = new Item;
		p_pInventoryItems[x] -> name = src.p_pInventoryItems[x]->name;
		p_pInventoryItems[x] -> quantity = src.p_pInventoryItems[x]->quantity;
		p_pInventoryItems[x] -> cost = src.p_pInventoryItems[x]->cost;
	}
}
