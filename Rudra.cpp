//Make a TUI meeting schedular for the team. 
#include <iostream> 
#include <string>
using namespace std;
class Meet{
    public:
string membersname;
string teamdomain;
int age;
int tagnotifications;
bool alreadyinmeet;
Meet(string membersname,string teamdomain,int age){
    this->membersname=membersname;
    this->teamdomain=teamdomain;
    this->age=age;
    this->tagnotifications=0;
    this->alreadyinmeet=0;
}
void tag_members(){
    if(this->alreadyinmeet==0){
    tagnotifications++;
    cout << this->membersname << " has been tagged." << endl;
    this->alreadyinmeet=1;
    }
else
cout << membersname << " already tagged in another meeting." << endl;
}
};
int main(){ 
    Meet user1("Pulkit Shringi","Developer",19);
    Meet user2("Bryan Abraham","WebDeveloper",19);
    Meet user3("Parth Agarwal","Manager",20);
      int choice;
      cout << "Enter your choice." << endl;
      cout << "Choice 1 : Tag members for the meeting. "<< endl;
      cin >> choice;
      if(choice==1){
          cout << "Mention userid to tag : ";
          int userid;
          cin >> userid;
          if(userid==1)
           user1.tag_members();
           if(userid==2)
           user2.tag_members();
           if(userid==3)
           user3.tag_members();
           cout << "Would you like to tag someone else? Y(1) N(0)" << endl;
           int count;
           cin >> count;
           if(count==1){
               cout << "Mention userid to tag : ";
               cin >> userid;
                if(userid==1)
           user1.tag_members();
           if(userid==2)
           user2.tag_members();
           if(userid==3)
           user3.tag_members();
           }
           else 
           cout << "Okay." << endl;
           }

      return 0;
}