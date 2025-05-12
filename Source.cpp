#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    vector<string> quotes = {
        "The way to get started is to quit talking and begin doing.– Walt Disney",
"Success is not final, failure is not fatal: It is the courage to continue that counts. – Winston Churchill",
"Don't watch the clock; do what it does.Keep going. – Sam Levenson",
"Your limitation—it's only your imagination. – Anonymous",
"Hardships often prepare ordinary people for an extraordinary destiny. – C.S.Lewis",
"Don't let yesterday take up too much of today. – Will Rogers",
"It's not whether you get knocked down; it's whether you get up. – Vince Lombardi",
"Believe you can and you're halfway there. – Theodore Roosevelt",
"Act as if what you do makes a difference.It does. – William James",
"The only limit to our realization of tomorrow will be our doubts of today. – Franklin D.Roosevelt",
"If you're going through hell, keep going. – Winston Churchill",
"Opportunities don't happen. You create them. – Chris Grosser",
"Don't wait. The time will never be just right. – Napoleon Hill",
"Dream big and dare to fail. – Norman Vaughan",
"Do what you can with all you have, wherever you are. – Theodore Roosevelt",
"Start where you are. Use what you have. Do what you can. – Arthur Ashe",
"I never dreamed about success. I worked for it. – Estée Lauder",
"Success seems to be connected with action. Successful people keep moving. – Conrad Hilton",
"You define your own life. Don't let other people write your script. – Oprah Winfrey",
"Happiness is not something ready made. It comes from your own actions. – Dalai Lama",
"Do one thing every day that scares you. – Eleanor Roosevelt",
"Everything you've ever wanted is on the other side of fear. – George Addair",
"Success usually comes to those who are too busy to be looking for it. – Henry David Thoreau",
"Work like there is someone working 24 hours a day to take it away from you. – Mark Cuban",
"The future depends on what you do today. – Mahatma Gandhi",
"Don't count the days, make the days count. – Muhammad Ali",
"Stay hungry, stay foolish. – Steve Jobs",
"The harder you work for something, the greater you'll feel when you achieve it. – Anonymous",
"Push yourself, because no one else is going to do it for you. – Anonymous",
"You are never too old to set another goal or to dream a new dream. – C.S. Lewis",
"You miss 100% of the shots you don't take. – Wayne Gretzky",
"Great things never come from comfort zones. – Anonymous",
"Go the extra mile. It's never crowded there. – Wayne Dyer",
"The man who has confidence in himself gains the confidence of others. – Hasidic Proverb",
"Don't be pushed around by the fears in your mind. Be led by the dreams in your heart. – Roy T. Bennett",
"You don't need to be perfect to inspire others. Let people get inspired by how you deal with your imperfections. – Anonymous",
"Be so good they can’t ignore you. – Steve Martin",
"Success is not how high you have climbed, but how you make a positive difference to the world. – Roy T. Bennett",
"Don't stop until you're proud. – Anonymous",
"The best way to predict the future is to create it. – Peter Drucker",
        "The only way to do great work is to love what you do. – Steve Jobs",
        "Success is not final, failure is not fatal: It is the courage to continue that counts. – Winston Churchill",
        "Do what you can, with what you have, where you are. – Theodore Roosevelt",
        "Believe you can and you're halfway there. – Theodore Roosevelt",
        "Act as if what you do makes a difference. It does. – William James"
    };

    // Seed random generator
    srand(time(0));

    // Pick a random quote
    string quote = quotes[rand() % quotes.size()];

    // Save to file
    ofstream file("C:\\Users\\voidyash\\Desktop\\QUOTE (OPEN IT).txt");  // Change path if needed
    if (file.is_open()) {
        file << quote;
        file.close();
    }
    else {
        cerr << "Error: Could not open file!" << endl;
    }

    return 0;
}
