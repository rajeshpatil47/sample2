#include<iostream>
using namespace std;

class Node
{
	public:
	int prn;
	char name[10];
	Node* next;
	Node();
};


Node :: Node()
{
	prn = 0;
	next=NULL;
}

class pinnacle_club
{
	private:
	Node* president;
	Node* secretary;
	
	public:
	pinnacle_club();
	void add_member();
	void delete_member();
	void display_member();
	void display_total_member();
	void concatenate(pinnacle_club &);
};

pinnacle_club :: pinnacle_club()
{
	president =NULL;
	secretary=NULL;
}








void pinnacle_club :: add_member()
{
	Node* temp;
	Node* member = new Node;
	cout<<"Enter the prn of the member : ";
	cin>>member->prn;
	cout<<"Enter the name of the member : ";
	cin>>member->name;
	member->next=NULL;
	
	if(president==NULL)
	{
		president=member;
		cout<<"\nMember added.";
	}
	else
	{
		if(secretary==NULL || president->next==NULL)
		{
			secretary=member;
			president->next=secretary;
			cout<<"\nMember added.";
		}
		else
		{
			temp=president;
			while(temp->next!=secretary)
			{
				temp=temp->next;
			}
			temp->next=member;
			member->next=secretary;
			cout<<"\nMember added.";
		}
	}
	
	
}


void pinnacle_club:: display_member()
{
	Node* temp;
	if(president==NULL)
	{
		cout<<"List is empty.";
	}
	else
	{
		temp=president;
		cout<<"\n\t\t Pinnacle Club Members : \n";
		cout<<"\n\t\t"<<"Name"<<" "<<"Prn no.";
		while(temp!=NULL)
		{
			cout<<"\n\t\t"<<temp->name<<" "<<temp->prn;
			if(temp==president)
			{
				cout<<"-president";
				
			}
			if(temp==secretary)
			{
				cout<<"-secretary";
			}
			temp=temp->next;
		}
	}
	
}



void pinnacle_club:: display_total_member()
{
	Node* temp;
	int cnt=0;
	for(temp=president;temp!=NULL;temp=temp->next)
	{
		cnt++;
	}
	cout<<"\nThe total no of members in club is : "<<cnt;
}



void pinnacle_club::delete_member()
{
	Node* temp;
	Node* prev;
	int prn;
	cout<<"Enter the prn of member to be deleted : ";
	cin>>prn;
	for(temp=president;temp!=NULL;temp=temp->next)
	{
		if(temp->prn==prn)
		{
			break;
		}
		prev=temp;
	}
	
	if(temp==NULL)
	{
		cout<<"\nThe ID of member to be deleted not found!";
	}
	else
	{
		if(temp==president)
		{
			president=president->next;
			if(president==NULL)
			{
				secretary = NULL;
			}
			cout<<"President deleted.";
		}
		else
		{
			if(temp->next==NULL)
			{
				prev->next=NULL;
				secretary=prev;
				cout<<"\nSecretary deleted.";
			}
			else
			{
				prev->next=temp->next;
				cout<<"Member deleted.";
			}
		}	
	}
}

void pinnacle_club :: concatenate(pinnacle_club &a2)
{
	secretary->next=a2.president;
	secretary=a2.secretary;
	a2.president=NULL;
	a2.secretary=NULL;
	
}





int main()
{
	pinnacle_club a1,a2;
	int ch;
	do
	{
        cout<<"\n\n";
        cout<<"\n\t\t 1. Add Member ";
        cout<<"\n\t\t 2. Display Members ";
        cout<<"\n\t\t 3. Display Total Members ";
        cout<<"\n\t\t 4. Delete Member";
        cout<<"\n\t\t 5. Concatenate Two Lists ";
        cout<<"\n\t\t 6. Exit ";
        cout<<"\n\t\t Enter your Choice : ";
        cin>>ch;
        switch (ch)
        {
        	case 1:a1.add_member();
        			break;
        	case 2:a1.display_member();
        			break;
        	case 3:a1.display_total_member();
        			break;
        	case 4:a1.delete_member();
        			break;
        			
        	case 5:cout<<"\nEnter the member details of division A2 : ";
        			char ans;
        			do{
        				a2.add_member();
        				cout<<"\nDo you want to add more members?";
        				cin>>ans;
        			}while(ans=='y'||ans=='Y' );
        			a1.concatenate(a2);
        			a1.display_member();
        			
        	case 6:cout<<"End of program.";
        			break;
        	
        	default:cout<<"Invalid input!";
        			break;
        }
	}while(ch!=6);
	return 0;
}