
#Find type -file which name ends with .sh
#if true --> exec --> basename
#basename strips directory information and suffixes from file names i.e. it prints the file name NAME with any leading directory components removed.
#-s, – -suffix = SUFFIX option : This option removes a trailing suffix SUFFIX,such as a file extension.


find . -type f -iname '*.sh' -exec basename -s '.sh' {} +
