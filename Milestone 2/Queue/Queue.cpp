#include <iostream>
using namespace std;

#define SIZE 10
int Q[SIZE];
int front = -1;
int rear = -1;



bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}


void enqueue ( int value )
{
 if (rear == SIZE-1)
  cout<<"Queue is full \n";
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  Q[rear] = value;
 }
}


void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}


void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<Q[front]<<"\n";
}


void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<Q[i]<<" ";
  cout<<"\n";
 }
}

int main()
{
 cout<<"Inserting elements in queue\n";
 enqueue(22);
 enqueue(13);
 enqueue(55);
 enqueue(27);
 enqueue(28);

 displayQueue();
 showfront();

 cout<<"Removing elements from queue\n";
 
 dequeue();
 displayQueue();
 
 return 0;
}
