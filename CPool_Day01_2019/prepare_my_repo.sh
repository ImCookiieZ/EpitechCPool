#!/bin/bash
blih -u karl-erik.stoerzel@epitech.eu repository create $1
blih -u karl-erik.stoerzel@epitech.eu repository setacl $1 ramassage-tek r
blih -u karl-erik.stoerzel@epitech.eu repository getacl $1
