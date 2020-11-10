#ifndef ITEM_H_
#define ITEM_H_

#include <iostream>
#include <iomanip>

using namespace std;
namespace ItemManage
{
struct Item
{
string name;
int quantity;
float cost;
};
const int MAX_SIZE = 50;
class ManageInventory
{
private:
int size {MAX_SIZE};
int count;
Item** p_pInventoryItems;
public:
ManageInventory() : count{0}, p_pInventoryItems {new Item*[size]} { }
ManageInventory(int size) : size{size}, count{0}, p_pInventoryItems {new Item*[size]} { }
ManageInventory(ManageInventory&);
~ManageInventory();
void addItem(string name, int quantity, float cost);
void Print();
void subItem();
float Purchase();


Item** getItems(){return p_pInventoryItems;}
};

}
#endif
