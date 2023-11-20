#include <iostream>
#include <fstream>
using namespace std;

struct feedBack
{
    string nickName;
    string comment;
};

int main()
{

    feedBack user;
    bool validasiNickName = false;
    bool validasiComment = false;
    int countFeedBack = 0;
// Input Nick name user
inputNickName:
    cout << "NickName Anda : ";
    getline(cin,user.nickName);
    // Validasi input
    cout << user.nickName.length() << endl;
    if (user.nickName.length() >= 15)
    {
        cout << "Nick name anda melebihi limit" << endl;
        cout << endl;
        goto inputNickName;
    }
    else
    {
        validasiNickName = true;
    }

// Input COMMENT
inputComment:
    cout << "FeedBack Anda : ";
    getline(cin,user.comment);
    // Validasi input comment
    if (user.comment.length() > 1000)
    {
        cout << "Feed back anda melebihi limit : ";
        goto inputComment;
    }
    else

    {
        validasiComment = true;
    }

    ofstream data;
    if (validasiNickName && validasiComment)
    {
        countFeedBack++;
        data.open("dataBaseFeedback", ios::app);

        data << "--------------------------------------------------------" <<endl;
        data << "Nick Name:" << user.nickName <<endl;
        data << "Feed Back: " << user.comment <<endl;
        data << "Feed back ke-" << countFeedBack <<endl;

        data << "--------------------------------------------------------" <<endl;
        data.close();

    }

    return 0;
}