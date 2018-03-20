#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

int sort(auto &data)
{
	int i,d;
	int temp;
	for(i=1;i=data.size();i++)
	{
		for (d=1;d=data.size();d++)
		{ 
			if (data[i-1]>data[i])
			{
				temp=data[i];
				data[i]=data[i-1];
				data[i-1]=temp;
			}
		}
	}
}

int main()
{
  vector<string> inputs;
  string input;

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
 
   cout<<endl<<"To end input type the #-character (followed by Enter)"<<endl<<endl;
	
	if(input='#')
	{	cout<<endl<<endl;
		cout<<"The program will now sort the inputs in ascending order.";
		sort(inputs);
	}
	
 
	cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}
