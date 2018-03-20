#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

void sort(auto &data)
{
	int i,d;
	string temp;
	for(i=1;i<data.size();i++)
	{
		for (d=i+1;d<data.size();d++)
		{ 
			if (data[d-1]>data[d])
			{
				temp=data[d];
				data[d]=data[d-1];
				data[d-1]=temp;
			}
		}
	}
}

int main()
{
  vector<string> inputs;
  string input;
	int e;

   cout<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
 
	
	if(input=="#")
	{	cout<<endl<<endl;
		cout<<"The program will now sort the inputs in ascending order.";
		sort(inputs);
	}
	
	for (e=0;e<inputs.size();e++)
	{
		cout<<inputs[e]; 
	}
	cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}
