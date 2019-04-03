#include <iostream>
#include <vector>

#include "./headers/salesItem.h"

using namespace std;

int main()
{
	vector<salesItem *> sales_items;
	while (1)
	{
		cout << "Input ISBN unit_sold num_sold? Y or N: \n";

		string s_cmd;
		cin >> s_cmd;
		if (s_cmd != "Y")
		{
			break;
		}

		cout << "Input ISBN unit_sold num_sold: ";

		string isbn;
		double unit_sold = 0.0;
		unsigned num_sold = 0;
		cin >> isbn >> unit_sold >> num_sold;

		salesItem *new_item = new salesItem(isbn, unit_sold, num_sold);
		sales_items.push_back(new_item);

		// �����ǰItem����������
		cout << "ISBN: " << new_item->ISBN() << "sold: " << new_item->Revenue() << endl;
	}

	// to do

	// �ͷ��ڴ�
	for (size_t i = 0; i < sales_items.size(); i++)
	{
		if (NULL != sales_items[i])
		{
			delete sales_items[i];
			sales_items[i] = NULL;
		}
	}

	sales_items.clear();
	
	return 0;
}