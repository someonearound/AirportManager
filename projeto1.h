#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define AP_ID_LENGTH 4
#define AP_COUNTRY_LENGTH 51
#define AP_CITY_LENGTH 31
#define FLIGHT_CODE_LENGTH 7
#define MAX_AP 40
#define AIRPORTS 1
#define FLIGHTS 0
#define MAX_FLT 30000
#define MAX_FLT_DURATION 12
#define MAX_CAP 100
#define MIN_CAP 10
#define MINS_IN_YEAR 365 * 24 * 60
#define MINS_IN_DAY 24 * 60

typedef struct {
	char id[AP_ID_LENGTH];
	char country[AP_COUNTRY_LENGTH];
	char city[AP_CITY_LENGTH];
} airport;

typedef struct {
	int h;
	int min;
	int d;
	int mth;
	int y;
} timestamp;

typedef struct {
	char code[FLIGHT_CODE_LENGTH];
	char origin[AP_ID_LENGTH];
	char destin[AP_ID_LENGTH];
	timestamp dep_ts;
	timestamp dura;
	int cap;
} flight;

extern int global_airport_amount;
extern airport global_airport_list[];
/* extern char global_ap_id_list[][AP_ID_LENGTH]; */

/* PROTOTYPES */


void add_airport(char[], char[], char[]);
airport find_airport(char[]);
void print_ap_info(airport);
void sort_airports();
int is_upper(char[]);
int is_airport(char[]);
void exec_l();
void exec_a();
int command_listener();
