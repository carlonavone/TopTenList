//Manages a list of top ten hyperlinks
#include<iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using namespace std;
// using std::string;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index - 1] = link;
}
//Get item at certain index
Hyperlink TopTenList::get(int index)
{
  index = index - 1;
  return _list.at(index);
}

void TopTenList::display_forward()
{
  for(int i = 0; i < 10; i++){
    cout << i + 1 << ": Text: " <<  _list.at(i).text << " || URL: "<< _list.at(i).url << endl;
  }
}

void TopTenList::display_backward()
{
  for(int i = 9; i >= 0; i--){
    cout << i + 1 << ": Text: " <<  _list.at(i).text << " || URL: "<< _list.at(i).url << endl;
  }
}
