#include "item.h"
using namespace ItemManage;
int main()
{
	ManageInventory Inv;
	string name = "Mark";
	float subtotal;
	cout << setprecision(2) << fixed;
	Inv.addItem("Nike Basketball Shoes", 22, 145.99);
	Inv.addItem("Under Armour T-Shirt", 33 , 29.99);
	Inv.addItem("Brooks running shoes", 11, 111.44);
	Inv.addItem("Asics running shoes", 20, 165.99);
	Inv.addItem("Nike Shorts", 77, 45.77);
	ManageInventory second(Inv);
	cout << "Inventory List"<< endl;
	Inv.Print();
	cout << "Copied List" << endl;
	second.Print();
	Inv.subItem();
	Inv.Print();
	cout << name << " purchased: two pairs of Nike basketball shoes, three Under Armour T-shirts, four Nike shorts, and one pair of Brooks running shoes" << endl;
	cout << "Subtotal: " << Inv.Purchase() << endl;
	subtotal=Inv.Purchase()*1.0825;
	cout << "The total is: "<< subtotal;
}
