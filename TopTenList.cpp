//Manages a list of top ten hyperlinks
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;

TopTenList::TopTenList()
{
  _list.resize(10)
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list[index - 1] = link;
}
//Get item at certain index
Hyperlink TopTenList::get(int index)
{
  int index = index - 1;
  return _list.at(index);
}
