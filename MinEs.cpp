#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(false), cout.tie(0);
    
	string s;
    cin >> s;
    
    int t2[4][4] {
		{34,22,13,33},
		{32,42,14,44},
		{41,43,23,24},
		{11,21,31,12}
	};
	int t1[4][4] {
		{12,43,33,32},
		{31,41,34,44},
		{23,11,21,42},
		{24,14,22,13}
	};
	
	for (int i = 0; i < s.length(); i+=2) {
		int c1=(s[i] - 'A') + 1,c2 = (s[i+1] - 'A') +1;
		int res= c1*10+c2;
		bool cek = 1;
		
		for (int r = 0; r < 4 && cek; r++) {
			for (int c = 0; c < 4 && cek; c++) {
				if (t2[r][c] == res) {
					res = (r+1) *10+c+1;
					cek=0;
				}
			}
		}
		cek=1;
		for (int r=0; r < 4 && cek; r++) {
			for (int c = 0; c < 4 && cek; c++) {
				if (t1[r][c] == res) {
					cout << char('A' + r) << char('A'+c);
					cek = 0;
					break;
				}
			}
		}
	}
    return 0;
}

