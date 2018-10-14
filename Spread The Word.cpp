#include<iostream>
using namespace std;
int main (void)
{
	int test_cases;
	cin>>test_cases;
	int no_of_persons;
	int arr_of_days_of_person[100000];
	int counting_days;
	for(int i=1;i<=test_cases;i++)
	{
		cin>>no_of_persons;
		for(int i=0;i<no_of_persons;i++)
		{
			cin>>arr_of_days_of_person[i];
		}
		int people_know_about_snackdown=1;
		int flag=0;
		int no_of_days=0;
		int counter;
		while(people_know_about_snackdown<=no_of_persons)
		{
			if(flag!=0)
			{
				counter=people_know_about_snackdown;
				flag++;
			}
			for(int i=0;i<counter;i++)
			{
				people_know_about_snackdown=people_know_about_snackdown+arr_of_days_of_person[i];
				
			}
			no_of_days++;
		}
		cout<<no_of_days<<endl;
		
	}
	return 0;
}
