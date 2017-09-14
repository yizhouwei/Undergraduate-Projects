#include<iostream>
#include<queue>
#include<string>
#include<sstream>
#include<cstdlib>
#include<map>
#include<getopt.h>
#include<unistd.h>
#include<cstring>
using namespace std;

int min(int a,int b){
	if (a<b) return a;
	else return b;
	
}
    struct order{
		int time;
		int id;
		int sell;
		int buy;
		int price;
		int quantity;
		int duration;
		string equity;
		string name;	
	};
	struct comp{
		bool operator()(order A, order B){
			if (A.sell==1){
				if (A.price==B.price) return A.id>B.id;
				return A.price>B.price;
			}
			else if (A.buy==1){
				if (A.price==B.price) return A.id>B.id;
				return A.price<B.price;
			}
		}
	};
	struct equities{
		priority_queue<order,vector<order>,comp> currbuyorder;	
		priority_queue<order,vector<order>,comp> currsellorder;
	};


int main(int argc, char*argv[]){
	int verbose=0;
	int median =0;
	int midpoint=0;
	int transfer=0;
	int option_index=0;
	char *optstring="vmptg:";
	static struct option long_options[]={
		{"verbose",0,NULL,'v'},
		{"median",0,NULL,'m'},
		{"midpoint",0,NULL,'p'},
		{"transfers",0,NULL,'t'},
		{"ttt",1,NULL,'g'},
		{0,0,0,0}
	};
	int opt;
	vector<string> tttequity;
	tttequity.clear();
	int tttt=0;
	while ((opt=getopt_long(argc,argv,optstring,long_options, &option_index))!= -1){
		if (opt=='v') verbose=1;
		if (opt=='m') median=1;
		if (opt=='p') midpoint=1;
		if (opt=='t') transfer=1;
		if (opt=='g') {tttt=1;tttequity.push_back(optarg);}
	}


	

	map<string,priority_queue<int> > deals;
	map<string,priority_queue<order,vector<order>,comp> > people;
//	map<string,priority_queue<order,vector<order>,comp> > buyorder;
//	map<string,priority_queue<order,vector<order>,comp> > sellorder;
	map<string,vector<order> > allorder;
	map<string,equities> currorder;



	string tmpin;
	int currid=0;
	int currtime=0;
	int commission_fee=0;
	int totaltrade=0;
	int trade=0;
	int share=0;

	while (getline(cin,tmpin))
	{	
		order tmporder;
		istringstream istream(tmpin);
		string buyorsell;
		string price;
		string quantity;
		istream >> tmporder.time>>tmporder.name>>buyorsell>>tmporder.equity>>price>>quantity>>tmporder.duration;
		string tmpstr;
		tmpstr=price.substr(1,price.size()-1);
		tmporder.price=atoi(tmpstr.c_str());
		tmpstr=quantity.substr(1,quantity.size()-1);
		tmporder.quantity=atoi(tmpstr.c_str());
		if (buyorsell=="BUY") {tmporder.buy=1;tmporder.sell=0;}
		else if (buyorsell=="SELL") {tmporder.sell=1;tmporder.buy=0;}
		tmporder.id=currid;
		currid++;

/*		map<string,priority_queue<order,vector<order>,comp> >::iterator sellit=sellorder.find(tmporder.equity);
		map<string,priority_queue<order,vector<order>,comp> >::iterator buyit=buyorder.find(tmporder.equity);
		priority_queue<order,vector<order>,comp>  tmpsell;
		priority_queue<order,vector<order>,comp>  tmpbuy;
		if (tmporder.sell==1){
			if (sellit==sellorder.end()){
				tmpsell.push(tmporder);
				sellorder.insert(pair<string,priority_queue<order,vector<order>,comp> >(tmporder.equity,tmpsell));
			}
			else {
				sellit->second.push(tmporder);	
			}
		}	
		else{
			if (buyit==buyorder.end()){
				tmpbuy.push(tmporder);
				buyorder.insert(pair<string,priority_queue<order,vector<order>,comp> >(tmporder.equity,tmpbuy));
			}
			else {
				buyit->second.push(tmporder);	
			}
		}*/
		map<string,vector<order> >::iterator allorderit=allorder.find(tmporder.equity);
		vector<order> tmpallorder;
		if (allorderit==allorder.end()){
			tmpallorder.clear();
			tmpallorder.push_back(tmporder);
			allorder.insert(pair<string,vector<order> >(tmporder.equity,tmpallorder));
		}
		else{
			allorderit->second.push_back(tmporder);
		}
		
		
		//insert sellorder/buyorder


	//	cout<<tmporder.time<<" "<<tmporder.name<<" "<<tmporder.buy<<" "<<tmporder.sell<<" "<<tmporder.equity<<" "<<tmporder.price<<" "<<tmporder.quantity<<" "<<tmporder.duration<<" "<<tmporder.id<<endl; 
//=================================input========================================


			/*	map<string,equities>::iterator currorderit;
				currorderit=currorder.find(tmporder.equity);
				if (currorderit==currorder.end()){
					equities tmpeq;	
					if (tmporder.sell==1){
						tmpeq.currsellorder.push(tmporder);
					}
					else if(tmporder.buy==1){
						tmpeq.currbuyorder.push(tmporder);
					}
					currorder.insert(pair<string,equities>(tmporder.equity,tmpeq));	
				}
				else {
					if (tmporder.sell==1){
						currorderit->second.currsellorder.push(tmporder);	
					}
					else if(tmporder.buy==1){
						currorderit->second.currbuyorder.push(tmporder);
					}	
				}	
				*/
		if (tmporder.time!=currtime){
			if ((median==1)&&(deals.size()!=0)){
				map<string,priority_queue<int> >::iterator it;
				for (it=deals.begin();it!=deals.end();++it){
					priority_queue<int> tmppqint=it->second;
					int med;
					int tmpttt=tmppqint.size();
					if (tmppqint.size()%2==0){
						for (int i=1;i<tmpttt/2;i++){
							tmppqint.pop();	
						}
						int tmpa=tmppqint.top();
						tmppqint.pop();
						int tmpb=tmppqint.top();
						med=(tmpa+tmpb)/2;
					}
					else {
						for (int i=1;i<=tmpttt/2;i++){
							tmppqint.pop();	
						}
						med=tmppqint.top();	
					}
					cout<<"Median match price of "<<it->first<<" at time "<<currtime<<" is $"<<med<<endl;	
				}	
			}//cout median
			if ((midpoint==1)&&(currorder.size()!=0)){
				map<string,equities>::iterator itt=currorder.begin();
				while(itt!=currorder.end()){
					
					if ((itt->second.currsellorder.size()==0)||(itt->second.currbuyorder.size()==0)){
						cout<<"Midpoint of "<<itt->first<<" at time "<<currtime<<" is undefined"<<endl;	
					}
					else {
						int tmpt=itt->second.currsellorder.top().price+itt->second.currbuyorder.top().price;
						cout<<"Midpoint of "<<itt->first<<" at time "<<currtime<<" is $"<<tmpt/2<<endl;
					}
				itt++;
				}	
			}//cout midpoint 

			currtime=tmporder.time;//adjust time
			for (map<string,equities>::iterator itt=currorder.begin();itt!=currorder.end();itt++){
				priority_queue<order,vector<order>,comp> tmpcurrbuyorder;
				priority_queue<order,vector<order>,comp> tmpcurrsellorder;
				order check;
				while(itt->second.currsellorder.size()>0){
					check=itt->second.currsellorder.top();
					itt->second.currsellorder.pop();
					if ((check.duration==-1)||(check.time+check.duration>currtime))
						tmpcurrsellorder.push(check);
				}
				while(itt->second.currbuyorder.size()>0){
					check=itt->second.currbuyorder.top();
					itt->second.currbuyorder.pop();
					if ((check.duration==-1)||(check.time+check.duration>currtime))
						tmpcurrbuyorder.push(check);
				}
				itt->second.currsellorder=tmpcurrsellorder;
				itt->second.currbuyorder=tmpcurrbuyorder;
			}//check expire
		}
		



		map<string,equities>::iterator itt;
		order preorder;
		if (tmporder.buy==1){
			itt=currorder.find(tmporder.equity);
			if (itt!=currorder.end()&&(itt->second.currsellorder.size()!=0)){
				preorder=itt->second.currsellorder.top();	
				while ((itt->second.currsellorder.size()!=0)&&(tmporder.price>=preorder.price)&&(tmporder.quantity>0)){
					itt->second.currsellorder.pop();
					if (deals.find(tmporder.equity)==deals.end()){	
						priority_queue<int> ppq;
						ppq.push(preorder.price);							
						deals.insert(pair<string,priority_queue<int> >(tmporder.equity,ppq));
					}
					else{
						deals.find(tmporder.equity)->second.push(preorder.price);
					}//insert deals
					order tttmporder=preorder;
					order ttmporder=tmporder;
					ttmporder.quantity=min(tmporder.quantity,preorder.quantity);
					ttmporder.price=preorder.price;
					tttmporder.quantity=min(tmporder.quantity,preorder.quantity);
					if (people.find(ttmporder.name)==people.end()){
						priority_queue<order,vector<order>,comp>  ppqq;
						ppqq.push(ttmporder);
						people.insert(pair<string,priority_queue<order,vector<order>,comp> >(ttmporder.name,ppqq));
					}
					else{
						people.find(ttmporder.name)->second.push(ttmporder);
					}
					if (people.find(tttmporder.name)==people.end()){
						priority_queue<order,vector<order>,comp>  pppqq;
						pppqq.push(tttmporder);
						people.insert(pair<string,priority_queue<order,vector<order>,comp> >(tttmporder.name,pppqq));
					}
					else{
						people.find(tttmporder.name)->second.push(tttmporder);
					}
					//insert 2 people
					if (verbose==1){
						cout<<tmporder.name<<" purchased "<<ttmporder.quantity<<" shares of "<<tmporder.equity<<" from "<<preorder.name<<" for $"<<preorder.price<<"/share"<<endl;
					}
					totaltrade=totaltrade+preorder.price*ttmporder.quantity;
					int tmptt=preorder.price*ttmporder.quantity/100;
					commission_fee=commission_fee+2*tmptt;
					tmporder.quantity=tmporder.quantity-ttmporder.quantity;
					preorder.quantity=preorder.quantity-ttmporder.quantity;
					trade++;
					share=share+ttmporder.quantity;
					if (preorder.quantity>0){
						currorder.find(tmporder.equity)->second.currsellorder.push(preorder);	
					}		
					if (itt->second.currsellorder.size()>0) preorder=itt->second.currsellorder.top();
				}
				if ((tmporder.quantity>0)&&(tmporder.duration!=0)){	
					currorder.find(tmporder.equity)->second.currbuyorder.push(tmporder);
				}//insert remain		
					
			}
			else {
			if (tmporder.duration!=0){
				map<string,equities>::iterator currorderit;
				currorderit=currorder.find(tmporder.equity);
				if (currorderit==currorder.end()){
					equities tmpeq;	
					if (tmporder.sell==1){
						tmpeq.currsellorder.push(tmporder);
					}
					else if(tmporder.buy==1){
						tmpeq.currbuyorder.push(tmporder);
					}
					currorder.insert(pair<string,equities>(tmporder.equity,tmpeq));	
				}
				else {
					if (tmporder.sell==1){
						currorderit->second.currsellorder.push(tmporder);	
					}
					else if(tmporder.buy==1){
						currorderit->second.currbuyorder.push(tmporder);
					}	
				}
			}
			else if(tmporder.duration==0){
				equities tmpeq;
				currorder.insert(pair<string,equities>(tmporder.equity,tmpeq));		
				}
			}

		}


		else {//sell
			itt=currorder.find(tmporder.equity);
			if (itt!=currorder.end()&&(itt->second.currbuyorder.size()!=0)){
				preorder=itt->second.currbuyorder.top();	
				while ((itt->second.currbuyorder.size()!=0)&&(tmporder.price<=preorder.price)&&(tmporder.quantity>0)){
					itt->second.currbuyorder.pop();
					if (deals.find(tmporder.equity)==deals.end()){	
						priority_queue<int> ppq;
						ppq.push(preorder.price);							
						deals.insert(pair<string,priority_queue<int> >(tmporder.equity,ppq));
					}
					else{
						deals.find(tmporder.equity)->second.push(preorder.price);
					}//insert deals
					order tttmporder=preorder;
					order ttmporder=tmporder;
					ttmporder.quantity=min(tmporder.quantity,preorder.quantity);
					ttmporder.price=preorder.price;
					tttmporder.quantity=min(tmporder.quantity,preorder.quantity);
					if (people.find(ttmporder.name)==people.end()){
						priority_queue<order,vector<order>,comp>  ppqq;
						ppqq.push(ttmporder);
						people.insert(pair<string,priority_queue<order,vector<order>,comp> >(ttmporder.name,ppqq));
					}
					else{
						people.find(ttmporder.name)->second.push(ttmporder);
					}
					if (people.find(tttmporder.name)==people.end()){
						priority_queue<order,vector<order>,comp>  pppqq;
						pppqq.push(tttmporder);
						people.insert(pair<string,priority_queue<order,vector<order>,comp> >(tttmporder.name,pppqq));
					}
					else{
						people.find(tttmporder.name)->second.push(tttmporder);
					}
					//insert 2 people
					if (verbose==1){
						cout<<preorder.name<<" purchased "<<ttmporder.quantity<<" shares of "<<tmporder.equity<<" from "<<tmporder.name<<" for $"<<preorder.price<<"/share"<<endl;
					}
					totaltrade=totaltrade+preorder.price*ttmporder.quantity;
					int tmptt=preorder.price*ttmporder.quantity/100;
					commission_fee=commission_fee+2*tmptt;
					tmporder.quantity=tmporder.quantity-ttmporder.quantity;
					preorder.quantity=preorder.quantity-ttmporder.quantity;
					trade++;
					share=share+ttmporder.quantity;
					if (preorder.quantity>0){
						currorder.find(tmporder.equity)->second.currbuyorder.push(preorder);	
					}		
					if (itt->second.currbuyorder.size()>0) preorder=itt->second.currbuyorder.top();
				}
				if ((tmporder.quantity>0)&&(tmporder.duration!=0)){	
					currorder.find(tmporder.equity)->second.currsellorder.push(tmporder);
				}//insert remain		
					
			}
			else {
			if (tmporder.duration!=0){
				map<string,equities>::iterator currorderit;
				currorderit=currorder.find(tmporder.equity);
				if (currorderit==currorder.end()){
					equities tmpeq;	
					if (tmporder.sell==1){
						tmpeq.currsellorder.push(tmporder);
					}
					else if(tmporder.buy==1){
						tmpeq.currbuyorder.push(tmporder);
					}
					currorder.insert(pair<string,equities>(tmporder.equity,tmpeq));	
				}
				else {
					if (tmporder.sell==1){
						currorderit->second.currsellorder.push(tmporder);	
					}
					else if(tmporder.buy==1){
						currorderit->second.currbuyorder.push(tmporder);
					}	
				}	
			}
			else if(tmporder.duration==0){
				equities tmpeq;
				currorder.insert(pair<string,equities>(tmporder.equity,tmpeq));		
				}

			}
		}
	}// loop end
	if ((median==1)&&(deals.size()!=0)){
				map<string,priority_queue<int> >::iterator it;
				for (it=deals.begin();it!=deals.end();++it){
					priority_queue<int> tmppqint=it->second;
					int med;
				//	cout<<it->first<<" "<<tmppqint.size()<<endl;

					int tmpttt=tmppqint.size();

					if (tmppqint.size()%2==0){
						for (int i=1;i<tmpttt/2;i++){
							//cout<<tmppqint.top()<<endl;
							tmppqint.pop();	
						}
						int tmpa=tmppqint.top();
						tmppqint.pop();
						int tmpb=tmppqint.top();
						med=(tmpa+tmpb)/2;
					}
					else {
						for (int i=1;i<=tmpttt/2;i++){
							tmppqint.pop();	
						//	cout<<tmppqint.top()<<endl;
						}
						med=tmppqint.top();	
					}
					cout<<"Median match price of "<<it->first<<" at time "<<currtime<<" is $"<<med<<endl;	
				}	
			}//cout median
			if ((midpoint==1)&&(currorder.size()!=0)){
				map<string,equities>::iterator itt=currorder.begin();
				while(itt!=currorder.end()){
					
					if ((itt->second.currsellorder.size()==0)||(itt->second.currbuyorder.size()==0)){
						cout<<"Midpoint of "<<itt->first<<" at time "<<currtime<<" is undefined"<<endl;	
					}
					else {
						int tmpt=itt->second.currsellorder.top().price+itt->second.currbuyorder.top().price;
						cout<<"Midpoint of "<<itt->first<<" at time "<<currtime<<" is $"<<tmpt/2<<endl;
					}
				itt++;
				}	
			}//cout midpoint 
		//cout midpoint and median again
	cout<<"---End of Day---"<<endl;
	cout<<"Commission Earnings: $"<<commission_fee<<endl;
	cout<<"Total Amount of Money Transferred: $"<<totaltrade<<endl;
	cout<<"Number of Completed Trades: "<<trade<<endl;
	cout<<"Number of Shares Traded: "<<share<<endl;
	//end of day
	if (transfer==1){
		for (map<string,priority_queue<order,vector<order>,comp> >::iterator peopleit=people.begin();peopleit!=people.end();peopleit++){
			int sell=0;int buy=0;
			int money=0;
			order peopleorder;
			while(peopleit->second.size()>0){
				peopleorder=peopleit->second.top();
				if (peopleorder.sell==1) {sell=sell+peopleorder.quantity;money=money+peopleorder.quantity*peopleorder.price;}
				else if (peopleorder.buy==1){buy=buy+peopleorder.quantity;money=money-peopleorder.quantity*peopleorder.price;}
				peopleit->second.pop();
			}	
			cout<<peopleit->first<<" bought "<<buy<<" and sold "<<sell<<" for a net transfer of $"<<money<<endl;
		}		
	
	}
	if (tttt==1){	
		for (int i=0;i<tttequity.size();i++){
				int time1=-1;int time2=-1; int profit=-2147483647;
				int sell=-1;int buy=-1;
				map<string,vector<order> >::iterator allorderit=allorder.find(tttequity[i]);
				for (int i=0;i<allorderit->second.size();i++){
					if (allorderit->second[i].sell==1){
						if (sell==-1) sell=i;
						if (allorderit->second[i].price<allorderit->second[sell].price) sell=i;
					}
					if (allorderit->second[i].buy==1){
						if (buy==-1) buy=i;
						if ((sell!=-1)&&(allorderit->second[i].price-allorderit->second[sell].price>profit)){
							profit=allorderit->second[i].price-allorderit->second[sell].price;
							time1=allorderit->second[sell].time;
							time2=allorderit->second[i].time;
						}
					}
				}
				cout<<"Time travelers would buy "<<tttequity[i]<<" at time: "<<time1<<" and sell it at time: "<<time2<<endl;
		

		//	cout<<tttequity[i]<<endl;
		}
	}






	



/*	//=================
	map<string,equities>::iterator currorderit;
	order tmporder;
		for (currorderit=currorder.begin();currorderit!=currorder.end();currorderit++){
			while(currorderit->second.currsellorder.size()!=0){
				tmporder=(currorderit->second).currsellorder.top();
				currorderit->second.currsellorder.pop();
				cout<<tmporder.time<<" "<<tmporder.name<<" "<<tmporder.buy<<" "<<tmporder.sell<<" "<<tmporder.equity<<" "<<tmporder.price<<" "<<tmporder.quantity<<" "<<tmporder.duration<<" "<<tmporder.id<<endl; 
			}
			while(currorderit->second.currbuyorder.size()!=0){
				tmporder=currorderit->second.currbuyorder.top();
				currorderit->second.currbuyorder.po
				p();
				cout<<tmporder.time<<" "<<tmporder.name<<" "<<tmporder.buy<<" "<<tmporder.sell<<" "<<tmporder.equity<<" "<<tmporder.price<<" "<<tmporder.quantity<<" "<<tmporder.duration<<" "<<tmporder.id<<endl; 
			}	
		}	
	//==========test===*/


}
