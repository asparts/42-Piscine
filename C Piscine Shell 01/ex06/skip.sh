#If ordinal record of current line is % 2 == 0, print
ls -l | awk "NR % 2 != 0"
