#!/bin/bash

# set these differently to run different tests
executable="bin/cp3.mike.exe"
userbase="users"
venuebase="venues"
activitybase="activities"
attendancebase="attendance"
subdir="samples"
extension=".txt"

if test "$#" -ne 1; then
	echo "============"
        echo "Instructions"
	echo "============"
	echo "  1. Place the four input files in a test directory under \"samples\""
	echo "     (or alter the script to reflect the top level subdir  you choose)"
	echo "  2. Name them \"venues.txt\", \"users.txt\", "
	echo "               \"activities.txt\", and \"attendance.txt\""
	echo "    (or alter the script to reflect the names you choose)"
	echo "  3. Run $0 with one argument that names the test directory."
	echo ""
	echo "So if you run:" 
	echo ""
        echo "   $0 $sampledir"
	echo ""
	echo "the script will run:"
	echo ""
        echo "   $executable $subdir/$1/$venuebase$extension \\"
	echo "          $subdir/$1/$userbase$extension \\"
	echo "          $subdir/$1/$activitybase$extension \\"
	echo "          $subdir/$1/$attendancebase$extension"
	exit
fi

exec="$executable $subdir/$1/$venuebase$extension $subdir/$1/$userbase$extension  $subdir/$1/$activitybase$extension $subdir/$1/$attendancebase$extension"

#echo "Running: " 
#echo ""
#echo "$exec"
#echo ""

$exec
