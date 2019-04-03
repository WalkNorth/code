#include "../headers/salesItem.h"

salesItem::salesItem(const string & isbn_, double unit_sold, unsigned num_sold)
	: isbn(isbn_), unitSold(unit_sold), numSold(num_sold) // ��ʼ��
{
	// ��ֵ
	revenue = 0.0;

	// ����revenue
	updateRevenue();
}

salesItem::~salesItem()
{
	
}

void salesItem::setISBN(const string & isbn_)
{
	isbn = isbn_;
}

const string & salesItem::ISBN() const
{
	return isbn;
}

double salesItem::Revenue() const
{
	return revenue;
}

void salesItem::updateRevenue()
{
	revenue = unitSold * numSold;
}
