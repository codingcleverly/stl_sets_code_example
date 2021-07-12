#include <iostream>
#include <iterator>
#include <set>
using namespace std;

class Pizza {
  public:
    string name;
    int size;

    bool operator < (const Pizza& rhs) const
    {
      return size < rhs.size;
    }

    bool operator > (const Pizza& rhs) const
    {
      return size > rhs.size;
    }
};

int main()
{

  //empty set container
  //set<int, less<int>> mySet = {10, 20, 30, 40, 50, 10, 20, 30, 40};


  set<Pizza, greater<>> mySet = {{"Cheese Pizza", 13}, {"Veggie Pizza", 9}, {"Supreme Pizza", 14}};

  for(const auto& element: mySet)
  {
    cout<<element.name<<" "<<element.size<<endl;
  }

  return 0;
}
