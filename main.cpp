#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"

// using std::cout;
using namespace std;

int main()
{
    TopTenList* languages = new TopTenList();
    Hyperlink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);

    cpp.text = "2";
    cpp.url = "https://www.2.com/";
    languages->set_at(2, cpp);

    cpp.text = "6";
    cpp.url = "https://www.6.com/";
    languages->set_at(6, cpp);

    string test = languages->get(1).text;
    cout << "TEST: "  << test << endl;

    test = languages->get(2).text;
    cout << "TEST 2: "  << test << endl;

    test = languages->get(6).text;
    cout << "TEST 6: "  << test << endl;

    languages->display_forward();
    languages->display_backward();


    return 0;
}
