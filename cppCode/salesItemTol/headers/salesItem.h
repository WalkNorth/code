#pragma once
#include <string>
using namespace std;

class salesItem
{
public:
	salesItem(const string &isbn_, double unit_sold, unsigned num_sold); // 构造函数

	~salesItem();                                                        // 析构函数

	void setISBN(const string &isbn_);                                 	// 设置ISBN
	
	const string & ISBN() const;                                    	// 获取ISBN

	double Revenue() const;                                             // 获取销售收入
private:
	void updateRevenue();                                               // 更新销售收入

private:
	string   isbn;                                                     // ISBN
	double   unitSold;                                                 // 销售单价
	unsigned numSold;                                                  // 销售册数
	double   revenue;                                                  // 销售收入
};
