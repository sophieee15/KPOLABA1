int main() {
    int n;
    cin >> n;
int str[7];
    for (int i = 0; i < 7; ++i) {
        cin >> str[i];
    }

    int day = 0;
    int str2 = 0;
while (str2 < n) {
        str2 += str[day];
        if (str2 >= n) {
            cout << day + 1 << endl; 
            return 0;
        }
        day = (day + 1) % 7; 
    }
return 0;
}
