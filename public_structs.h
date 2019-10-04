#ifndef public_structs_H
#define public_structs_H

#define ALGORITHM_NAIVE 0
#define ALGORITHM_GROUP 1
#define ALGORITHM_BINARY 2
#define ALGORITHM_LINEAR 3
#define ALGORITHM_NAIVE_OPTIMISTIC 4

typedef struct elem
{
	struct elem *next;
	struct elem *prev;
	int set;
	size_t delta;
	char pad[32]; // up to 64B
} Elem;

struct
config
{
	int rounds, cal_rounds;
	int stride;
	int cache_size;
	int buffer_size;
	int cache_way;
	int cache_slices;
	int threshold;
	int algorithm;
	int strategy;
	int offset;
	int con, noncon; // only for debug
	void (*traverse)(Elem*);
	double ratio;
	int verbose, no_huge_pages, calibrate, retry, backtracking, ignoreslice, findallcolors, findallcongruent, verify, debug, conflictset;
};

#endif /* public_structs_H */
