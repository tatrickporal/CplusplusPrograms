#include <iostream>
#include <string>
#include <sstream>
#include <bitset>  

using namespace std;
typedef std::bitset<8> IntBits;
bitset<8> prevBit = 00000000;

int getInput(){
	string userNum;
	int input = 0;

	cout << "Enter an 8bit integer: ";
	getline (cin,userNum);
	stringstream(userNum) >> input;

	if(input == 'y'){
		return 0;
	}
	if(input >=0){
		if(input <= 255){
			
			cout << "Correct Input,  " << input << endl;

		 	return input;

		} else{
			cout << "ERROR: INVALID INPUT, RUN AGAIN AND INPUT 8BIT NUMBER (0-255) \n";
	
		}
	} 
	return 0;
}

void bitCheck(){	
	int input = getInput();
	if(input == 0){
		cout << "ERROR: INVALID INPUT, RUN AGAIN AND INPUT 8BIT NUMBER (0-255) \n";
		return;
	}
    std::cout << "inputted 8bit number: " << IntBits(input) << " in HEX: " << hex << input << '\n';
    std::cout << "compared to " << prevBit  << " in HEX: " << hex << input << '\n';
    bitset<8> numberInput= IntBits(input);
        std::cout << "next prevBit: " << IntBits(input) << '\n';

    int bitCheck0 = prevBit[0];
    int bitCheck2 = prevBit[2];
    int bitCheck4 = prevBit[4];
    int bitCheck6 = prevBit[6];
    
    if(bitCheck0 == numberInput[0]){
    	std::cout << "2^0 bit matches " << '\n';
    } else{
    	std::cout << "2^0 bit doesn't match" << '\n';
    }
    if(bitCheck2 == numberInput[2]){
    	std::cout << "2^2 bit matches " << '\n';
    } else {
    	std::cout << "2^2 bit doesn't match" << '\n';
    }
    if(bitCheck4 == numberInput[4]){
    	std::cout << "2^4 bit matches " << '\n';
    } else {
    	std::cout << "2^4 bit doesn't match" << '\n';
    }
    if(bitCheck6 == numberInput[6]){
    	std::cout << "2^6 bit matches " << '\n';
    } else {
    	std::cout << "2^6 bit doesn't match" << '\n';
    }
    prevBit = IntBits(input);
    std::cout << '\n';
    std::cout << '\n';
    bitCheck();
}


int main(int argc, char *argv[])
{
	std:: cout << "This program compares bits in the even positions "
	bitCheck();
	return 0;
}