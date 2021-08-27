#!/bin/bash
find . -name "*.sh" | sed 's/\.sh//;s/\.\///' | rev | cut -d '/' -f 1 | rev
