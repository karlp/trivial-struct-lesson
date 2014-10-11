
#ifndef COMMON_H
#define COMMON_H

#define ARRAY_LENGTH(a)	(sizeof (a) / sizeof (a)[0])

struct table_entry {
	int key;
	char *label;
};

static const struct table_entry entries[] = {
	{ 42, "ho ho ho"},
	{ 99, "decls go to headers"},
	{ 68, "impls shouldn't be here"},
};

#endif
