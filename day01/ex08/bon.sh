#!/bin/sh
ldapsearch -Q surname="*bon*" | grep -c "sn:"
