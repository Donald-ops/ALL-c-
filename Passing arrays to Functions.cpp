 #include<iostream>
using namespace std;

void printArray(int theArray[], int sizeOfArray);

int main()
{
	int bucky[3] = {20,52,637};
	int chizim[6] = {54,73,67,90,30};
	
	printArray(bucky,3);
	cout<<endl;
	printArray(chizim,6);
}

void printArray(int theArray[], int sizeOfArray){
	
	for(int x = 0;x<sizeOfArray; x++){
		
		cout<< theArray[x]<< endl;
		
	}
}
