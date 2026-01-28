#include <iostream>
using namespace std;

int main() {
    int height = 61;
    int weight = 130; 
    
    double kg, meters, BMI;
    kg = weight*0.453592; //Wieght conversion  
    meters = height*0.0254; //Height conversion
    BMI = kg/(meters*meters); //BMI calculation
    cout << "The BMI for this person is: " << BMI << endl;
    




}
