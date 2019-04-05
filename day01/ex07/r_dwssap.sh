#!/bin/sh
cat /etc/passwd | grep -v '#' | sed '1d' | awk "NR%2==0" | cut -d ':' -f1 | head -n "$((FT_LINE2 - 1))" | tail -n "$((FT_LINE2 - $FT_LINE1 + 1))" | rev | sort -r | tr '\n' ' ' | sed 's/ /, /g' | rev | sed 's/,/./' | sed 's/ //' | rev | tr -d '\n'
