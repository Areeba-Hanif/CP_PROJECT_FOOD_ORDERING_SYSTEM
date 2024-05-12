//                                  PROJECT : FOOD ORDERING SYSTEM
//                                  SUBMITTED BY : AREEBA HANIF
//                                  SUBMITTED TO Ms RIMSHA JAVED   

#include<iostream>
#include<fstream>
using namespace std;

//using p is for pay,t is for total,pr is for price,q is for quantity and s is for sum of all the totals

	int bill(int bill){
		cout<<endl;
        return bill;
        
	
				}



int main(){
	
	
int menu,price,quantity,total,pay,change, bill_amount=0;

	
char arr[100];
cout<<"Enter your name :"<<endl;
cin.getline(arr,100);
ofstream thisfile("food.text",ios::out|ios::app);
thisfile<<arr<<endl;
thisfile.close();
cout<<"Hi "<<arr<<endl;
	
	
char arr1[100];
cout<<"Enter your Address where you want to place your Order"<<endl;
cin.getline(arr1,100);
fstream myfile("food.text",ios::in|ios::out|ios::app);
myfile<<arr1<<endl;
myfile.close();
cout<<" Welcome in our Restaurant .If you like to eat our delicious food then see the menu below and order "<<endl;
cout<<" your desire food :)"<<endl<<endl<<endl;


		
	
	//more for more choices
	char more;
	
	
	
	
	//using do while loop for first to display the menu 
	do{
	string menu[]={"Cheese Pizza","Zinger Burger","Broast","Chicken Sandwitches","Biryani","French fries","Coffe Walnut Cake","Coldrink","Zingratha","Cheese Burger"};		
	cout<<"======================================================================================================================"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tGarden of Eats"<<endl;
	cout<<"\t\t\t\t\t\t     Menu "<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"======================================================================================================================"<<endl;
		
		cout<<"\t\t\t\t\t1.  Cheese Pizza .......... Rs: 2000"<<endl;
		cout<<"\t\t\t\t\t2.  Zinger Burger ......... Rs: 2000 "<<endl;
		cout<<"\t\t\t\t\t3.  Broast ................ Rs: 3000"<<endl;
		cout<<"\t\t\t\t\t4.  Chicken Sandwitches.... Rs: 500"<<endl;
		cout<<"\t\t\t\t\t5.  Biryani ............... Rs: 2000"<<endl;
		cout<<"\t\t\t\t\t6.  French fries .......... Rs: 500"<<endl;
		cout<<"\t\t\t\t\t7.  Coffe Walnut Cake...... Rs: 2000"<<endl;
		cout<<"\t\t\t\t\t8.  Coldrink .............. Rs: 200"<<endl;
		cout<<"\t\t\t\t\t9.  Zingratha ............. Rs: 500"<<endl;
		cout<<"\t\t\t\t\t10. Cheese Burger.......... Rs: 1000"<<endl;
		cout<<"\t\t\t\t\t-------------------------------------"<<endl;
		
		cout<<"Enter Your Choice :\t";

		
int choice;
cin>>choice;
ofstream file1("food.text",ios::in|ios::out|ios::app);
file1<<choice<<endl;
file1.close();


	
	switch(choice){
		

		//using switchcases to select the above choices
		
			case 1:
				
				cout<<"Cheese Pizza"<<endl;
				price=2000;
				cout<<"How many Pizzas  would you like to order?:\t\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
				change=pay-total;
				cout<<"changeprice:\t\t"<<change<<endl;
				
				/*using if condition to check whether the pay is equal then the user can select more items from
				 the menu other wise can exit the program*/
				 
				if(pay>=total){
				
					cout<<"Want More....?Enter y For more OR n for Exit:\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"press n for exit"<<endl;
						cin>>more;
						
	
				}
			    bill_amount+=total;
		        //for going to next screen  
				system("cls");
				break;
				
				
			case 2:
				
				cout<<"Zinger Burger"<<endl;
				price=2000;
				cout<<"How many Zinger Burger would you like to order?:\t\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				if(pay>=total){
			
					cout<<"Want More?...Enter y For more OR n for Exit:\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"press n for exit"<<endl;
						cin>>more;
						
				}
				
				 bill_amount+=total;
					system("cls");
			    
				break;
				
			case 3:
				cout<<"Broast"<<endl;
				price=3000;
				cout<<"How much Broast would you like to order?:\t\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
				change=pay-total;
				cout<<"changeprice:\t\t"<<change<<endl;
					if(pay>=total){
					cout<<"Want More?...Enter y For more OR n for Exit:\t";	
				cin>>more;
	        	}
				
			    	else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"press n for exit"<<endl;
						cin>>more;
						change=pay-total;
	
				}
				bill_amount+=total;
				system("cls");
				break;
				
			case 4:
				
				cout<<"Chicken Sandwitches"<<endl;
				price= 500;
				cout<<"How many Chicken Sandwitches would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
				change=pay-total;
				cout<<"changeprice:\t\t"<<change<<endl;
					if(pay>=total){
						
                        
					cout<<"Want More?...Enter y For more OR n for Exit:\t\t";	
				cin>>more;
	        	}
				
				    else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"press n for exit"<<endl;
						cin>>more;
					}
				bill_amount+=total;
				system("cls");
				break;
				
				
			    case 5:
				
				cout<<"Biryani"<<endl;
				price=2000;
				cout<<"How many Plates of Biryani would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
					
				if(pay>=total){
		
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"press n for exit "<<endl;
						cin>>more;
					
				}
				bill_amount+=total;
					system("cls");
				break;
					
			case 6:
					
				cout<<"French Fries"<<endl;
				price=500;
				cout<<"How many packets of french fries would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				
				if(pay>=total){
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"Press n for exit"<<endl;
						cin>>more;
						
	
				}
				
			bill_amount+=total;
			system("cls");
				break;
				
			case 7:
					
				cout<<"Coffe Walnut Cake"<<endl;
				price=2000;
				cout<<"How many packets of Coffe Walnut Cake would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				
				if(pay>=total){
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"Press n for exit"<<endl;
						cin>>more;
						
	
				}
				
			bill_amount+=total;
			system("cls");
				break;
				
				
				case 8:
					
				cout<<"Cold drink"<<endl;
				price=200;
				cout<<"How many bottles of Cold drink would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				
				if(pay>=total){
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"Press n for exit"<<endl;
						cin>>more;
						
	
				}
			bill_amount+=total;
			system("cls");
				break;
				
				
				case 9:
					
				cout<<"Zingeratha"<<endl;
				price=500;
				cout<<"How many rolls of Zingeratha would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				
				if(pay>=total){
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"Press n for exit"<<endl;
						cin>>more;
						
	
				}
				
			bill_amount+=total;
			system("cls");
				break;
				
				
				case 10:
					
				cout<<"Cheese burger"<<endl;
				price=1000;
				cout<<"How many Cheese burger would you like to order?:\t";
				cin>>quantity;
				total=price*quantity;
				cout<<"totalprice:\t\t" <<total<<endl;
				cout<<"paid rs:\t\t";
				cin>>pay;
					change=pay-total;
						cout<<"changeprice:\t\t"<<change<<endl;
				
				if(pay>=total){
				
					cout<<"Want More?...Enter y For more OR n for Exit:\t";	
				cin>>more;
	        	}
				
				else{
						
						cout<<"The money you paid is not sufficient"<<endl;
						cout<<"Press n for exit"<<endl;
						cin>>more;
				}
			bill_amount+=total;
			system("cls");
				break;
				
		    default:
				cout<<"Invalid Choice";
				system("cls");
		}
		
	}
	
	
	
	while(more/='y');
	
	cout<<"======================================================================================================================"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tGarden of Eats"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"======================================================================================================================"<<endl;
	    cout<<"Total bill is :";
		cout<<bill(bill_amount);
		
		cout<<"\n\nThank you for visiting our Resto  :)";
	return 0;
	
	
}


