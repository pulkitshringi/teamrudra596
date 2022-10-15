#include <iostream>
using namespace std;
class Hero{
    public:
string name;
int health;
char level;
Hero(string name,int health,char level){
    this->name=name;
    this->health=health;
    this->level=level;
}
Hero(class Hero *lmao){
  this->health=lmao->health;
}
void print(){
    cout << "Name : " << name << endl;
    cout << "Health : " << health << endl;
    cout << "Level : " << level << endl;
}
};
int main(){
    Hero h1("Pulkit Shringi",99,'A');
    Hero h2(h1);
    h2.print();
    return 0;
}