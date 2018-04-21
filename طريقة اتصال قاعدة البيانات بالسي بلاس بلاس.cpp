// BANK PROGRAM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <boost\timer.hpp>
using namespace boost;
#include <string>
#include <mysql.h>

int main()
{

	char *server = "localhost";
	char *username = "root";
	char *password = "toor";
	char *database = "bank";

	MYSQL *conn;
	MYSQL_RES *res;
	MYSQL_ROW  row;
	
	conn = mysql_init(NULL);

	if (! mysql_real_connect(conn, server, username, password, database, 0, NULL, 0)) {
		cout << stderr << "\n" << mysql_errno(conn);
		return -1;
	}
	system("pause");
    return 0;
}

