#include <iostream>

using namespace std;

int main() {
	
	// Input N & M 
    int N, M;
    cout << "Masukan Nilai Input seperti di soal: " << endl;
    cin >> N >> M;
 
// Soal bilangan bulat

    // Input ABC
    int ABC[3];
    for (int i = 0; i < 3; i++){
        cin>>ABC[i];
    }

    // Output
    int count = 0;
    for (int x = N; x <= M; x++){
        if (x % ABC[0] == 0 && x % ABC[1] != 0 && x % ABC[2] != 0){
            count ++;
        }else if(x % ABC[1] == 0 && x % ABC[0] != 0 && x % ABC[2] != 0){
            count ++;
        }else if(x % ABC[2] == 0 && x % ABC[0] != 0 && x % ABC[1] != 0){
            count ++;
        }
    }
    cout<<count<<endl;

    cin.get();
	return 0;
}
