#include<iostream>
using namespace std;

class songs {
    private:
        string title;
        string albulm;
        string singer;

    public:
        songs() {}

        void setTitle(string title) {
            this->title = title;
        }
        string getTitle() {
            return title;
        }

        void setAlbulm(string albulm) {
            this->albulm = albulm;
        }
        string getAlbulm() {
            return albulm;
        }

        void setSinger(string singer) {
            this->singer = singer;
        }
        string getSinger() {
            return singer;
        }

        void showData() {
            
            cout << title << "\t";
            cout << albulm << "\t";
            cout << singer << "\n";
        }
};
int main() {

    string _title, _albulm, _singer;
    songs song[3];

    for (int i = 0; i < 3; i++) {
        cout << "\n--------song " << (i + 1) << "---------\n";
        cout << "Enter title: ";
        getline(cin, _title);
        cout << "Enter albulm: ";
        getline(cin, _albulm);
        cout << "Enter singer: ";
        getline(cin, _singer);

        song[i].setTitle(_title);
        song[i].setAlbulm(_albulm);
        song[i].setSinger(_singer);
    }
    cout << "\n-----------All songs------------\n";
    for (int i = 0; i < 3; i++) {
        song[i].showData();
    }

        return 0;
}