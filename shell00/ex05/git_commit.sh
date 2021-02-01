#!/bin/bash
git log -n5 | grep ^commit  | sed 's/commit//g' | sed 's/ //g'

