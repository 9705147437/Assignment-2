#include <iostream>
using namespace std;

int main()
{
    string cities[8] = {
      "Amsterdam",
      "Kiev",
      "Zurich",
      "Prague",
      "Barcelona",
      "Berlin",
      "Skopje",
      "Paris",
    };
    int arr[8][8] = {
      {0,0,0,0,1,0,0,0},
      {0,0,0,1,0,0,0,0},
      {1,0,0,0,0,0,0,0},
      {0,0,1,0,0,0,0,0},
      {0,0,0,0,0,1,0,0},
      {1,1,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,1},
      {0,0,0,0,0,0,1,0}
    };
    int index = 1;
    int traverse[6] = {0};
    int visited[8] = {0};
    visited[1] = 1;
    traverse[0] = 1;
    int k = 1;
    while(k < 6) {
      int j = 0;
      while(arr[index][j] == 0 or visited[j] == 1) {
        j++;
      }
      visited[j] = 1;
      index = j;
      traverse[k++] = index;
    }
    for(int i = 0; i < 5; i++) {
      cout<<cities[traverse[i]]<<"->";
    }
    cout<<cities[traverse[5]];
    return 0;
}

