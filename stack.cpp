 #include<iostream>
#include<string>

using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
		
	public:
		Stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
			   return true;
			else
			   return false;
		}
	    bool isfull()
	    {
	    	if(top==4)
	          return true;
			else
			  return false;	 
		}
		void push(int val)
		{
			if(isfull())
			{
				cout<<"Stack overflow"<<endl;
			}
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
				cout<<"stack underflow"<<endl;
				return 0;
			}
			else
			{
			   int popvalue = arr[top];
			   arr[top]=0;
			   top--;
			   return popvalue;
			} 
		}
		int count()
		{
			return(top+1);
		}
		int peek(int pos)
		{
			if (isEmpty())
			{
				cout<<"stack underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		void change(int pos,int val)
		{
			arr[pos]=val;
			cout<<"value has changed "<<endl;
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
int main(){
	Stack s1;
	int option,pos,value;
	
	do
	{
		cout<<"enter options for operatins !! enter 0 to exit"<<endl;
		cout<<"1 push"<<endl;
		cout<<"2 pop"<<endl;
		cout<<"3 isEmpty()"<<endl;
		cout<<"4 isFull()"<<endl;
        cout<<"5 peek()"<<endl;
        cout<<"6 count()"<<endl;
        cout<<"7 change()"<<endl;
        cout<<"8 display()"<<endl;
        
        cin>>option;
        switch(option)
        {
        	case 0:
        		break;
        	case 1:
        		cout<<"Enter an item to push "<<endl;
        		s1.push(value);
        	     break;
			case 2:
				cout<<"Pop function called -poped value"<<s1.pop()<<endl;
				break;
        	case 3:
        		if(s1.isEmpty())
        		{
        			cout<<"Stack is empty"<<endl;
				}
				else
				   cout<<"Stack is not full"<<endl;
		    case 4:
		    	if(s1.isfull())
        		{
        			cout<<"Stack is full"<<endl;
				}
				else
				   cout<<"Stack is not full"<<endl;
				break;
			case 5:
				cout<<"Enter position"<<endl;
				cin>>pos;
				cout<<s1.peek(pos)<<endl;
				break;
			case 6:
				cout<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Enter position"<<endl;
				cin>>pos;
				cout<<"Enter value"<<endl;
				cin>>value;
				s1.change(pos,value);
			    break;
			default:
				cout<<"Enter proper value"<<endl;
		}
    }while(option!=0);
}





