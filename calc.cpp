#include <iostream>
#include <fstream>

using namespace std;

	class Calculus {
		private:
			int scoreCount;

		public:
			Calculus(int a){};
			void welcomeScreen();
			void trigIdentities();
			void derivates();
			void anti_derivatives();

	};

	void Calculus::welcomeScreen() {
		cout << "																	" << endl;
		cout << "*******************************************************************" << endl;
		cout << "Welcome! this little program will help you practice some Formulas, " << endl;
		cout << "derivates, and anti-derivatives!. Try to score as high as possible!" << endl;
	}

	void Calculus::trigIdentities() {

		string arr[] = { "tanx", "cscx", "secx" };
		string arr2[] = { "sinx/cosx", "1/sinx", "1/cosx" };
		string answer;

		cout << "Please enter the correct ansers for the following Trig Identites." << endl;
		for( int i = 0; i < 3; i++ ) {
			cout << arr[i] << " = ";
			cin >> answer;
			if( arr2[i] == answer ) {
				cout << "Correct! You earned 1 point."<< endl;
				scoreCount++;
			}
			else cout << "Wrong!" << endl;

		}
		cout << "You have " << scoreCount << " points in total." << endl;

	}//end trigIdentities

	void Calculus::derivates() {
		cout << "These are derivates!" << endl;
	}//end of derivatives

	void Calculus::anti_derivatives(){
		cout << "These are anti-derivatives!" << endl;
	}//end of anti_derivatives

	int main() {

		int userInput;

		Calculus calc(0);

		calc.welcomeScreen();

		cout << "What would you like to review? Please choose one option" << endl;
		cout << "Press 1 for derivates, 2 for Anti-Derivaties or 3 for Trig Identities: ";
		cin >> userInput;

		switch( userInput ) {
			case 1:
				calc.derivates();
				break;
			case 2:
				calc.anti_derivatives();
				break;
			case 3:
				calc.trigIdentities();
				break;
			default:
				cout << "That is not a correct answer. Please try again." << endl;
			//default: cout << endl;
		}//end of switch
		//cooment
	}//end main