#include<iostream>
using namespace std;
//   fuctions to add , subtract ,multiply ,divide
float Addition(float number1,float number2){
	return number1+number2;
}


float Subtraction(float number1,float number2){
	return number1-number2;
}


float Multiplication(float number1,float number2){
	return number1*number2;
	
}


float Division(float number1,float number2){
	return number1/number2;
}

int main(){
	
	cout<<"\n\t\t\tSIMPLE CALCULATOR "<<endl;
	cout<<"  \t\t\t-----------------\n"<<endl;
	
	float num1,num2;
    int choice=1;
    cout<<"Enter Two Numbers :"<<endl;

    
    cout<<"Enter :";
    cin>>num1;
    cout<<"Enter :";
	cin>>num2;
	
	do{
	cout<<"\n\t\t\tArithmetic operations  "<<endl;	
	cout<<"  \t\t\t---------------------\n"<<endl;
	cout<<"Press 1 for Addition (+) "<<endl;
	cout<<"Press 2 for Subtraction (-)"<<endl;
	cout<<"Press 3 for Multiplication (X)"<<endl;
	cout<<"Press 4 for Division (/)"<<endl;
	cout<<"Press 5 to enter New Numbers"<<endl;
	cout<<"Press 0 to Exit"<<endl;
	
	cin>>choice;

	//menu driven program according to users choice
	switch(choice){


		case 0:
			exit(0);

		
		case 1:
			cout<<"\n"<<num1 <<" + "<<num2 <<" = "<<Addition(num1,num2)<<"\n\n";
			break;

			
		case 2:
			cout<<"\n"<<num1 <<" - "<<num2 <<" = "<<Subtraction(num1,num2)<<"\n\n";
			break;

			
		case 3:
			cout<<"\n"<<num1 <<" X "<<num2 <<" = "<<Multiplication(num1,num2)<<"\n\n";
			break;

			
		case 4:
			cout<<"\n"<<num1 <<" / "<<num2 <<" = "<<Division(num1,num2)<<"\n\n";
			break;

        
        case 5:
			cout<<"Enter Two New Numbers : "<<endl;
            cout<<"Enter :";
            cin>>num1;
            cout<<"Enter :";
	        cin>>num2;
            cout<<"\n\n";
			break;
	}

	}while(choice!=0);
	
	
    return 0;	
}
