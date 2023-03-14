#include <iostream>
using namespace std;
class Weapons{
public:
void wPnDes()
{
cout<<"destruction  \n";
}
};
class hotwep:public Weapons{
public:
void hotwepdescp(){
cout<<"Hot weapons uses gun powder \n";
}
};
class bombs: public  hotwep{
public:
void bombsdescp(){
cout<<"USA BOMBED JAPAN \n";
}
};
class nuclearBombs: public bombs{
public:
void nucleardescp(){
cout<<"FATMAN dropped on hiroshima and LITTLEBOY dropped on nagasaki \n";
}
};
int main(){
Weapons w;
hotwep h;
bombs b;
nuclearBombs n;
cout<<"",w.wPnDes();
cout<<"",h.hotwepdescp();
cout<<"",b.bombsdescp();
cout<<"",n.nucleardescp();
}
