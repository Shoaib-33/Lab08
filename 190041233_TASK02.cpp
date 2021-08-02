#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



class Seat
{

 public:
      string conditions;///SEAT
       string present;///SEAT

     void access_seat() {
     cout<<"Seat information"<<endl;
     cout<<"Enter the information of Confortability"<<endl;
     cin>>conditions;


         cout<<"Is seat warmer present?"<<endl;
         cin>>present;
     }

void mutator_Seat() {
        cout<<"The condition of seat is:";
        cout<<conditions<<endl;
        cout<<"The seat is:"<<present<<endl;
        cout<<endl;
}



};

class Wheel
{
   private:
    int circum;///Wheel
    public:

  void access_wheel() {
      cout<<"Wheel  information"<<endl;
      cout<<"Enter the circumference of Wheel"<<endl;
      cin>>circum;
  }

  void mutator_wheel()
  {
      cout<<circum;

  }


};
class Engine
{
private:
     int Max_Fuel_Consumption;///ENGINE
       int Production_Rate;
       int Avg_RPM;
public:

    void access_engine()
    {  cout<<"Engine Information"<<endl;
        cout<<"Enter max fuel fuel consumption rate"<<endl;
        cin>>Max_Fuel_Consumption;
        cout<<"Enter the Production rate"<<endl;
        cin>>Production_Rate;
        cout<<"Enter the avg Rpm"<<endl;
        cin>>Avg_RPM;
    }
    void mutator_engine()
    {
        cout<<"Max fuel Consumption rate is:"<<Max_Fuel_Consumption<<endl;
        cout<<"Production rate is:"<<Production_Rate<<endl;
        cout<<"Avg Rpm is:"<<Avg_RPM<<endl;
         cout<<endl;
    }

};

class Door
{
private:
           string mode;///DOOR
public:

    void access_door()
    {  cout<<"Door information"<<endl;
      cout<<"Enter the opening mode of door"<<endl;
      cin>>mode;
    }
    void mutator_door()
    {
        cout<<"The opening mode of door is:"<<mode<<endl;
         cout<<endl;
    }
};





class car
{

private:
     int Max_Fuel;
       int Max_Acceleration;

   public:

  Seat s;
  Wheel w;
  Engine e;
  Door d;
    void getdata()
   {
       cout<<"Enter max fuel capacity"<<endl;
       cin>>Max_Fuel;
       cout<<"Enter max acceleration"<<endl;
       cin>>Max_Acceleration;
       s.access_seat();
       w.access_wheel();
       e.access_engine();
       d.access_door();



   }


    void Display()
    {

   cout<<"Max fuel capacity is:"<<Max_Fuel<<endl;
   cout<<"Max acceleration is:"<<Max_Acceleration<<endl;
    s.mutator_Seat();
    w.mutator_wheel();
    e.mutator_engine();
    d.mutator_door();


 }

};




int main()
{   car z;
   z.getdata();

    z.Display();



}

