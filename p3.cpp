#include <iostream>
#include <string>

    class Electronic {
        public:
        int power;
        std::string type;
        
        Electronic(){
            power = 120;
            type = "Massager";
        }
        
        Electronic(int power,std::string type){
            this->power = 120;
            this->type = "Massager";
        }
        void turnOn() {
        std::cout << "Turning on the " << type << "." << std::endl;
        }
        void turnOff() {
        std::cout << "Turning off the " << type << "." << std::endl;
        }
        
    };


    
    class Furniture{
        public:
        std:: string name;
        std:: string material;

        Furniture (std::string material, std::string name){
            
        this->material = "Leather";
        this->name = name;
        }
        void assemble() {
        std::cout << "Assembling " << name << "." << std::endl;
            
        }
        void disassemble() {
        std::cout << "Disassembling " << name << "." << std::endl;
            
        }
            
    };
        
        
        class SmartChair : public Electronic, public Furniture {
            public:
            SmartChair(std::string name, std::string material, std::string type, int power):
            Furniture(material,name), Electronic(power, type){}
        
        void showFeatures() {
        std::cout << "SmartChair: " << name << std::endl;
        std::cout << "Material: " << material << std::endl;
        std::cout << "Type: " << type << std::endl;
        std::cout << "Power: " << power << "W" << std::endl;
        }
            
    };
    
    int main() {
    SmartChair myChair("Ultimate Relax", "Leather", "Massager", 120);

    myChair.assemble();
    myChair.disassemble();
    myChair.turnOn();
    myChair.turnOff();
    myChair.showFeatures();

    return 0;
}
