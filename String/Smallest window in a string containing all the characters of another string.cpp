int min_l=INT_MAX;
        int fi=-1;
        
        for(int i=0;i<s.size();i++){
            int cnt=0;
            vector<int> hash(256,0);
            
            for(int j=0;j<p.size();j++)hash[p[j]]++;
            for(int j=0;j<s.size();j++){
                if(hash[s[j]]>0){
                    cnt++;
                    hash[s[j]]--;
                }
            
            
            if(cnt==p.size()){
                if(min_l>j-i+1){
                    min_l=j-i+1;
                    fi=i;
                }
                break;
            }
            } 
            
        }
        return s.substr(0,min_l);