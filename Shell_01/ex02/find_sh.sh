#!/bin/sh

find . -iname '*.sh' -printf "%f\\n" | sed 's/\.sh$//'
