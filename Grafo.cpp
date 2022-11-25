#include "Grafo.h"

Grafo::Grafo()
{
	subirfotos();
}

void Grafo::inicioNovela()
{

	Sprite imagen1, imagen2, imagen3, imagen4, imagen5, imagen6, imagen7, imagen8, imagen9, imagen10, imagen11, imagen12, imagen13, imagen14, imagen15, imagen16, imagen17, imagen18, imagen19, imagen20, imagen21, imagen22, imagen23, imagen24, imagen25, imagen26, imagen27, imagen28, imagen29, imagen30, imagen31, imagen32, imagen33, imagen34, imagen35, imagen36, imagen37, imagen38, imagen39, imagen40, imagen41;
	imagen2.setPosition(20, 20);
	imagen3.setPosition(10, 10);
	imagen1.setTexture(photo1);
	imagen2.setTexture(photo2);
	imagen3.setTexture(photo3);
	imagen4.setTexture(photo4);
	imagen5.setTexture(photo5);
	imagen6.setTexture(photo6);
	imagen7.setTexture(photo7);
	imagen8.setTexture(photo8);
	imagen9.setTexture(photo9);
	imagen10.setTexture(photo10);
	imagen11.setTexture(photo11);
	imagen12.setTexture(photo12);
	imagen13.setTexture(photo13);
	imagen14.setTexture(photo14);
	imagen15.setTexture(photo15);
	imagen16.setTexture(photo16);
	imagen17.setTexture(photo17);
	imagen18.setTexture(photo18);
	imagen19.setTexture(photo19);
	imagen20.setTexture(photo20);
	imagen21.setTexture(photo21);
	imagen22.setTexture(photo22);
	imagen23.setTexture(photo23);
	imagen24.setTexture(photo24);
	imagen25.setTexture(photo25);
	imagen26.setTexture(photo26);
	imagen27.setTexture(photo27);
	imagen28.setTexture(photo28);
	imagen29.setTexture(photo29);
	imagen30.setTexture(photo30);
	imagen31.setTexture(photo31);
	imagen32.setTexture(photo32);
	imagen33.setTexture(photo33);
	imagen34.setTexture(photo34);
	imagen35.setTexture(photo35);
	imagen36.setTexture(photo36);
	imagen37.setTexture(photo37);
	imagen38.setTexture(photo38);
	imagen39.setTexture(photo39);
	imagen40.setTexture(photo40);
	imagen41.setTexture(photo41);

	RenderWindow window(sf::VideoMode(700, 500), "Twenty Five Twenty One | K-drama");
	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(imagen1);
		window.display();

		char op;
		cout << "Heddo, como siempre fue a la tienda de comics\n";
		cout << "Pero se encontro con una gran sorpresa... \n\tHay un nuevo empleado en la tienda de comics\n";
		cout << "Ingresa una tecla para iniciar: ";
		cin >> op;
		
		cout << "Pedir el numero del nuevo empleado?(SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen40);
			window.display();
			cout << "\n\tHa pedido el numero del nuevo empleado";
		}
		if (op == 'C')
		{
			cout << "\n\tYi jin (empleado) y Heddo se quedan platicando en la tienda: ";
			window.clear();
			window.draw(imagen41);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tYi jin: ";
		cout << "\n\t- ¿Quisieras ir conmigo a la discoteca? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen4);
			window.display();
			cout << "\n\tAceptaste salir con Yi Jin: ";
			cout << "\n\tBailan hasta el cansancio, disfrutan de la noche";
		}
		if (op == 'C') 
		{
			cout << "\n\tPasa el siguiente dia: ";
			cout << "\n\tTe encuentras con Yi Jin en el parque cercano a tu casa";
			cout << "\n\tHeddo saluda a Yi jin: ";
			window.clear();
			window.draw(imagen5);
			window.display();
		}		
		else {
			cout << "ERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tYi jin: ";
		cout << "\n\t Heddo se quede en el parque con Yi Jin? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			cout << "\n\tHeddo y Yi Jin notan que hay una tuberia rota en el parque";
			cout << "\n\tVan a verla y se divierten un poco: ";
			window.draw(imagen6);
			window.display();

		}
		if (op == 'C') {
			window.clear();
			window.draw(imagen7);
			window.display();
			cout << "\n\tYi Jin acompaña a Heddo a su casa, para que llegue bien";
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t Heddo esta en la escuela";
		cout<<"\n\tHeddo deberia quedarse con su mejor amiga despues de clases? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen8);
			window.display();
			cout << "\n\tPlatican y pasan un dia agradable juntas: ";
		}
		if (op == 'C')
		{
			cout << "\n\tHeddo y su mejor amiga se van a casa: ";
			window.clear();
			window.draw(imagen9);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t ---Siguiente dia---";
		cout << "\n\tHeddo esta en la escuela";
		cout << "\n\tHeddo deberia quedarse despues de clases? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen10);
			window.display();
			cout << "\n\tPractica esgrima con su mejor amiga: ";
		}
		if (op == 'C')
		{
			cout << "\n\tHeddo y su mejor amiga van a comer ";
			cout << "\n\tPlatican de sus sueños mientras comen: ";
			window.clear();
			window.draw(imagen12);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t ---Siguiente dia---";
		cout << "\n\tHeddo se queda hasta tarde en la escuela";
		cout << "\n\tHeddo deberia tomar el autobus? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen13);
			window.display();
			cout << "\n\tHeddo se encuentra a Yi Jin en el autobus ";
		}
		if (op == 'C')
		{
			cout << "\n\t ---Heddo se va caminando hacia su casa---";
			cout << "\n\t Heddo se encuentra a Yi Jin en la calle";
			window.clear();
			window.draw(imagen14);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tHeddo se deberia quedar con su entrenadora hasta tarde? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen15);
			window.display();
			cout << "\n\tLa entrenadora expresa que tiene hambre ";
			cout << "\n\tLa entrenadora invito a Heddo a cenar; ";
		}
		if (op == 'C')
		{
			cout << "\n\tHeddo se va a su casa";
			window.clear();
			window.draw(imagen16);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t---1 semana despues----";
		cout << "\n\tYi jin y Heddo se encuentran en la parada del autobus: ";
		cout << "\n\t- ¿Le preguntas como le ha ido? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen17);
			window.display();
			cout << "\n\tYi Jin invita a cenar a Heddo para poder contarle como le ha ido ";
		}
		if (op == 'C')
		{
			cout << "\n\tSe van a casa juntos y se quedan un momento fuera de la casa de Heddo ";
			window.clear();
			window.draw(imagen18);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tHeddo acepta que esta enamorada de Yi Jin";
		cout << "\n\t Heddo deberia acercarce mas a Yi Jin? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			cout << "\n\t Heddo y invita a Yi Jin a platicar por la noche";
			cout << "\n\t Yi Jin se nota un poco mas interesado en Heddo ";
			window.draw(imagen19);
			window.display();

		}
		if (op == 'C') {
			window.clear();
			window.draw(imagen20);
			window.display();
			cout << "\n\tHeddo busca a Yi Jin en redes sociales para stalkearlo";
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t--- En un dia lluvioso ---";
		cout << "\n\tHeddo deberia marcarle a Yi Jin para que vaya a buscarla? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen21);
			window.display();
			cout << "\n\tYi Jin llega y se van juntos";
			cout << "\n\tYi Jin aprovecha para abrazar a Heddo: ";
		}
		if (op == 'C')
		{
			window.clear();
			window.draw(imagen22);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t ---Siguiente dia---";
		cout << "\n\tHeddo se lastima el pie gracias al esgrima";
		cout << "\n\tHeddo deberia hablarle a Yi jin para que la ayude a llegar a casa? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen23);
			window.display();
			cout << "\n\tYi Jin llega por ella y la ayuda a caminar amarrandose el pie lastimado con el suyo: ";
		}
		if (op == 'C')
		{
			cout << "\n\tHeddo se va sola";
			window.clear();
			window.draw(imagen24);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << " \n\t---Siguiente dia---";
		cout << "\n\tHeddo quiere confesar sus sentimientos a Yi Jin";
		cout << "\n\tHeddo deberia hacerlo? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen25);
			window.display();
			cout << "\n\tHeddo busca a Yi Jin en su casa ";
		}
		if (op == 'C')
		{
			cout << "\n\t ---Heddo se va caminando hacia su casa---";
			cout << "\n\t Para la mala suerte de Heddo, se encuentra a Yi Jin ";
			window.clear();
			window.draw(imagen26);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tHeddo deberia besar a Yi Jin (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen27);
			window.display();
			cout << "Heddo le dice a Yi Jin todo lo que siente ";
			cout << " ---Yi jin aprovecha para besarla---";
		}
		if (op == 'C')
		{
			cout << "\n\t Yi Jin esta viendo una foto de Heddo";
			cout << "\n\t Yi Jin acepta que esta enamorado de Heddo";
			window.clear();
			window.draw(imagen28);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t---1 semana despues----";
		cout << "\n\tYi jin invita a Heddo a su casa";
		cout << "\n\t- Heddo deberia de ir? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen29);
			window.display();
			cout << "\n\tHeddo intenta besar a Yi Jin: ";
			cout << "\n\t--MOMENTO EMOCIONANTE--- ";
		}
		if (op == 'C')
		{
			cout << "\n\tYi Jin insiste en que vaya Heddo";
			window.clear();
			window.draw(imagen30);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\tHeddo esta con Yi Jin en el puente cercano a su hogar";
		cout << "\n\t Heddo deberia quedarse Yi Jin a platicar? (SI=B, NO=C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			cout << "\n\t Heddo y Yi Jin por fin hablan de sus sentimientos";
			cout << "\n\t ---AMBOS ESTAN ENAMORADOS---";
			window.draw(imagen31);
			window.display();
		}
		if (op == 'C') {
			window.clear();
			window.draw(imagen32);
			window.display();
			cout << "\n\tHeddo queda un momento a ver el arcoiris con Yi Jin, para luego irse ";
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t--- Ya son novios Heddo y Yi Jin---";
		cout << "\n\tHeddo deberia quedarse en casa de Yi Jin a dormir? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen33);
			window.display();
			cout << "\n\tYi Jin y Heddo duermen juntos";
		}
		if (op == 'C')
		{
			window.clear();
			window.draw(imagen34);
			window.display();
			cout << "\n\tHeddo rechaza y se queda en su habitacion escribiendo poemas";
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t---Siguiente dia---";
		cout << "\n\tYi jin deberia ir a la entrevista de trabajo para el puesto de noticiero? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen35);
			window.display();
			cout << "\n\tLe dan el puesto a Yi Jin";
		}
		if (op == 'C')
		{
			cout << "\n\tYi Jin sigue trabajando en la tienda de comics";
			window.clear();
			window.draw(imagen36);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}

		window.clear();
		window.draw(imagen2);
		window.draw(imagen3);
		window.display();
		cout << "\n\t---Siguiente dia---";
		cout << "\n\tHeddo quiere presentarle a sus amigos Yi Jin";
		cout << "\n\tHeddo deberia hacerlo? (SI = B, NO = C)";
		cin >> op;
		if (op == 'B') {
			window.clear();
			window.draw(imagen37);
			window.display();
			cout << "\n\tHeddo lleva a Yi Jin a comer con sus amigos ";
		}
		if (op == 'C')
		{
			cout << "\n\t ---Heddo sale con su mejor amiga a un centro comercial---";
			window.clear();
			window.draw(imagen38);
			window.display();
		}
		else {
			cout << "\n\tERROR";
			window.clear();
			window.draw(imagen11);
			window.display();
		}
		window.clear();
		window.draw(imagen39);
		window.display();
		cout << "\n\tHeddo y Yi Jin se van de viaje juntos";
	}
}

void Grafo::subirfotos()
{
	// cargando las imagenes (esto se puede hacer un for, pero me dio hueva ponerlo xd)

	if (!photo1.loadFromFile("img/img1.jpg")) {
		cout << "Error a el cargar la imagen 1";
	}
	if (!photo2.loadFromFile("img/img2.png")) {
		cout << "Error a el cargar la imagen 2";
	}
	if (!photo3.loadFromFile("img/img3.jpg")) {
		cout << "Error a el cargar la imagen 3";
	}
	if (!photo4.loadFromFile("img/img4.jpeg")) {
		cout << "Error a el cargar la imagen 4";
	}
	if (!photo5.loadFromFile("img/img5.jpeg")) {
		cout << "Error a el cargar la imagen 5";
	}
	if (!photo6.loadFromFile("img/img6.jpeg")) {
		cout << "Error a el cargar la imagen 6";
	}
	if (!photo7.loadFromFile("img/img7.jpeg")) {
		cout << "Error a el cargar la imagen 7";
	}
	if (!photo8.loadFromFile("img/img8.jpeg")) {
		cout << "Error a el cargar la imagen 8";
	}
	if (!photo9.loadFromFile("img/img9.jpeg")) {
		cout << "Error a el cargar la imagen 9";
	}
	if (!photo10.loadFromFile("img/img10.jpeg")) {
		cout << "Error a el cargar la imagen 10";
	}
	if (!photo11.loadFromFile("img/img11.jpeg")) {
		cout << "Error a el cargar la imagen 11";
	}
	if (!photo12.loadFromFile("img/img12.jpeg")) {
		cout << "Error a el cargar la imagen 112";
	}
	if (!photo13.loadFromFile("img/img13.jpeg")) {
		cout << "Error a el cargar la imagen 13";
	}
	if (!photo14.loadFromFile("img/img14.jpeg")) {
		cout << "Error a el cargar la imagen 14";
	}
	if (!photo15.loadFromFile("img/img15.jpeg")) {
		cout << "Error a el cargar la imagen 15";
	}
	if (!photo16.loadFromFile("img/img16.jpeg")) {
		cout << "Error a el cargar la imagen 16";
	}
	if (!photo17.loadFromFile("img/img17.jpeg")) {
		cout << "Error a el cargar la imagen 17";
	}
	if (!photo18.loadFromFile("img/img18.jpeg")) {
		cout << "Error a el cargar la imagen 18";
	}
	if (!photo19.loadFromFile("img/img19.jpeg")) {
		cout << "Error a el cargar la imagen 29";
	}
	if (!photo20.loadFromFile("img/img21.jpeg")) {
		cout << "Error a el cargar la imagen 20";
	}
	if (!photo21.loadFromFile("img/img22.jpeg")) {
		cout << "Error a el cargar la imagen 21";
	}
	if (!photo22.loadFromFile("img/img22.jpeg")) {
		cout << "Error a el cargar la imagen 22";
	}
	if (!photo23.loadFromFile("img/img23.jpeg")) {
		cout << "Error a el cargar la imagen 23";
	}
	if (!photo24.loadFromFile("img/img24.jpeg")) {
		cout << "Error a el cargar la imagen 24";
	}
	if (!photo25.loadFromFile("img/img25.jpeg")) {
		cout << "Error a el cargar la imagen 25";
	}
	if (!photo26.loadFromFile("img/img26.jpeg")) {
		cout << "Error a el cargar la imagen 26";
	}
	if (!photo27.loadFromFile("img/img27.jpeg")) {
		cout << "Error a el cargar la imagen 27";
	}
	if (!photo28.loadFromFile("img/img28.jpeg")) {
		cout << "Error a el cargar la imagen 28";
	}
	if (!photo29.loadFromFile("img/img29.jpeg")) {
		cout << "Error a el cargar la imagen 29";
	}
	if (!photo30.loadFromFile("img/img30.jpeg")) {
		cout << "Error a el cargar la imagen 30";
	}
	if (!photo31.loadFromFile("img/img31.jpeg")) {
		cout << "Error a el cargar la imagen 31";
	}
	if (!photo32.loadFromFile("img/img32.jpeg")) {
		cout << "Error a el cargar la imagen 32";
	}
	if (!photo33.loadFromFile("img/img33.jpeg")) {
		cout << "Error a el cargar la imagen 33";
	}
	if (!photo34.loadFromFile("img/img34.jpeg")) {
		cout << "Error a el cargar la imagen 34";
	}
	if (!photo35.loadFromFile("img/img35.jpeg")) {
		cout << "Error a el cargar la imagen 35";
	}
	if (!photo36.loadFromFile("img/img36.jpeg")) {
		cout << "Error a el cargar la imagen 36";
	}
	if (!photo37.loadFromFile("img/img37.jpeg")) {
		cout << "Error a el cargar la imagen 37";
	}
	if (!photo38.loadFromFile("img/img38.jpeg")) {
		cout << "Error a el cargar la imagen 38";
	}
	if (!photo39.loadFromFile("img/img39.jpeg")) {
		cout << "Error a el cargar la imagen 39";
	}
}