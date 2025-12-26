class Solution {
public:
    int bestClosingTime(string customers) {
     int ycount=0;
     for(int i=0;i<customers.size();i++){
        if(customers[i]=='Y')ycount++;
     }
     int index=customers.size();
     int ncount=0;
     int pcount=INT_MAX;
     for(int i=0;i<customers.size();i++){
        if(customers[i]=='Y'){
           int count=ycount+ncount;
            if(pcount>count){
                index=i;
                pcount=count;
                cout<<pcount<<" "<<i<<"\n";
            }
               ycount--;

        }
        else{
           
            int count=ycount+ncount;
            if(pcount>count){
                index=i;
                pcount=count;
              cout<<pcount<<" "<<i<<"\n";
            }
            ncount++;
           
        }
        
        
     }
     cout<<ncount<<" ";
     if(pcount<=ncount)
     return index;
     return customers.size();


        
    }
};