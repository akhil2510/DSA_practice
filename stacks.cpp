     // 1st program to show that array and pointers are different 
#include <iostream> 
#include<string>

using namespace std; 

class stack{
	  private:
	 	int top;
	 	int arr[5];
	 	
      public:
     	stack()
		 {
		 	top = -1;
		 	for(int i=0;i<5;i++)
		 	{
		 		arr[i]=0;
			}
		 }
	  bool isEmpty()
	  {
	  	if(top == -1)
		  return true;
		else
		   return false;
	  }
	  bool isFull()
	  {
	  	if(top==4)
	  	  return true;
	  	else
	  	  return false;
	  }
	  void push(int val)
	  {
	  	if(isFull())
	  	  cout<<"stock overflow "<<endl;	
	    else
	      {
	      	top++;
	      	arr[top]=val;
		  }
	  }
	  int pop()
	  { 
	  	if(isEmpty())
	  	{
	  		cout<<"Stock underflow "<<endl;
	  		return 0;
		}
		else
		  {
		   	 int popValue = arr[top];
		  	 arr[top]=0;
		  	 top--;
		  	 return popValue;
		  }
	  }
	  int count()
	  {
	  	return(top+1);
	  }
	  int peek(int pos)
	  {
	  	if(isEmpty())
		  {
	  		cout<<"Stock underflow "<<endl;
	  		return 0;
		  }
		else
		  return arr[pos];
	  }
	  
	  void change(int pos,int val)
	  {
	  	arr[pos]=val;
	  	cout<<"value changed at location "<<pos<<endl;
	  }
	  void display()
	  {
	  	cout<<"All values in the stack are "<<endl;
	  	for(int i=4;i>=0;i--)
	  	{
	  		cout<<arr[i]<<endl;
		  }
	  }
	  
}; 



int main()
{
   stack s1;
   int option,position,value;
   
   do{
   	cout<<"What operation do you want to perform ? select option number . select 0 for exit "<<endl;
   	cout<<"1. push()"<<endl;
   	cout<<"2. pop()"<<endl;
    cout<<"3. isempty()"<<endl;
    cout<<"4. isFull()"<<endl;
    cout<<"5. peek()"<<endl;
   	cout<<"6. count()"<<endl;
   	cout<<"7. change()"<<endl;
   	cout<<"8. display()"<<endl;
  
   	
   	cin>>option;
   	switch(option)
   	{
   	  case 1:
   	 	cout<<"enter an item to push in the stack"<<endl;
   	 	cin>>value;
   	 	s1.push(value);
   	 	break;
   	 case 2:
   		cout<<"Pop function called -poped value:"<<s1.pop()<<endl;
   		break;
     case 3:
   		if(s1.isEmpty())
   		  cout<<"Stack is Empty "<<endl;
   	    else
   	      cout<<"stack is not empty"<<endl;
   	    break;
      case 4:
   		if(s1.isFull())
   		  cout<<"Stack is full"<<endl;
   	    else
   	      cout<<"stack is not empty"<<endl;
   		break;
   	  case 5:
   	 	cout<<"Enter position for peek"<<endl;
   	 	cin>>position;
   	 	cout<<"Peak function called-"<<endl<<s1.peek(position)<<endl;
   	 	break;
	   
	  case 6:
	 	cout<<"Number of items in stack"<< s1.count()<<endl;
	 	break;
   	  case 7:
	 	cout<<"change function called ! Enter position"<<endl;
		cin>>position;
		cout<<"Enter value "<<endl;
		cin>>value;
		s1.change(position,value);
		break;
		
   	  case 8:
		cout<<"Display function called" << endl;
		break; 
      }
     }while(option !=0);
    
    return 0; 
}

