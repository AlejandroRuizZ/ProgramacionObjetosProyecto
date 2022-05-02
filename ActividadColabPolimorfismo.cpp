#include <iostream>
using namespace std;

class Video{
public:
Video();
Video(string,string,string,int,int,int);
void CalificaVideo(int);
virtual void MuestraDatos();

private:
string Tipovideo;
string nombreVid;
string Genero;
int calificacion;
int ArnoDeLanz;
int Duracion;
};

Video::Video(string _tipo,string _nombre,string _genero,int _calificacion,int _arno,int _duracion)
{
Tipovideo=_tipo;
nombreVid=_nombre;
Genero=_genero;
calificacion=_calificacion;
 ArnoDeLanz=_arno;
 Duracion=_duracion;

}

void Video::CalificaVideo(int _calificacion){
calificacion=_calificacion;
}
void Video::MuestraDatos(){
    cout<<"Video de tipo: "<<Tipovideo<<endl;
    cout<<"Nombre: "<<nombreVid<<endl;
    cout<<"Genero: "<<Genero<<endl;
    cout<<"Calificacion: "<<calificacion<<endl;
    cout<<"Duracion: "<<Duracion<<endl;
    cout<<"Arno de Lancamiento: "<<ArnoDeLanz<<endl;

}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++

class Serie:public Video{
    public:
    Serie(string,string,string,int,int,int,int);
    void MuestraDatos();
    private:
    int capitulos;
};

Serie::Serie(string _tipo,string _nombre,string _genero,int _calificacion,int _arno,int _duracion,int _capitulos):Video(_tipo,_nombre,_genero,_calificacion,_arno,_duracion){
    capitulos=_capitulos;
}

void Serie::MuestraDatos(){
    Video::MuestraDatos();
    cout<<"Capitulos: "<<capitulos<<endl;
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
class Pelicula:public Video{
    public:
    Pelicula(string,string,string,int,int,int,string);
    void MuestraDatos();
    private:
    string nominaciones;
};

Pelicula::Pelicula(string _tipo,string _nombre,string _genero, int _calificacion, int _arno, int _duracion, string _nominaciones):Video(_tipo,_nombre,_genero,_calificacion,_arno,_duracion){
    nominaciones=_nominaciones;
}
void Pelicula::MuestraDatos(){
    Video::MuestraDatos();
    cout<<"La Pelicula es: "<<nominaciones<<endl;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main(){
int decision;
    int elecionvid;
    decision=0;
    elecionvid=0;
    int contador=0;
    while(contador==0){
        cout<<"Hola Bienvienido. Oprima 1 para Calificar o  2 para Consular datos."<<endl;
        cin>>decision;


        Pelicula Pelicula1("Pelicula","Capitan America: El primer vengador","Superheroes",10,2011,124,"Oscar a Mejor actuaci�n");
        Pelicula Pelicula2("Pelicula","Enredados","Animacion",10,2010,100, "Oscar a Mejor animaci�n");

        Serie Serie1("Serie","Love, Death + Robots","Animacion para adultos",9,2019,6-17,26);
        Serie Serie2("Serie", "El mundo oculto de Sabrina", "Terror", 9, 2018,50,36);
        Serie Serie3("Serie","El mundo de Riley","Adolescente", 10, 2014, 22, 72);

        if (decision==1){
            cout<<"Presione 1 para calificar la Pelicula 1. Presione 2 para calificar la Pelicula 2. Presione 3 para calificar la serie 1. Presione 4 para calificar la serie 2. Presione 5 para calificar la serie 3."<<endl;
            cin>>elecionvid;

            if(elecionvid==1){
                cout<<"Ingrese la Calificacion que desea asignarle al video."<<endl;
                int cali;
                cin>>cali;
                Pelicula1.CalificaVideo(cali);
                }

            if(elecionvid==2){
                cout<<"Ingrese la Calificacion que desea asignarle al video."<<endl;
                int cali;
                cin>>cali;
                Pelicula2.CalificaVideo(cali);
                }

            if(elecionvid==3){
                cout<<"Ingrese la Calificacion que desea asignarle al video."<<endl;
                int cali;
                cin>>cali;
                Serie1.CalificaVideo(cali);
                }

            if(elecionvid==4){
                cout<<"Ingrese la Calificacion que desea asignarle al video."<<endl;
                int cali;
                cin>>cali;
                Serie2.CalificaVideo(cali);
                }
            if(elecionvid==5){
                cout<<"Ingrese la Calificacion que desea asignarle al video."<<endl;
                int cali;
                cin>>cali;
                Serie3.CalificaVideo(cali);
                }

            }

        if (decision==2){
            cout<<"Presione 1 para consultar los datos de la pelicula 1. Presione 2 para consultar los datos de la pelicula 2. Presione 3 para consultar los datos de la serie 1. Presione 4 para consultar los datos de la serie 2. Presione 5 para consultar los datos de la serie 3."<<endl;
            cin>>elecionvid;

            if(elecionvid==1){
                Pelicula1.MuestraDatos();
                }

            if(elecionvid==2){
                Pelicula2.MuestraDatos();
                }

            if(elecionvid==3){
                Serie1.MuestraDatos();
                }

            if(elecionvid==4){
                Serie2.MuestraDatos();
                }

             if(elecionvid==5){
                Serie3.MuestraDatos();
                }
            }



cout<<"Oprima 0 si desea hacer otro movimiento.Oprima 1 si este no es el caso.";
cin>>contador;
    }
}

