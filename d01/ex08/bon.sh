ldapsearch -LLL -Q "sn=*bon*" sn | sed -n '/sn:/p' | wc -l | sed 's/ //g'
