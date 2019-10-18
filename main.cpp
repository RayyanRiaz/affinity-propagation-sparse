#include <cstdio>
#include <cstdlib>
#include <vector>
#include "ap.h"
using namespace std;

// test
int main(int argc, char** argv)
{
  float prefType = 1;
  if (argc >= 2) {
    prefType = atof(argv[1]);

  }
  vector<int> examplar = affinityPropagation(stdin, prefType);
  for (size_t i = 0; i < examplar.size(); ++i) {
    printf("%d ", examplar[i]);
  }
  puts("");
  return 0;
}
