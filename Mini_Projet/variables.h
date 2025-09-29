#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define BLUE    "\033[1;34m"
#define YELLOW  "\033[1;33m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define RESET   "\033[0m"
#define MAX 100 

typedef struct {

    int Id ; 
    char Avion_Model[30];
    int capacite;
    char status[30];
    char Date_Entre[30];
}Avions_struct ;

Avions_struct Avion[MAX] ;

int nbr_total_avion = 0  ; 