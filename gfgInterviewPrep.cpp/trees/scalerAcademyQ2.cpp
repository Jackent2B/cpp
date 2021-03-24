int NoofZeroes(string s){
    //cout<<s<<" ";
    int firstOccur=-1;
    int lastOccur=-1;
    for(int i=0;i<s.length(); i++){
        if(firstOccur==-1){
            if(s[i]=='1')    
                firstOccur= i;
        }
        if(s[i]=='1')
            lastOccur = i;
    }
    
    //cout<<firstOccur << " "<<lastOccur<<endl;
    
    if(firstOccur == lastOccur || firstOccur==-1 || lastOccur==-1  )
        return 0;
    
    int count = 0;
    for(int k=firstOccur; k<lastOccur; k++){
        if(s[k]=='0')
            count++;
    }
    return count;
}

vector<int> Solution::solve(string A, vector<vector<int> > &B) {
    
    vector <int> res;
    
    int arr[2]={0};
    
    for(int i=0;i<B.size();i++){
           arr[0]=B[i][0];
           arr[1] = B[i][1]; 
    string temp = A.substr(arr[0]-1,(arr[1] - arr[0]+1) );
    int r=NoofZeroes(temp);
    res.push_back(r);
    }
    return res;
}