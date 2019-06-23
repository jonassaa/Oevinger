#include "std_lib_facilities.h"
#include "Source.h"
#include "Loan.h"


int main() {
	//int sumOfOneAndTwo = add(1, 2);
	//cout << "1 + 2 = " << sumOfOneAndTwo << '\n';
	//cout << "2 + 2 = " << add(2, 2) << '\n';
	//inputIntegersAndPrintProduct();
	//inputIntegersAndPrintSum();
	int what = 13;
	if (isOdd(what)) {
		cout << "the number " << what << " is odd." << endl;
	}
	printHumanReadableTime(46784);
	vector<int> loanSeries = calculateSeries(10000, 10, 5);
	for (int i = 0; i < 10; i++) {
		cout << loanSeries[i] << " ";
	}
	cout << endl;

	vector<int> loanAnnuity = calculateAnnuity(10000, 10, 5);
	for (int i = 0; i < 10; i++) {
		cout << loanAnnuity[i] << " ";
	}
	cout<<endl;

}
