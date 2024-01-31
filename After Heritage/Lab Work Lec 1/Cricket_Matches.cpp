#include<iostream>
using namespace std;

class Cricket {
	public:
	    int getTotalOvers()
		{
	        return 50;
	    }
	};

class T20Match : public Cricket {
	public:
	    int getTotalOvers()
		{
	        return 20;
	    }
	};

class TestMatch : public Cricket {
	public:
	    int getTotalOvers()
		{
	        return 50;
	    }
	};

int main() {
    Cricket regularMatch;
    T20Match t20Match;
    TestMatch testMatch;

    cout << "Total overs in a Regular cricket match: " << regularMatch.getTotalOvers() << endl;
    cout << "Total overs in a T-20 match: " << t20Match.getTotalOvers() << endl;
    cout << "Total overs in a Test match: " << testMatch.getTotalOvers() << endl;

    return 0;
}

