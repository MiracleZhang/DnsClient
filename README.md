# DnsClient

Code from https://github.com/notatestuser/dnsclient.git. Thank notatestuser.

Add ios platform.

A DNS client with support for querying A, CNAME, NS, MX, PTR and AAAA records.
Platform: win32, ios. Android need ndk, please see ios and win32.

parse with dns server.

result like:

Looking up www.sina.com using 114.114.114.114...
Response received - no error
/--- Question Sections (1)	---/
www.sina.com             A     IN    
/--- Answer Sections (8)	---/
www.sina.com             CNAME IN    37      us.sina.com.cn    
us.sina.com.cn           CNAME IN    55      news.sina.com.cn  
news.sina.com.cn         CNAME IN    55      jupiter.sina.com.cn
jupiter.sina.com.cn      CNAME IN    56      auriga.sina.com.cn
auriga.sina.com.cn       A     IN    56      61.172.201.237    
auriga.sina.com.cn       A     IN    56      61.172.201.195    
auriga.sina.com.cn       A     IN    56      61.172.201.194    
auriga.sina.com.cn       A     IN    56      61.172.201.239 

domain:www.sina.com
dns server:114.114.114.114

