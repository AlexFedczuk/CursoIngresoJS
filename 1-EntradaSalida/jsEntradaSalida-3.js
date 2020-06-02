/*Debemos lograr tomar un dato por 'ID'
y luego mostrarlo por 'Alert' al presionar el botón  'mostrar'*/
function mostrar()
{
	var nombreIngresado;

	nombreIngresado=document.getElementById('elNombre').value;

	if(nombreIngresado=="Rena")
	{
		alert("Alto bigote de leche!");
	}else
	{
		if(nombreIngresado=="Alex")
		{
			alert("Puto el que lee =]");
		}
	}

	//alert("El nombre ingresado es: "+nombreIngresado);
}


