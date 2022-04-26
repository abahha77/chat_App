#include "Chatroom.h"
#include "user.h"
#include "Message.h"
#include <list>
using namespace std;
void Chatroom::list_users(char chat_typ[5])
{
    list<string>users;
    if (chat_typ == "two")
    {
        list<user>myusers[1];
        for (int x = 0; x < 2; x++) {
            user use1;
            myusers[1].push_front(use1);
        }
    }
    else if(chat_typ == "more")
    { 
        int x;
        cout << "please enter the number of users ";
        cin >> x;
        list<user>used;
        for (int i = 0; i < x; i++)
        {
             user use;
             used.push_front(use);
        }
    }
    else
    {
        cout << "please enter a valid option";
    }
       

}
void Chatroom::list_message()
{
    Message mess;
    list<Message>message;
}

