#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>
#include <stdlib.h>

using namespace std;

string number_with_nine_dights[1000000];
//Include string array and use number searching part for running program
string number_with_six_dights[1000000];
//Include string array for the second part of the program

int main()
{
	//ifstream cin("insearch.txt");
	//ofstream cout("outsearch.txt");
	
	long long program;
	//The main value of program's first part
	
	cout<<"Program creator:: Rafael Mkrtchyan @2011"<<endl;
	cout<<"Language:: English(US)"<<endl;
	cout<<"Program:: Cell Phone Search"<<endl;
	cout<<"Version"<<" "<<"1.0"<<endl;
	cout<<"All rights reserved"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<endl;
	//The part of author's descriptions
	cout<<"For running the program 'Search BY Code' press '1'"<<endl;
	cout<<"For running the program 'Search By Number ' press '2'"<<endl;
	cout<<"For running 'Help' press '3'"<<endl;
	//The first describition of program
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<endl;

	cin>>program;

	//The first program
	if (program==1)
	{
		cout<<"================================SEARCH BY CODE===================================="<<endl;
		cout<<endl;
		//Heading
		cout<<"Write the searching code,which you want to know"<<endl;
		string first_code;
		//Include code,which one must be searched
		int i;
		//Inlude calculator
		cin>>first_code;
		
		if (first_code.size()>3)
		{
			cout<<"Your searching number is not right"<<endl;
			cout<<"Try to run program with new number less than 6"<<endl; 
			return 0;
		}
		
		int test;
		//Correct number of the tests
		cout<<"Write correct number of the tests"<<endl;
		cin>>test;
		cout<<"Write all the tests you want to check"<<endl;
		
		for(i=0;i<test;++i)
		{
			cin>>number_with_nine_dights[i];
		}
		
		//Include all the test numbers for checking 
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<endl;
		//The number of the satisfactory tests
		//The first value of satisfactory tests 
		int j;
		//The new calculator
		cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a"<<endl;
		cout<<"The correct answers are"<<endl;
		
		for(j=0;j<test;++j)
		{
			if(first_code[0]==number_with_nine_dights[j][0] && first_code[1]==number_with_nine_dights[j][1] && first_code[2]==number_with_nine_dights[j][2])
			{
				cout<<number_with_nine_dights[j]<<endl;
				//To check all things
			}
		}
		
		//The whole results
		cout<<endl;
		cout<<"For checking the results run it again"<<endl; 
		system("pause");
		return 0;
		//It is the end of the program 'Search By Code'
	}


	//The second program
	if (program==2)
	{
		cout<<"==============================SEARCH BY NUMBER=================================="<<endl;
		cout<<endl;
		//Heading
		cout<<"Write the searching number,which you want to know"<<endl;
		
		string s;
		//A new string for the second part of the program
		int nnn;
		//A new number of the tests
		int q,kk,jj,tt,count=0;
		//New calculators
		bool p=true;
		//The bool variable is for checking results
		cin>>s;
		
		cout<<"Write correct number of the tests"<<endl;
		cin>>nnn;
		cout<<"Write all the tests you want to check"<<endl;
		
		for(q=1;q<=nnn;q++)
		{
			cin>>number_with_six_dights[q];
			//Use the string array
		}
	    
		cout<<"--------------------------------------------------------------------------------"<<endl;
		cout<<endl;

		cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a"<<endl;
		cout<<"The correct answers are"<<endl;

		kk=s.size();
		//Start the main searching part
		for(tt=1;tt<=nnn;tt++)
		{
			p=true;
			//Bool variable for checking the results

			for(jj=0;jj<kk-1;jj++)
				//The variable for size of string
			{
				for(q=0 ; q<number_with_six_dights[tt].size()-1; q++)
					//The variable for controling the whole part of string array
				{
					
					if(s[jj]==number_with_six_dights[tt][q] && s[jj+1]==number_with_six_dights[tt][q+1])
						//Use the command for the condition
					{
						cout<<number_with_six_dights[tt]<<endl;
						//Output of the correct answer
						count++;
						//We increase the number of correct answers
						p=false;
						//We change the value of the bol variable
						break;
					}

				}
				if(p==false)
				{
					break;
				}
			}
		}
		//The whole results
		cout<<endl;
		cout<<"For checking the results run it again"<<endl;
		system("pause");
		return 0;
	//It is the end of the program 'Search By Number'
	}

	
	return 0;
	system("pause");
	//The end of the whole program.
}
