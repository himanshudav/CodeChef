
#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
	int test_cases;
	cin>>test_cases;
	int total_no_of_teams;
	int teams_to_select;
	int qualified_teams;
	int arr_of_score_of_teams[100000];
	for(int i=1;i<=test_cases;i++)
	{
		cin>>total_no_of_teams;
		cin>>teams_to_select;
		
		for(int i=0;i<total_no_of_teams;i++)
		{
			cin>>arr_of_score_of_teams[i];
		}
		sort(arr_of_score_of_teams , arr_of_score_of_teams+total_no_of_teams , greater<int>());
		qualified_teams=teams_to_select;
		for(int i=teams_to_select;i<total_no_of_teams;i++)
		{
			if(arr_of_score_of_teams[teams_to_select]==arr_of_score_of_teams[teams_to_select+1])
			{
				qualified_teams++;
				//cout<<"qualified_teams= "<<qualified_teams<<endl;
			}
		}
		cout<<qualified_teams<<endl;

	}
}
