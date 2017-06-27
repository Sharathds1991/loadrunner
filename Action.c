Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("prov=3a643480-d173-d300-43f6-b0de0c5cd877; DOMAIN=stackoverflow.com");

	web_add_cookie("_ga=GA1.2.1789282355.1490600989; DOMAIN=stackoverflow.com");

	web_add_cookie("__qca=P0-714341462-1490600989507; DOMAIN=stackoverflow.com");

	web_url("stackoverflow.com", 
		"URL=https://stackoverflow.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}