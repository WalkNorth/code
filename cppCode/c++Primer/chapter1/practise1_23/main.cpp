#include <iostream>
#include <string>
#include <map>

#include <Sales_item.h>

int main() 
{
    Sales_item item;
    std::map<std::string, int> cnt;
    while(std:: cin >> item){
        cnt[item.isbn()]++;
    }

    std::map<std::string, int>::iterator iter = cnt.begin();
    for(; iter != cnt.end(); iter++)
    {
        std::cout << iter->first << "occurs " << iter->second
                  << " times" << std::endl;
    }
        
    return 0;
}