#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int balance, n;
    cin >> balance >> n;
    vector<pair<string, int>> trans;
    vector<int> commit_bal;
    vector<int> commit_pos;
    string op;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == "read") {
            cout << balance << endl;
        } else if (op == "credit" || op == "debit") {
            int x; cin >> x;
            if (op == "credit") {
                balance += x;
                trans.push_back({"credit", x});
            } else {
                balance -= x;
                trans.push_back({"debit", x});
            }
        } else if (op == "abort") {
            int x; cin >> x;
            int cnt = 0, idx = -1;
            for (int j = 0; j < trans.size(); j++) {
                if (trans[j].first == "credit" || trans[j].first == "debit") {
                    cnt++;
                    if (cnt == x) {
                        idx = j;
                        break;
                    }
                }
            }
            if (idx != -1) {
                bool committed = false;
                if (!commit_pos.empty())
                    for (int cp : commit_pos)
                        if (idx < cp) committed = true;
                if (!committed) {
                    if (trans[idx].first == "credit") balance -= trans[idx].second;
                    else balance += trans[idx].second;
                    trans.erase(trans.begin() + idx);
                }
            }
        } else if (op == "commit") {
            commit_bal.push_back(balance);
            commit_pos.push_back(trans.size());
        } else if (op == "rollback") {
            int x; cin >> x;
            if (x <= commit_bal.size() && x > 0) {
                balance = commit_bal[x - 1];
                if (x < commit_bal.size()) {
                    commit_bal.resize(x);
                    commit_pos.resize(x);
                }
                while (trans.size() > 0 && trans.size() > commit_pos.back())
                    trans.pop_back();
            }
        }
    }
    return 0;
}
