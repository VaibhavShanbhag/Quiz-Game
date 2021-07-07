#include<iostream>
using namespace std;
#define MAX 10

class Quiz
{
	int stack[MAX];
	int top,count,q,C,W;
	string name;
	
	public:
		
		Quiz()
	{
		top=-1;
		count=0;
		q=0;
		C=0;
		W=0;
	}
	
		void Instructions();
		void Start_Quiz();
		void See_Score();
		void push();
		void pop();
		void Question_Message();
};

void Quiz::Instructions()
{
	cout<<"\n\t\t\t********************************************************** *";
	cout<<"\n\t\t\t*\t     ****************************                  *";
	cout<<"\n\t\t\t*\t     * Rules For Answering Quiz *                  *";
	cout<<"\n\t\t\t*\t     ****************************                  *";
	cout<<"\n\t\t\t* Read The Instructions Carefully.                         *";
	cout<<"\n\t\t\t* 1. Answering Quiz You Have To First Register Your Name.  *";
	cout<<"\n\t\t\t* 2. Quiz Will Contain Total Of 10 Questions.              *";
	cout<<"\n\t\t\t* 3. Each Correct Answer Will Award You 1 Point.           *";
	cout<<"\n\t\t\t* 4. Each Wrong Answer Will Deduct 1 Point.                *";
	cout<<"\n\t\t\t* 5. Format Of Question.                                   *";
	cout<<"\n\t\t\t* Who is known as the founder of C Language                *";
	cout<<"\n\t\t\t* A. Dennis Retichie                      B.James Gosling  *";
	cout<<"\n\t\t\t* C. Martin Richard                      D.James Donachie  *";
	cout<<"\n\t\t\t* Enter Your Answer:                                       *";
	cout<<"\n\t\t\t* 6. For Answering You Can Provide Correct Input Like      *";
	cout<<"\n\t\t\t* Capital As Well As Small a, b, c, d.                     *";
	cout<<"\n\t\t\t* 7. After Answering All The Question You Can View Your    *";
	cout<<"\n\t\t\t* Score.                                                   *";
	cout<<"\n\t\t\t********************************************************** *";
}

void Quiz::Start_Quiz()
{
	char ans;
	
	cout<<"\n\nEnter Your Name: ";
	cin>>name;
	cout<<"\n\t\t\t****************";
	cout<<"\n\t\t\t* All The Best *";
	cout<<"\n\t\t\t****************";
	
	//Question No: 1
	cout<<"\n\nQuestion 1. Who is Known as the founder of C++ language?";
	cout<<"\n\nA. Dennis Ritchie                       B. James Gosling ";
	cout<<"\n\nC. Bjarne Stroustrup                    D. Martin Richard";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='C' || ans=='c')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is C.";
	}
	
	//Question No: 2
	cout<<"\n\nQuestion 2. Which of the following is not the application of stack";
	cout<<"\n\nA. A parentheses balancing program                    B. Tracking of local variables at run time";
	cout<<"\n\nC. Complile Syntax Analyzer                           D. Data Transfer between two asynchronous process";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='D' || ans=='d')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is D.";
	}
	
	//Question No: 3
	cout<<"\n\nQuestion 3. In a stack, if a user tries to remove an element from an empty stack it is called _____";
	cout<<"\n\nA. Underflow                       B. Empty collection ";
	cout<<"\n\nC. Overflow                        D. Garbage collection";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='A' || ans=='a')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is A.";
	}
	
	//Question No: 4
	cout<<"\n\nQuestion 4. The result of evaluating the postfix expression 5, 4, 6, +, *, 4, 9, 3, /, +, * is?";
	cout<<"\n\nA. 600                        B. 350";
	cout<<"\n\nC. 650                        D. 588";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='B' || ans=='b')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is B.";
	}
	
	//Question No: 5
	cout<<"\n\nQuestion 5. Convert the following infix expressions into its equivalent postfix expressions. (A + B ^ D)/(E – F)+G";
	cout<<"\n\nA. A B D ^ + E F – / G +                     B. A B D + ^ E F – / G + ";
	cout<<"\n\nC. A B D ^ + E F/- G +                       D. A B D E F + ^ / – G + ";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='A' || ans=='a')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is A.";
	}
	
	//Question No: 6
	cout<<"\n\nQuestion 6. In linked list each node contains a minimum of two fields. One field is data field to store the data second field is?";
	cout<<"\n\nA. Pointer to character                     B. Pointer to integer";
	cout<<"\n\nC. Pointer to node                          D. None";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='C' || ans=='c')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is C.";
	}
	
	//Question No: 7
	cout<<"\n\nQuestion 7. Which of the following properties is associated with a queue?";
	cout<<"\n\nA. First In Last Out                     B. First In First Out";
	cout<<"\n\nC. Last In First Out                     D. Last In Last Out";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='B' || ans=='b')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is B.";
	}
	
	//Question No: 8
	cout<<"\n\nQuestion 8. Which of the following traversing algorithm is not used to traverse in a tree";
	cout<<"\n\nA. Post Order                   B. Pre Order";
	cout<<"\n\nC. In Order                     D. Randomized";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='D' || ans=='d')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is D.";
	}
	
	//Question No: 9
	cout<<"\n\nQuestion 9. Which of the following is false about a binary search tree?";
	cout<<"\n\nA. The left child is always lesser than its parent                     B. The right child is always greater than its parent";
	cout<<"\n\nC. The left and right sub-trees should also be binary search trees     D. In order sequence gives decreasing order of elements";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='D' || ans=='d')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is D.";
	}
	
	//Question No: 10
	cout<<"\n\nQuestion 10. The number of elements in the adjacency matrix of a graph having 7 vertices is ______";
	cout<<"\n\nA. 7                   B. 14";
	cout<<"\n\nC. 36                  D. 49";
	cout<<"\n\nEnter Your Answer: ";
	cin>>ans;
	q++;
	if(ans=='D' || ans=='d')
	{
		push();
		C++;
		cout<<"Correct Answer!!";
	}
	else
	{
		pop();
		W++;
		cout<<"Wrong Answer!!Correct Answer is D.";
	}
	
	Question_Message();
	
}

void Quiz::See_Score()
{
	cout<<"\n\t\t\t**************************************";
	cout<<"\n\t\t\t*           ***************          *";
	cout<<"\n\t\t\t*           *             *          *";
	cout<<"\n\t\t\t*           * Quiz Result *          *";
	cout<<"\n\t\t\t*           *             *          *";
	cout<<"\n\t\t\t*           ***************          *";
	cout<<"\n\t\t\t* Name: ";
	cout<<name;
	cout<<"\t\t\t     *";
	cout<<"\n\t\t\t* Score: ";
	cout<<stack[top];
	cout<<"\t\t\t     *";
	cout<<"\n\t\t\t* Correct: ";
	cout<<C;
	cout<<"\t\t  Wrong: ";
	cout<<W<<"   "<<"*";
	cout<<"\n\t\t\t*                                    *";
	cout<<"\n\t\t\t**************************************";
	cout<<"\n\n";
}

void Quiz::push()
{
	int s;
	if(top==MAX-1 || count==10)
	{
		s=stack[top];
		Question_Message();
	}
	else
	{
		count++;
		top++;
		stack[top]=count;
	}
}

void Quiz::pop()
{
	int s;
	if(top==-1 && count==0)
	{
		s=stack[top];
		cout<<"\nYour Score Is In Negative.\n";
		
		if(top>=(-1) || top<=(-10))
		{
			top=-1;
		}
	}
	else
	{
		top--;
		count--;
	}
}

void Quiz::Question_Message()
{
	if(q==10)
	{
		cout<<"\nYou Have Already Answered All The Questions.\n";
	}
}
int main()
{
	int n;
	Quiz Q;
	cout<<"\n\t\t\t\t\t   *************";
	cout<<"\n\t\t\t\t\t   *           *";
	cout<<"\n\t\t\t\t\t   * Quiz Game *";
	cout<<"\n\t\t\t\t\t   *           *";
	cout<<"\n\t\t\t\t\t   *************";
	cout<<"\n";
	cout<<"\n\t\t\t\t  **********************************";
	cout<<"\n\t\t\t\t  *                                *";
	cout<<"\n\t\t\t\t  * Developed By: Vaibhav Shanbhag *";
	cout<<"\n\t\t\t\t  *                                *";
	cout<<"\n\t\t\t\t  **********************************";
	cout<<"\n\nPress 1 To Continue: ";
	cin>>n;
	
	do
	{
		cout<<"\n\t\t\t********Options********";
		cout<<"\n\t\t\t* 1. Start Quiz       *";
		cout<<"\n\t\t\t* 2. View Score       *";
		cout<<"\n\t\t\t* 3. Exit             *";
		cout<<"\n\t\t\t***********************";
		cout<<"\n\nSelect Any One Option To Continue: ";
		cin>>n;
		
		switch(n)
		{
			case 1:
				Q.Instructions();
				Q.Start_Quiz();
				break;
			
			case 2:
				Q.See_Score();
				break;
			
			default:
				cout<<"\n\t\t\t\t\t   ***************************";
				cout<<"\n\t\t\t\t\t   * Thank You For Answering *";
				cout<<"\n\t\t\t\t\t   ***************************";
				
		}
	}while(n!=3);
	
	
}
