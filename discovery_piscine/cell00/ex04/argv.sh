#!/bin/bash

# Vérifier si aucun argument n'a été fourni
if [ $# -eq 0 ]; then
  echo "No arguments supplied"
  exit 0
fi

# Afficher les arguments
if [ $# -ge 1 ]; then
  echo "$1"
fi

if [ $# -ge 2 ]; then
  echo "$2"
fi

if [ $# -ge 3 ]; then
  echo "$3"
fi

exit 0
