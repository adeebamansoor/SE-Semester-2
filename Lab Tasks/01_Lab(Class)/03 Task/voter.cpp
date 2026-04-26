#include "Voter.h"

int main()
{
    Voter v;
    v.setData();
    if(v.isEligible())
        cout << "Eligible for Voting" << endl;
    else
        cout << "Not Eligible for Voting" << endl;
    return 0;
}
