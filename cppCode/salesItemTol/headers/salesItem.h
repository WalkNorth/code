#pragma once
#include <string>
using namespace std;

class salesItem
{
public:
	salesItem(const string &isbn_, double unit_sold, unsigned num_sold); // ���캯��

	~salesItem();                                                        // ��������

	void setISBN(const string &isbn_);                                 	// ����ISBN
	
	const string & ISBN() const;                                    	// ��ȡISBN

	double Revenue() const;                                             // ��ȡ��������
private:
	void updateRevenue();                                               // ������������

private:
	string   isbn;                                                     // ISBN
	double   unitSold;                                                 // ���۵���
	unsigned numSold;                                                  // ���۲���
	double   revenue;                                                  // ��������
};
