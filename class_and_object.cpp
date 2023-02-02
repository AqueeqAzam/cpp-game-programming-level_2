// Introduction of simple critter program

#include <iostream>
using namespace std;

class Critter{
              public:
              int m_Hunger;
              void Greet();
};
void Critter::Greet(){
              cout<<"Hi I am critter. Mu Hunger level is:"<<m_Hunger<<".\n";
}
int main(){
              Critter crit1;
              Critter crit2;

              crit1.m_Hunger = 9;
              cout<<"Crit 1 hunger level is "<<crit1.m_Hunger <<".\n";

              crit2.m_Hunger = 3;
              cout<<"Crit 2 hunger level is :"<<crit2.m_Hunger <<".\n\n";

              crit1.Greet();
              crit2.Greet();
              
              return 0;
}

// apply constructor for this program
class Critter{
              public:
              int m_Hunger;

              Critter(int hunger = 0);
              void Greet(); 
};
Critter::Critter(int hunger){
              cout<<"A new critter has been born"<<endl;
              m_Hunger = hunger;
}
void Critter::Greet(){
              cout<<"Hi. I am a critter. My hunger level is "<<m_Hunger<<".\n";
}

int main(){
              Critter crit(7);
              crit.Greet();

              return 0;
}

// cpmplite program of introduction of simple critter
class Critter{
       public:
              Critter(int hunger = 0);
              int GetHunger() const;
              void SetHunger(int hunger);
      private:
              int m_Hunger;
};

Critter::Critter(int hunger):
m_Hunger(hunger){
              cout<<"A new critter has been born!"<<endl;
}

int Critter::GetHunger() const{
              return m_Hunger;
}
void Critter::SetHunger(int hunger){
              if(hunger < 0){
                            cout<<"You can't set a critter hunger to a negative number.\n\n";
              }
              else{
                            m_Hunger = hunger;
              }
}

int main(){
              Critter crit(5);
              cout<<"Calling GetHUnger():"<<crit.GetHunger()<<"\n\n";

              cout<<"Calling SetHunger() with -1.\n";
              crit.SetHunger(-1);

              cout<<"Calling SetHunger() with 9.\n";
              crit.SetHunger(9);
              cout<<"Calling GetHunger(): "<<crit.GetHunger()<<"\n\n";

              return 0;
}
