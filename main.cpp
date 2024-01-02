#include "Account.h"
#include<iostream>
#include <queue>

using namespace std;
int main()
{
    Account aya;

    aya.signIn();

    aya.logIn();

    aya.set_new_password();
    aya.logIn();

    aya.addpost();
    cout << endl << endl  ;

    aya.displayPost();
    cout << endl << endl  ;

   aya.editPost();

    aya.addComment();

   aya.displayPost();
 cout << endl  << endl ;
 aya.addComment();
 aya.displayPost();
 cout << endl << endl;



    return 0;
}
