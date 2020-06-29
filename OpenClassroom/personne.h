typedef struct Personne Personne;

struct Personne
{
  char nom[100];
  char prenom[100];
  char adresse[100];

  int age;
  int genre; /* Booléen : 1 = garçon, 0 = fille */
};

