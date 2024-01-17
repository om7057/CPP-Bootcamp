#include<iostream>
using namespace std;

class Receiver{
    public:
    void receive_message( const string & message )
    {
        cout << "This is a message : " << message ;
    }

};

class Sender{
    public:
    void send_message( Receiver &receiver , const string& message)
    {
        receiver.receive_message( message ) ;
    }
};


int main(){

    Sender sender ;
    Receiver receiver;

    sender.send_message(receiver , "Hi I am in CPP Bootcamp") ;


return 0;
}