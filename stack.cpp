#include<iostream>
using namespace std;

class stack{
  public:
  int val,top=-1,a[5],n=5;

  void empty()
  {
    top=-1;
    cout<<"Stack is Empty";
  }

  void full()
  {
    if(top==n)
    {
        cout<<"Stack is Full";
    }
    else{
        cout<<"Stack is not full";
    }
  }

  void pop()
  {
    cout<<a[top]<<" is removed";
    top--;
  }

  void push()
  {
    cout<<"Enter the value";
    cin>>val;
    top++;
    a[top]=val;
  }

  void display()
  {
    for(int i=0;i<=top;i++)
    {
        cout<<a[i]<<endl;
    }
  }
};
int main()
{
     stack s;
     int ch;
     char a;

     do{
        cout<<"0.Exit"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.Remove"<<endl;
        cout<<"3.Empty"<<endl;
        cout<<"4.Full"<<endl;
        cout<<"5.display"<<endl;


        cout<<"Enter the choice:";
        cin>>ch;


        switch (ch)
        {
        case 0:
           cout<<"exited"<<endl;
            break;
        case 1:
            s.push();
            break;
        case 2:
           s.pop();
            break;
        case 3:
              s.empty();
            break;
        case 4:
             s.full();
            break;
        case 5:
            s.display();
            break;

        default:
           cout<<"enter the valid choice";
            break;
        }
    cout<<"You want continue??";
    cin>>a;

     }while (a='y');
     
     return 0;
}