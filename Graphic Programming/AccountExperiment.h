#include <tuple>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class AccountExperiment
{
public:
    float balance;
    string accountName;
    string accountType;
    int accountID;
    float interestRate;
    vector<tuple<string, string, int, float>> accountDetails;

    AccountExperiment()
    {
        interestRate = 0;
        accountDetails = { make_tuple(accountName, accountType, accountID, balance)};
    }

    void PrintAccountDetails(const int& accountID)
    {
        for (const auto& detail : accountDetails)
        {
            cout << "Account name: " << get<0>(detail) << ", Account type: " << get<1>(detail) << ", ID: " << get<2>(detail) 
                 << ", Balance: " << get<3>(detail) << endl;
        }
    }

    void SetBalance(const float& amount)
    {
        balance = amount;
    }

    void AddBalance(const float& amount)
    {
        balance += amount;
    }

    void SetInterestRate(float rate)
    {
        interestRate = rate;
    }

    void ApplyInterestRate()
    {
        balance *= interestRate;
    }
};
