#!/bin/bash
ar rc liball.a | gcc -c *c
ranlib liball.a
