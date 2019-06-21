#include "Loan.h"
#include "std_lib_facilities.h"
vector<int> calculateSeries(int loan,int avd, int interest) {
	vector<int> ans;
	int loanLeft = loan;
	for (int i = 0; i < 10; i++) {
		int inter = (interest / 100) * loanLeft;
		int amountToBeSubtracted = loan / avd + inter;
		ans.push_back(amountToBeSubtracted);
		loanLeft = loanLeft - amountToBeSubtracted;
	}
	return ans;
}