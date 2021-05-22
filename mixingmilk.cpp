#include<iostream>
#include<algorithm>
using namespace std;
struct farmer{
	int cost;
	int num;
};
bool cmp(farmer a,farmer b){
	if(a.cost!=b.cost)return a.cost<b.cost;
	return a.cost>b.cost;
}
int main(){
	int n,m,ans=0,nl=0;
	cin>>n>>m;
	farmer farmers[5005];
	for(int i=1;i<=m;i++)cin>>farmers[i].cost>>farmers[i].num;
	sort(farmers+1,farmers+m+1,cmp);
	for(int i=1;i<=m;i++){
		while(farmers[i].num!=0){
			farmers[i].num--;
			ans+=farmers[i].cost;
			nl++;
			if(nl==n){
				cout<<ans;
				return 0;
			}
		}
	}
	cout<<0;
}
