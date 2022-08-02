String passw ()
{
    return "password";
}

String ssid ()
{
    return "ssid";
}

String HTML()
{
	String html = "<!DOCTYPE html>\n";
	html += "<html lang=\"es\">\n";
	html += "<head>\n";
	html += "\t<meta charset=\"UTF-8\">\n";
	html += "\t<title>Inicio</title>\n";
	html += "\t<style>\n";
	html += "\t\tbody {\n";
	html += "\t\t\tbackground-color: #0D1117;\n";
	html += "\t\t\tcolor: #ddd;\n";
	html += "\t\t\tfont-family: Arial, Helvetica, sans-serif;\n";
	html += "\t\t\ttext-align: center;\n";
	html += "\t\t}\n";
	html += "\t</style>\n";
	html += "</head>\n";
	html += "<body>\n";
	html += "\t<h1>Servidor local funcionando</h1>\n";
	html += "\t<p>Conectado</p>\n";
	html += "</body>\n";
	html += "</html>";
	return html;
}