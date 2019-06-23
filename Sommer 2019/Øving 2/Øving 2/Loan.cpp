#include "Loan.h"
#include "std_lib_facilities.h"
#include "math.h"
vector<int> calculateSeries(int loan,int avd, int interest) {
	vector<int> ans;
	int loanLeft = loan;
	int amountToBeSubtracted;
	for (int i = 0; i < avd; i++) {
		int inter = (interest * loanLeft)/100;
		amountToBeSubtracted = loan / avd + inter;
		ans.push_back(amountToBeSubtracted);
		loanLeft = loanLeft - amountToBeSubtracted;
	}
	return ans;
}

vector<int> calculateAnnuity(int loan, int avd, int interest) {
	vector<int> ans;
	int amountToBeSubtracted = static_cast<int>(loan * interest / 100 / (1 - pow(1 + interest / 100.0, -avd)));
	for (int i = 0; i < avd; i++) {
		ans.push_back(amountToBeSubtracted);
	}
	return ans;
}