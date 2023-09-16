# How does make files work

## Table of contents

1. General aspects
2. Rules
3. Variables
4. Wildcards

## General aspects

!Important! Command 'make' does run the first rule from the file

## Rules
### Format

``` Makefile
targets: dependencies
    cmd
    cmd
    cmd
```

### Description

targets: list of file names. it may act as a label

dependencies: list of file names. they have to exist in order to apply the rule

cmd: list of commands

## Variables

### Declaration

``` Makefile
VAR := file1 file2 # standard
or
VAR = file3 file4
```

### Reference variable

``` Makefile
echo $(x) # standard
or
echo ${x}
```

## Wildcards

$@ - for target name

$? - dependencies newer than the target

$^ - all dependencies
