#!/bin/bash

INIT="START"

if [[ $(systemctl list-units --type=target | grep poweroff.target   || systemctl list-units --type=target | grep reboot.target ) == 0 ]]
then
INIT="STOP"
fi

for localfile in /etc/local.d/*
do
#	if [[ ! -x $localfile ]]
#	then
#		continue
#	fi

	if [[ "_${localfile/*./}" != "_" ]]
	then
		if [[ "$INIT" == "START" ]]
		then
			if [[ "${localfile/*./}" == "start" ]]
            		then
				echo ":: Running Start File : $localfile"
				$localfile
  		           fi
	         fi
	
		if [[ "$INIT" == "STOP" ]]
		then
			if [[ "${localfile/*./}" == "stop" ]]
			then
				echo ":: Running Stop File : $localfile"
	                        $localfile
			fi
		fi
	fi
done
