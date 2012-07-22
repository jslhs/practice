/*
 * main.c
 *
 *  Created on: Jul 22, 2012
 *      Author: snowcat
 */

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#define APP_NAME	"magicbox"
#define APP_VER		"v1.0"

static struct option magicbox_options[] = {
		{"ddw", required_argument, 0, 0},
		{"help", no_argument, 0, 0}
};

void usage()
{

}

int main(int argc, char *argv[])
{
	getopt(argc, argv, "h::");

	return 0;
}
