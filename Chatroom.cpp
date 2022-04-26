#include "Chatroom.h"
#include "user.h"
#include "Message.h"
#include <list>
using namespace std;
void Chatroom::list_users(char chat_typ[10])
{
    list<string>users;
    if (chat_typ == "two")
    {
        for (int x = 0; x < 2; x++) {
            user<string>use;
        }
    }
    else if(chat_typ == "more")
    { 
        int x;
        cout << "please enter the number of users ";
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            user<string>use;
            users = {"use"};
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
