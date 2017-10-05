#include<stdio.h>
void input(int numOfStars, int starNumLimit, const int voidUniverse) {

  while ( numOfStars > starNumLimit) {
    if ( numOfStars < starNumLimit && numOfStars > voidUniverse) {
      printf("Please enter a star number in between 1 and 100 \n");
      scanf("%d", &numOfStars);
      break;
    }
  }
}

int main() {
  int numOfStars;
  int starNumLimit = 100;
  const int voidUniverse = 0;
  int starNumIndex = 0;
  int starsToMake = 0;

  printf("Please enter the number of stars you want to have in your universe: \n");
  scanf("%d", &numOfStars);

  input(numOfStars, starNumLimit, voidUniverse);

  for (starNumIndex = 0; starNumIndex <= numOfStars; ++starNumIndex) {
      if ( starNumIndex == voidUniverse ) {
        printf("Stage %d: universe is empty \n", starNumIndex);
      } else {
        printf("Stage %d, %d Stars in universe!\n",starNumIndex, starsToMake);
      }
    for ( starsToMake = 0; starsToMake <= 1 + starNumIndex; ++starsToMake) {
      printf("*");
      printf(" ");
    }
  }
  return 0;
}
