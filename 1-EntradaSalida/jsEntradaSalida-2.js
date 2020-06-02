/*Debemos lograr tomar un nombre con 'prompt' 
y luego mostrarlo por 'alert' al presionar el botón  'mostrar'*/
function mostrar()
{
	var nombreIngresado;

	nombreIngresado=prompt("Ingrese su nombre: ");
	console.log(nombreIngresado);

	alert("nombre ingresado es: "+nombreIngresado);
	console.log(nombreIngresado);
}

