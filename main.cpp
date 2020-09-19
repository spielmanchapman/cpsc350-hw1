#include "hw1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main (int argc, char** argv){
	double sum = 0;
	double mean = 0;
	double variance1 = 0;
	double variance2 = 0;
	double variance3 = 0;
	double variance4 = 0;
	double standev = 0;
	double counter = 0;
//initialize variables for part 1
	
	std::ifstream ifinput("input.txt");
	std::string datainput((std::istreambuf_iterator<char>(ifinput)), (std::istreambuf_iterator<char>()));
//Create variable datainput using the data in the txt file
	
	char checkChar = 'a';
	char checkCharC = 'c';
	char checkCharG = 'g';
	char checkCharT = 't';
	char checkCharCapA = 'A';
	char checkCharCapC = 'C';
	char checkCharCapG = 'G';
	char checkCharCapT = 'T';
	int charCount = 0;
	int charCountC = 0;
	int charCountG = 0;
	int charCountT = 0;
	int countAA = 0;
	int countAC = 0;
	int countAG = 0;
	int countAT = 0;
	int countTA = 0;
	int countTT = 0;
	int countTC = 0;
	int countTG = 0;
	int countCA = 0;
	int countCC = 0;
	int countCG = 0;
	int countCT = 0;
	int countGA = 0;
	int countGC = 0;
	int countGG = 0;
	int countGT = 0;
//initialize the variables for part 2
	
	for (int i = 0; i < datainput.size(); i++){
//check every character (capital and lower case) in datainput
//check for repeating bigram patterns (capital and lower case)
//increment variables for later math
		if(datainput[i] == checkChar){
			++ charCount;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countAA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countAA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countAC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countAC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countAG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countAG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countAT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countAT;
			}
		}
		else if(datainput[i] == checkCharCapA){
			++ charCount;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countAA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countAA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countAC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countAC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countAG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countAG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countAT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countAT;
			}
		}
		if(datainput[i] == checkCharC){
			++ charCountC;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countCA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countCA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countCC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countCC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countCG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countCG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countCT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countCT;
			}
		}
		else if(datainput[i] == checkCharCapC){
			++ charCountC;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countCA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countCA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countCC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countCC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countCG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countCG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countCT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countCT;
			}
		}
		if(datainput[i] == checkCharG){
			++ charCountG;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countGA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countGA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countGC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countGC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countGG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countGG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countGT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countGT;
			}
		}
		else if(datainput[i] == checkCharCapG){
			++ charCountG;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countGA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countGA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countGC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countGC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countGG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countGG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countGT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countGT;
			}
		}
		if(datainput[i] == checkCharT){
			++ charCountT;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countTA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countTA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countTC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countTC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countTG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countTG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countTT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countTT;
			}
		}
		if(datainput[i] == checkCharCapT){
			++ charCountT;
			++ counter;
			if(datainput[i+1] == checkChar){
				++ countTA;
			}
			if(datainput[i+1] == checkCharCapA){
				++ countTA;
			}
			else if(datainput[i+1] == checkCharC){
				++ countTC;
			}
			else if(datainput[i+1] == checkCharCapC){
				++ countTC;
			}
			else if(datainput[i+1] == checkCharG){
				++ countTG;
			}
			else if(datainput[i+1] == checkCharCapG){
				++ countTG;
			}
			else if(datainput[i+1] == checkCharT){
				++ countTT;
			}
			else if(datainput[i+1] == checkCharCapT){
				++ countTT;
			}
		}
	}
	
	ifstream input;
//this should probably be higher in the code, but it also works down here
//open input.txt and check for error
	input.open("input.txt");
	if(input.fail()){
		cout << "Error! The file could not be opened." << endl;
	}
	
	sum += (charCount + charCountC + charCountG + charCountT);
	mean += (sum/counter);
	int count2 = (counter - 1);
	variance1 += (mean*mean) / counter;
	variance2 += ((charCount*charCount) + (charCountC*charCountC) + (charCountG*charCountG) + (charCountT*charCountT));
	variance3 += variance2 - variance1;
	variance4 += variance3 / count2;
	standev += sqrt(variance4);
//calculate the sum/mean/variance/standard deviation
	
//create output file yourname.out and identify the creator
//add the results to the output file
//calculate the probabilities and add to the output file
	ofstream output;
	output.open ("corey.out");
	output << "Corey Spielman 2316074 \n"; 
	output << "CPSC 350 Homework 1 \n";
	output << "The Sum = " << sum << endl; 
	output << "The Mean = " << mean << endl;
	output << "The Variance = " << variance4 << endl; 
	output << "The Standard Deviation = " << standev << endl;
	output << "Num of A's = " << charCount << ", Probability = " << (charCount/sum) << endl;
	output << "Num of C's = " << charCountC << ", Probability = " << (charCountC/sum) << endl;
	output << "Num of G's = " << charCountG << ", Probability = " << (charCountG/sum) << endl;
	output << "Num of T's = " << charCountT << ", Probability = " << (charCountT/sum) << endl;
	output << "AA Probability: " << ((countAA/sum)) << endl;
	output << "AC Probability: " << ((countAC/sum)) << endl;
	output << "AG Probability: " << ((countAG/sum)) << endl;
	output << "AT Probability: " << ((countAT/sum)) << endl;
	output << "CA Probability: " << ((countCA/sum)) << endl;
	output << "CC Probability: " << ((countCC/sum)) << endl;
	output << "CG Probability: " << ((countCG/sum)) << endl;
	output << "CT Probability: " << ((countCT/sum)) << endl;
	output << "GA Probability: " << ((countGA/sum)) << endl;
	output << "GC Probability: " << ((countGC/sum)) << endl;
	output << "GG Probability: " << ((countGG/sum)) << endl;
	output << "GT Probability: " << ((countGT/sum)) << endl;
	output << "TA Probability: " << ((countTA/sum)) << endl;
	output << "TC Probability: " << ((countTC/sum)) << endl;
	output << "TG Probability: " << ((countTG/sum)) << endl;
	output << "TT Probability: " << ((countTT/sum)) << endl;
	cout << "Successfuly compiled!\n" << endl;
	output.close();
	return 0;
	//close file and end the program
}
