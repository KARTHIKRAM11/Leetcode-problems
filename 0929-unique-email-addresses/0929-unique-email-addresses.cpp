class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;
        for(const string& email : emails)
        {
            string local , domain;
            int index = email.find('@');
            local = email.substr(0,index);
            domain = email.substr(index);

            int plus = local.find('+');
            if(plus != string::npos) local = local.substr(0,plus);

            local.erase(remove(local.begin() , local.end() , '.') , local.end());

            string newemail = local+domain;
            uniqueEmails.insert(newemail);
        }
        return uniqueEmails.size();
    }
};