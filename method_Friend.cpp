#include <iostream>
using namespace std;
class Amigo{
    private :
      float dinero;
    public :
      friend class Compadre;
};
class Compadre{
	private :
    public :
        void prestarDinero(Amigo &objeto, float dinero){
        	objeto.dinero = dinero;
    		cout<<"mi amigo me apoya con dinero por la cantidad de $ "<< objeto.dinero <<endl;
        }
};
class Amistad : public Compadre{
    private :
    public :
};
int main(){
    Amigo juan;
    Compadre paco;
    paco.prestarDinero(juan, 42.25);
    
    Amistad amistad;
    amistad.prestarDinero(juan, 199.99);
    return 0;
}
