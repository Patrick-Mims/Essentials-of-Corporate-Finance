#include <iostream>
/* create a menu
 * 1.definition
 * page 55 chapter 3
 */

using namespace std;

void
formula(double & ca, double & cl, double & cr)
{
  cr = (ca / cl);
}

int
main(void)
{
  double current_assets = 0, current_liabilities = 0, current_ratio;

  cout << endl << "Current Assets: $";
  cin >> current_assets;

  cout << "Current Liabilities: $";
  cin >> current_liabilities;

  formula(current_assets, current_liabilities, current_ratio);

  cout << "Current Ratio: $" << current_ratio << endl;

  return 0;
}
