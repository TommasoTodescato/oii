#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve(int t) {
    int N, M, Q;
    cin >> N >> M >> Q;

    string S;
    cin >> S;

    // Aggiungi codice se vuoi

    string risposta;

    for (int i = 0; i < Q; i++) {
        char type;
        int a, b;
        cin >> type >> a >> b;

        if (type == 's') {
            // Aggiungi codice...

        } else {
            // Aggiungi altro codice...

            risposta.push_back('A');
        }
    }


    cout << "Case #" << t << ": " << risposta << endl;
}

int main() {
    // se preferisci leggere e scrivere da file
    // ti basta decommentare le seguenti due righe:

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++) {
        solve(t);
    }

    return 0;
}