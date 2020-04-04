#include <iostream>
#include <vector>
#include "Hyperlink.h"
#include "TopTenList.h"
#include "Gallery.h"

// using std::cout;
using namespace std;

int main()
{
    TopTenList* languages = new TopTenList();
    Gallery* emoticons = new Gallery();
    Hyperlink cpp;

    cpp.text = "C++";
    cpp.url = "https://www.cplusplus.com/";
    languages->set_at(1, cpp);
    cpp.text = "Python";
    cpp.url = "https://www.python.org/";
    languages->set_at(2, cpp);
    cpp.text = "JavaScript";
    cpp.url = "https://www.javascript.com/";
    languages->set_at(3, cpp);
    cpp.text = "Java";
    cpp.url = "https://www.java.com/";
    languages->set_at(4, cpp);
    cpp.text = "C";
    cpp.url = "https://en.cppreference.com/w/c/language";
    languages->set_at(5, cpp);
    cpp.text = "R";
    cpp.url = "https://www.r-project.org/";
    languages->set_at(6, cpp);
    cpp.text = "Ruby";
    cpp.url = "https://www.ruby-lang.org/en/";
    languages->set_at(7, cpp);
    cpp.text = "Swift";
    cpp.url = "https://developer.apple.com/swift/";
    languages->set_at(8, cpp);
    cpp.text = "Go";
    cpp.url = "https://golang.org/";
    languages->set_at(9, cpp);
    cpp.text = "Dart";
    cpp.url = "https://dart.dev/";
    languages->set_at(10, cpp);

    emoticons->add(":)","Smile");
    emoticons->add(":(","Frown");
    emoticons->add(":()","Monkey");

    emoticons->display_forward();
    emoticons->display_backward();

    languages->display_forward();
    languages->display_backward();

    // cpp.text = "2";
    // cpp.url = "https://www.2.com/";
    // languages->set_at(2, cpp);
    //
    // cpp.text = "6";
    // cpp.url = "https://www.6.com/";
    // languages->set_at(6, cpp);
    //
    // string test = languages->get(1).text;
    // cout << "TEST: "  << test << endl;
    //
    // test = languages->get(2).text;
    // cout << "TEST 2: "  << test << endl;
    //
    // test = languages->get(6).text;
    // cout << "TEST 6: "  << test << endl;
    //
    // languages->display_forward();
    // languages->display_backward();


    return 0;
}
