#!/bin/bash
ifconfig | grep '^\t'ether | awk '{print $2}' 
