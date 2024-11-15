#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{

  double largeur_pneu = 195;  // [mm]
  double ratio = 55;          // []
  double diametre_jante = 15; // ["]
  double distance = 38.;      // [km]
  const double mm_to_m = 0.001;
  const double pouce_to_m = 0.0254;
  const double km_to_m = 1000.;

  if (argc != 3)
  {
    puts("error num args");
    return 1;
  }
  int ret = sscanf(argv[1], "%lf/%lfR%lf", &largeur_pneu, &ratio, &diametre_jante);
  ret += sscanf(argv[2], "%lf", &distance);
  if (ret != 4)
  {
    puts("error val args");
    return 1;
  }
  double diametre_roue = 2. * ratio * largeur_pneu * mm_to_m / 100. + diametre_jante * pouce_to_m;
  double perimetre = M_PI * diametre_roue;
  double nb_tour = (distance * km_to_m) / perimetre;

  printf("largeur=%lf\n", largeur_pneu);
  printf("diametre roue=%lf\n", diametre_roue);
  printf("perimetre roue=%lf\n", perimetre);
  printf("nb tours=%lf\n", nb_tour);

  return 0;
}