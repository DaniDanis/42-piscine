#!/bin/sh

id -Gn $FT_USER | tr -t ' ' ',' | cat -e
