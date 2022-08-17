#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "rlutil.h"
#include <fstream>
using namespace rlutil;
using namespace std;
#include "funciones.h"

void carteles()
{
    int matriz[5][114]
    {
        {0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,1,0,0,0,0,1,0,1,1,0,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,0,1,0,1,0,1,1,0,0,1,1,1,0,0,0,1,1,1,0,1,0,0,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,0,0,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,0,0,1,1,1},
        {0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,1,0,0,0,0,0,1,1,0,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1},
        {0,0,0,0,0,0,0,1,1,1,1,0,1,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,0,1,1,0,0,1,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,1,0,1,0,0,0,0,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,1,1,0,1,0,1,0,1,0,1},
        {0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,1,0,1,1,0,0,0,1,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,1,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,1},
        {0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,1,1,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,1,1,1,0,0,0,1,0,1,0,1,1,1,0,0,0,1,1,1,0,1,0,1,0,1,0,1,0,1,0,0,0,1,1,0,0,0,1,1,1,0,1,1,1,0,1,0,1,0,1,1,0,0,1,1,1}
    };
    for (int x=0; x<5; x++)
    {
        for (int y=0; y<114; y++)
        {
            if (matriz[x][y]==1)cout <<char(219);
            else cout << " ";
        }
        cout << endl ;
    }
}
void menu()
{
    rlutil::cls();
    carteles();
    rlutil::locate(41,7);
    cout << "ELIGA LA OPCION QUE USTED DESEA"<< endl;
    rlutil::locate(8,6);
    cout << "______________________________________________________________________________________________________" << endl;
    rlutil::locate(50,9);
    cout << "   JUGAR     " << endl;
    rlutil::locate(50,10);
    cout << "ESTADISTICAS" << endl;
    rlutil::locate(50,11);
    cout << "  CREDITOS   " << endl;
    rlutil::locate(50,12);
    cout << "   SALIR    " << endl;
}

void creditos()
{
    rlutil::cls();
    cout << " _____________________________________________________" << endl;
    cout << "|                   CREDITOS                          |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|                 ALUMNOS Y LEGAJOS                   |"<< endl;
    cout << "|                                                     |"<< endl;
    cout << "|                 REAL  NICOLAS,    26080             |"<< endl;
    cout << "|                 RODRIGUEZ CARLOS, 26091             |"<< endl;
    cout << "|                 BARBOZA  SERGIO,  27066             |"<< endl;
    cout << "|                 ARAMBURU IGNACIO, 24463             |"<< endl;
    cout << "|                                                     |" << endl;
    cout << "|                                                     |" << endl;
    cout << "|_____________________________________________________|" << endl ;
}


void inicio()
{
    int maximo;
    bool bandera=0;
    char nombremax[10];
    char sorteo1[10];
    char sorteo2[10];
    int opcion=1,y=0;
    int puntos1,puntos2;
    puntos1=puntos2=0;
    rlutil::hidecursor();
    do
    {
        rlutil::cls();
        menu();

        rlutil::locate(48,9+y);
        std::cout<<(char)175<<std::endl;
        rlutil::locate(63,9+y);
        std::cout<<(char)174<<std::endl;


        int key=rlutil::getkey();


        ///cls();
        switch (key)
        {
        case 14:
            rlutil::locate(43,9+y);
            std::cout<< " "<<std::endl;
            rlutil::locate(56,9+y);
            std::cout<<" "<<std::endl;
            y--;
            if(y<0)
            {
                y=0;
            }
            break;
        case 15:// empieza el juego
            rlutil::locate(43,9+y);
            std::cout<< " "<<std::endl;
            rlutil::locate(56,9+y);
            std::cout<<" "<<std::endl;
            y++;
            if(y>3)
            {
                y=3;
            }
            break;
        case 1: // estadisticas
            switch(y)
            {

            case 0:
                cls();
                jugar(puntos1,puntos2,sorteo1,sorteo2);
                break;
            case 1:
                cls();

                if(bandera==0)
                {
                    if(puntos1>puntos2)
                    {
                        cout << "---------Estadisticas:------------"<<endl;
                        cout<<" el ganador con mas puntos es: ";
                        for(int x=0; x<10; x++)
                        {
                            nombremax[x]=sorteo1[x];
                        }

                        cout<<nombremax<<endl;
                        maximo=puntos1;
                        bandera=1;
                        cout<<" Con :"<<maximo<<" puntos"<<endl;
                    }
                }
                else
                {
                    if(puntos1>maximo)
                    {
                        maximo=puntos1;
                        cout << "---------Estadisticas:------------"<<endl;
                        cout<<" el ganador con mas puntos es:";
                        for(int x=0; x<10; x++)
                        {
                            nombremax[x]=sorteo1[x];
                        }

                        cout <<nombremax<<endl;

                        cout<<"Con :"<<maximo<<"puntos"<<endl;
                    }
                }
                if(bandera==0)
                {
                    if(puntos2>puntos1)
                    {
                        cout << "---------Estadisticas:------------"<<endl;
                        cout<<" El ganador con mas puntos es: ";
                        for(int x=0; x<10; x++)
                        {
                            nombremax[x]=sorteo2[x];
                        }

                        cout<<nombremax<<endl;
                        maximo=puntos2;
                        bandera=1;
                        cout<<" Con :"<<maximo<<" puntos"<<endl;
                    }
                }
                else
                {
                    if(puntos2>maximo)
                    {
                        maximo=puntos2;
                        cout << "---------Estadisticas:------------"<<endl;
                        cout<<" el ganador con mas puntos es: ";
                        for(int x=0; x<10; x++)
                        {
                            nombremax[x]=sorteo2[x];
                        }

                        cout <<nombremax<<endl;

                        cout<<" Con :"<<maximo<<" puntos"<<endl;
                    }
                }
                cin.get();
                cin.ignore();
                break;
            case 2:
                creditos();
                cin.get();
                cin.ignore();
                break;
            case 3:
                opcion=0;
                volver ();
                break;
            default:
                break;
            }
        }
    }

    while(opcion!=0);
}
bool volver ()
{
    int opcion=0;
    bool opcionCorrecta = 1;
    while (opcionCorrecta==1)
    {
        system("cls");
        cout << "|                                                     |" << endl;
        cout << "|      Usted esta a punto de salir                    |"<< endl;
        cout << "|                                                     |"<< endl;
        cout << "|      Esta seguro que desea salir?                   |"<< endl;
        cout << "|                  1. Salir                           |"<< endl;
        cout << "|                  0. Volver                          |"<< endl;
        cout << "|                                                     |" << endl;
        cout << "|                                                     |" << endl;
        cout << "|      Ingrese la opcion deseada:" ;
        cin >> opcion;
        cout << "                                                      |" ;

        if (opcion == 1)
        {
            return 0;
        }
        else if (opcion == 0)
        {
            cls() ;
            inicio();
        }
        else
        {
            system("cls");
            cout << " Ingreso una opcion no valida, vuelva a intentarlo" << endl << endl;
            cout << " Ingrese una tecla para continuar..." ;
            cin .get();
            cin.ignore();

        }
    }
}


void tirarDado(int dado[])
{
    int x;
    for(x=0; x<6; x++)
    {
        dado[x]=rand()%6 + 1;
    }
}

void jugar(int &pdvJ1, int &pdvJ2,char sorteo1[],char sorteo2[])
{
    int op ;
    int comienzo = 0;
    char nombreJ1[10],nombreJ2[10];
    int dado[6];
    int resultadoJ1[2],resultadoJ2[2];
    bool sigueJugandoJ1;
    bool sigueJugandoJ2 ;
    sigueJugandoJ1 = sigueJugandoJ2 = false ;
    cout <<"Ingrese el nombre el jugador numero 1 : "<<endl;
    cin >> nombreJ1;
    Sleep(1000);
    cout <<"Ingrese el nombre el jugador numero 2 : "<<endl;
    cin >> nombreJ2;
    Sleep(2000);
    cls();
    while (comienzo == 0)
    {
        srand(time(NULL));
        cout << "tira los dados "<< nombreJ1 << endl;
        tirarDado(dado);
        Sleep(2500);

        cout << "Dado 1: " << dado[0] << endl;
        resultadoJ1[0]=dado[0];
        tirarDado(dado);

        cout << "Dado 2: " << dado[1] << endl;
        resultadoJ1[1]= dado[1];

        cout << ".........................................................." << endl;
        Sleep(1000);

        cout << "tira los dados "<< nombreJ2 << endl;
        tirarDado(dado);
        Sleep(2500);

        cout << "Dado 1: " << dado[2] << endl;
        resultadoJ2[0]=dado[2];
        tirarDado(dado);

        cout << "Dado 2: " << dado[3] << endl;
        resultadoJ2[1]=dado[3];


        if  ( resultadoJ1[0] + resultadoJ1[1] > resultadoJ2[0] + resultadoJ2[1] )
        {
            comienzo = 1;// empieza el j1
        }

        if (resultadoJ1[0] + resultadoJ1[1] < resultadoJ2[0] + resultadoJ2[1] )
        {
            comienzo = 2; // empieza el j2
        }



        //si la suma de ambos dados es la misma para los jugadores, entonces:
        if (resultadoJ1[0] + resultadoJ1[1] == resultadoJ2[0] + resultadoJ2[1] )
        {

            // si tienen la MISMA tirada, tienen que volver a tirar.
            if  (   (resultadoJ1[0] == resultadoJ2[0] && resultadoJ1[1] == resultadoJ2[1]) ||
                    (resultadoJ1[0] == resultadoJ2[1] && resultadoJ1[1] == resultadoJ2[0]  )    )
            {
                comienzo = 0;
            }


            // Si el J1 tiene un dado mayor a los dos del J2, comienza el J1.
            if  (   (resultadoJ1[0] > resultadoJ2[0] && resultadoJ1[0] > resultadoJ2[1])  ||
                    (resultadoJ1[1] > resultadoJ2[0] && resultadoJ1[1] > resultadoJ2[1])   )
            {
                comienzo = 1;
            }

            // Si el J2 tiene un dado mayor a los dos del J1, Comienza el J2.
            if (    (resultadoJ2[0] > resultadoJ1[0] && resultadoJ2[0] > resultadoJ1[1]) ||
                    (resultadoJ2[1] > resultadoJ1[0] && resultadoJ2[1] > resultadoJ1[1])   )
            {
                comienzo = 2;
            }
        }
        if (comienzo == 0)
        {
            cout<< endl <<"MISMA TIRADA! se repite" << endl;
        }
    }
    if (comienzo == 1)
    {
        cout << "Jugador 1 gana el saque!: ";
        cout << nombreJ1;
        for(int x=0; x<10; x++)
        {
            sorteo1[x]=nombreJ1[x];
            sorteo2[x]=nombreJ2[x];
        }
        cout << endl << "--------------------------------------------------------------" << endl;
    }
    else if (comienzo == 2)
    {
        cout << "Jugador 2 gana el saque: ";
        cout << nombreJ2;

        for(int x=0; x<10; x++)
        {
            sorteo1[x]=nombreJ2[x];
            sorteo2[x]=nombreJ1[x];
        }
        cout << endl << "--------------------------------------------------------------" << endl;
    }



    Sleep(3000)   ;
    cls();

    pdvJ1 = 0;
    pdvJ2 = 0;
    int oinkJ1 = 0, oinkJ2 = 0;
    // int  flag = 1;
    bool algunoFueAlBarro = false;
    int contar1[5]= {},codicioso1=0;
    int contar[5]= {},codicioso=0;
    int lanzamientoJ1;
    int lanzamientoJ2;
    int trufasDeRondaJ1[5]= {};
    int trufasDeRondaJ2[5] = {};
    bool dosDadosJ1=true;
    bool dosDadosJ2=true;
    int trufasTotales1=0;
    int trufasTotales2=0;
    int i;
    int sumasteTrufas1=0;
    int sumasteTrufas2=0;
    bool flagporky=true ;
    bool flagporkyJ1=false ;
    bool flagporkyJ2=false ;
    for ( i = 0; i <= 1; i++)
    {
        char ingresaJ1= 'S' ;
        char ingresaJ2= 'S';
        int opcion,opcion1;
        lanzamientoJ1=lanzamientoJ2=0;
        while (ingresaJ1== 'S')

        {



            Sleep(4500) ;
            opcion = 3;//elige lanzar
            lanzamientoJ1++;
            contar[i]++;
            if (dosDadosJ1==true)   // siguen siendo 2 dados
            {


                cout << "---------------------------------------" << endl;
                cout << "RONDA NUMERO "<< i+1 << endl ;
                cout << "LANZAMIENTO #" << lanzamientoJ1 << endl;
                cout << sorteo1 << ": "<<trufasTotales1 <<" trufas acumuladas"<< endl;
                cout << "TRUFAS DE LA RONDA : " << trufasDeRondaJ1[i] << endl ;
                cout << "---------------------------------------" << endl;
                cout << "Tira los dados jugador " << sorteo1<<endl;
                tirarDado(dado);
                cout << "Dado 1: " << dado[0]<<endl;
                cout << "Dado 2: " << dado[1]<<endl;
                Sleep(1000)   ;

                // funcion porky jugador 1
                if(flagporky==true){
                    if ((dado[0]==1 && dado[1]==2 || dado [0]==2 && dado [1]==1)||(dado[0]==2 && dado[1]==3 || dado [0]==3 && dado [1]==2)||
                        (dado[0]==3 && dado[1]==4 || dado[0]==4 && dado[1]==3)||(dado[0]==4 && dado[1]==5 || dado [0]==5 && dado [1]==4)||(dado[0]==5 && dado[1]==6 || dado [0]==6 && dado [1]==5)){

                flagporkyJ1=true ;
                flagporky=false ;
                cout << "Hiciste porky!" ;
                trufasDeRondaJ1[i]+=dado[0]+dado[1];
                sumasteTrufas1+=dado[0]+dado[1];
                cout << "Sumaste " << sumasteTrufas1 << " trufas" << endl ;
                sumasteTrufas1=0;
                    }
                }

                // 2 caras distintas y ningun as
                if (dado[0]!=dado[1]&& dado[0]!=1 && dado[1]!=1)
                {
                    trufasDeRondaJ1[i]+=dado[0]+dado[1];
                    sumasteTrufas1+=dado[0]+dado[1];
                    cout << "Sumaste " << sumasteTrufas1 << " trufas" << endl ;
                    sumasteTrufas1=0;

                }
                if  (dado[0]==dado[1]&& dado[0]!=1 && dado[1]!=1)
                    /*Si las caras son iguales entre sí y no son ases.
                    Entonces el cerdo hizo un Oink y  acumula trufas por
                    el doble de la suma de las caras al total de la ronda.
                    También, está obligado a lanzar los dados una vez más. */
                {
                    opcion = 2; // esta obligado a lanzar
                    oinkJ1 += 1;
                    trufasDeRondaJ1[i]+=(dado[0] + dado[1]) *2  ;
                    sumasteTrufas1+=(dado[0] + dado[1]) *2  ;
                    cout << "Sumaste " << sumasteTrufas1 << " trufas" << endl ;
                    cout <<"hiciste oink y estas obligado a lanzar de vuelta" << endl;
                    sumasteTrufas1=0;


                }

                if   (   (dado[0]!=dado[1]&& dado[0]==1) || (dado[0]!=dado[1] && dado[1]==1) )
                    // Si las caras son distintas entre sí y hay un as entre ellas. Pierde todas
                    // las trufas que venía acumulando en la ronda actual, pierde el turno.
                {
                    opcion = 1; //pierde el turno
                    trufasDeRondaJ1[i]= {}; // Reinicia las trufas de esa ronda
                    cout <<sorteo1<<" pierde el turno y las trufas de esta ronda " << endl;

                }

                if (dado[0] + dado[1]  == 2)
                    //Si las dos caras son ases. El cerdo se hunde en el barro y pierde todas las trufas
                    //que venía acumulando en las rondas anteriores y la actual, pierde el turno.
                {
                    opcion = 1; //pierde el turno
                    trufasTotales1=0;
                    trufasDeRondaJ1[i] = {};
                    cout <<sorteo1<<" pierde el turno y se hunde en el barro " << endl;
                    algunoFueAlBarro = true;

                }
            }
            else  //este ELSE es para jugar con 3 dados/
            {
                cout << "---------------------------------------" << endl;
                cout << "RONDA NUMERO "<< i+1 << endl ;
                cout << "LANZAMIENTO #" << lanzamientoJ1 << endl;
                cout << sorteo1 << ": "<<trufasTotales1 <<" trufas acumuladas"<< endl;
                cout << "TRUFAS DE LA RONDA : " << trufasDeRondaJ1[i] << endl ;
                cout << "---------------------------------------" << endl;
                cout << "Tira los 3 dados jugador "<<sorteo1<<endl;
                cout << "Dado 1: " << dado[0]<<endl;
                cout << "Dado 2: " << dado[1]<<endl;
                cout << "Dado 3: " << dado[2]<< endl;
                Sleep(1000) ;
                // 3 dados sin ningun as
                if (dado[0]!=1 && dado[1]!=1 && dado[2]!=1)
                {
                    // en el caso de que las 3 caras sean distintas entre sí.
                    if (dado[0] != dado[1] && dado[0] != dado[2] && dado[1] != dado[2])
                    {
                        // Acumula las trufas en total
                        trufasDeRondaJ1[i]+=dado[0]+dado[1]+dado[2];
                        sumasteTrufas1+=dado[0]+dado[1]+dado[2];
                        cout << "Sumaste " << sumasteTrufas1<< " trufas" << endl ;
                        sumasteTrufas1=0;
                    }

                    // dos caras iguales, una distinta.
                    if  (  (dado[0] == dado[1] && dado[2] != dado[0]) || (dado[0] == dado[2] && dado[1] != dado[0]) || (dado[1] == dado[2] && dado[0] != dado[1]) )
                    {
                        // Elegimos que sume como trufas la cantidad de puntos de los dados.
                        trufasDeRondaJ1 [i]+= dado[0] + dado[1] + dado[2];
                        sumasteTrufas1+=dado[0] + dado[1] + dado[2];
                        cout << "Sumaste " << sumasteTrufas1<< " trufas" << endl ;
                        sumasteTrufas1=0;
                        // como la variable opcion no cambio el programa va hasta el final de este ciclo
                        // y pregunta si quiere seguir jugando

                    }
                }
                if (dado[0] == dado[1] && dado[1] == dado[2] && dado[2] != 1 )
                    //  Si las caras son iguales entre sí y no son ases. Entonces el cerdo hizo un Oink y
                    //  acumula trufas por el doble de la suma de las caras al total de la ronda. Por ejemplo: 4 y 4 → Acumula 16 trufas.
                    // También, está obligado a lanzar los dados una vez más.
                {
                    oinkJ1 +=1;
                    trufasDeRondaJ1[i]+= (dado[0] + dado[1] + dado[2])*2;
                    sumasteTrufas1+= (dado[0] + dado[1] + dado[2])*2;
                    cout << "Sumaste " <<sumasteTrufas1<< " trufas" << endl ;
                    cout <<"hiciste oink y estas obligado a lanzar de vuelta" << endl;
                    sumasteTrufas1=0;
                    opcion = 2; //esta obligado a lanzar
                }



                if  ( (dado[0] != dado[1] && dado[0] != dado[2] && dado[1] != dado[2]) && ( dado[0] == 1 || dado[1] == 1 || dado[2] == 1 )                 )
                    //  Si las caras son distintas entre sí y hay un as entre ellas. Pierde todas las trufas que
                    // venía acumulando en la ronda actual y automáticamente le cede el turno al otro cerdo.
                {
                    opcion = 1;// pierde el turno
                    trufasDeRondaJ1[i]= {} ;
                    cout << "perdes las trufas que venias acumulando de esta ronda y perdes el turno" << endl;
                    cout << "Sumaste " << trufasDeRondaJ1[i] << " trufas" << endl ;
                    sumasteTrufas1=0;

                }

                if (  (dado[0] + dado[1] == 2 && dado[2] !=1) || (dado[0] + dado[2] == 2 && dado[1] != 1) || (dado[1] + dado [2] == 2 && dado[0] != 1) )
                    //Si dos de las caras son iguales entre sí y son ases.El cerdo se hunde en el barro y pierde
                    //todas las trufas que venía acumulando de esta ronda y anteriores y pierde el turno.
                {
                    opcion = 1;// pierde el turno
                    trufasTotales1=0;
                    trufasDeRondaJ1[i] = {};
                    cout << sorteo1<<" pierde el turno,se hunde en el barro y pierde todas las trufas acumuladas " << endl;
                    algunoFueAlBarro = true;

                }

                // 3 ases,
                if (dado[0] + dado[1] + dado[2] == 3 )

                {
                    opcion = 1;// pierde el turno
                    cout <<sorteo1<<" pierde el turno,pierde las trufas acumuladas y se las envia al jugador 2 " << endl;
                    //  Aplica la misma quita de puntos que en el caso anterior pero dichos puntos se
                    // acumulan al otro cerdo en dicha ronda. )
                    trufasDeRondaJ2[i] += trufasDeRondaJ1[i];
                    trufasTotales1=0;
                    trufasDeRondaJ1[i] = {};
                }




            }
//hasta aca llega el else

            if ( ((trufasDeRondaJ1[i] >= 50 || trufasTotales1>=50) && (trufasDeRondaJ2[i] >= 50 ||   trufasTotales2>=50 )) ||  (algunoFueAlBarro == true )    )
            {
                dosDadosJ1 = false;
                dosDadosJ2 = false;

            }



            /*estos if definen quien sigue jugando
            */

            if(opcion==1) // con opcion 1 pierde el turno
            {
                ingresaJ1='N';

            }
            else if(opcion==2)   // con opcion 2 hace oink y esta obligado a jugar de vuelta
            {
                ingresaJ1='S';
            }
            else
            {

                do
                {
                    cout <<"Desea seguir tirando dados?"<<endl;
                    cout <<"S/N"<<endl;
                    cin  >>ingresaJ1;

                }
                while (ingresaJ1 != 'N' && ingresaJ1 != 'S');
            }

            Sleep(1000) ;

        }
        trufasTotales1+=trufasDeRondaJ1[i];

        while ( ingresaJ2 == 'S')

        {
            Sleep(4500) ;
            opcion1 = 3;//elige lanzar
            lanzamientoJ2++;
            contar1[i]++;
            if (dosDadosJ2==true )   // siguen siendo 2 dados
            {
                cout << "---------------------------------------" << endl;
                cout << "RONDA NUMERO: "<< i+1 << endl ;
                cout << "LANZAMIENTO #" << lanzamientoJ2<< endl;
                cout << sorteo2 << ": "<<trufasTotales2 <<" trufas acumuladas"<< endl;
                cout << "Trufas de la ronda " << trufasDeRondaJ2[i] << endl ;
                cout << "---------------------------------------" << endl;
                cout << "Tira los dados jugador : "<<sorteo2<<endl;
                tirarDado(dado);
                cout << "Dado 1: " << dado[3]<<endl;
                cout << "Dado 2: " << dado[4]<<endl;
                Sleep(1000) ;

                // funcion porky jugador 2
                if (flagporky==true){
                    if ((dado[3]==1 && dado[4]==2 || dado [3]==2 && dado [4]==1) || (dado[3]==2 && dado[4]==3 || dado [3]==3 && dado [4]==2) || (dado[3]==3 && dado[4]==4 || dado [3]==4 && dado [4]==3)
                        ||(dado[3]==4 && dado[4]==5 || dado [3]==5 && dado [4]==4)||(dado[3]==5 && dado[4]==6 || dado [3]==6 && dado [4]==5)){

                flagporkyJ2=true;
                flagporky=false ;
                cout << "¡Hiciste porky!" ;
                trufasDeRondaJ2[i]+=dado[3]+dado[4];
                sumasteTrufas2+=dado[3]+dado[4];
                cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                sumasteTrufas2=0;
                    }
                }


                // 2 caras distintas y ningun as
                if (dado[3]!=dado[4]&& dado[3]!=1 && dado[4]!=1)
                {

                    trufasDeRondaJ2[i]+=dado[3]+dado[4];
                    sumasteTrufas2+=dado[3]+dado[4];

                    cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                    sumasteTrufas2=0;
                }
                if  (dado[3]==dado[4]&& dado[3]!=1 && dado[4]!=1)
                    /*Si las caras son iguales entre sí y no son ases.
                    Entonces el cerdo hizo un Oink y  acumula trufas por
                    el doble de la suma de las caras al total de la ronda.
                    También, está obligado a lanzar los dados una vez más. */
                {
                    opcion1 = 2; // esta obligado a lanzar
                    oinkJ2 += 1;
                    trufasDeRondaJ2[i]+=(dado[3] + dado[4]) *2  ;
                    sumasteTrufas2=(dado[3] + dado[4]) *2  ;

                    cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                    sumasteTrufas2=0;
                    cout <<"hiciste oink y estas obligado a lanzar una vez mas"<< endl;
                }

                if   (   (dado[3]!=dado[4]&& dado[3]==1) || (dado[3]!=dado[4] && dado[4]==1) )
                    // Si las caras son distintas entre sí y hay un as entre ellas. Pierde todas
                    // las trufas que venía acumulando en la ronda actual, pierde el turno.
                {
                    opcion1 = 1; //pierde el turno
                    trufasDeRondaJ2[i]= {}; // Reinicia las trufas de esa ronda
                    cout <<sorteo2<<" pierde el turno y las trufas de esta ronda " << endl;

                }

                if (dado[3] + dado[4]  == 2)
                    //Si las dos caras son ases. El cerdo se hunde en el barro y pierde todas las trufas
                    //que venía acumulando en las rondas anteriores y la actual, pierde el turno.
                {
                    opcion1 = 1; //pierde el turno
                    trufasTotales2=0;
                    trufasDeRondaJ2[i] = {};
                    cout << sorteo2<< " pierde el turno y se hunde en el barro " << endl;
                    algunoFueAlBarro = true;

                }
            }
            else  //este ELSE es para jugar con 3 dados/
            {
                cout << "---------------------------------------" << endl;
                cout << "RONDA NUMERO: "<< i+1 << endl ;
                cout << "LANZAMIENTO #" << lanzamientoJ2<< endl;
                cout << sorteo2 << ": "<<trufasTotales2 <<" trufas acumuladas"<< endl;
                cout << "Trufas de la ronda " << trufasDeRondaJ2[i] << endl ;
                cout << "---------------------------------------" << endl;
                cout << "Tira los 3 dados jugador : "<<sorteo2<<endl;
                tirarDado(dado);
                cout << "Dado 1: " << dado[3]<<endl;
                cout << "Dado 2: " << dado[4]<<endl;
                cout << "Dado 3: " << dado[5]<< endl;
                Sleep(1000) ;
                // 3 dados sin ningun as
                if (dado[3]!=1 && dado[4]!=1 && dado[5]!=1)
                {
                    // en el caso de que las 3 caras sean distintas entre sí.
                    if (dado[3] != dado[4] && dado[3] != dado[5] && dado[4] != dado[5])
                    {
                        // Acumula las trufas en total
                        trufasDeRondaJ2[i]+=dado[3]+dado[4]+dado[5];
                        sumasteTrufas2+=dado[3]+dado[4]+dado[5];
                        cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                        sumasteTrufas2=0;
                    }


                    // dos caras iguales, una distinta.(ningun as)
                    if  (  (dado[3] == dado[4] && dado[5] != dado[3]) || (dado[3] == dado[5] && dado[4] != dado[3]) || (dado[4] == dado[5] && dado[3] != dado[4]) )
                    {
                        // Elegimos que sume como trufas lo acumulado en los dados.
                        trufasDeRondaJ2 [i]+= dado[3] + dado[4] + dado[5];
                        sumasteTrufas2+= dado[3] + dado[4] + dado[5];
                        cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                        sumasteTrufas2=0;
                        // como la variable opcion no cambio el programa va hasta el final de este ciclo
                        // y pregunta si quiere seguir jugando


                    }

                    if (dado[3] == dado[4] && dado[4] == dado[5] && dado[5] != 1  )
                        //  Si las caras son iguales entre sí y no son ases. Entonces el cerdo hizo un Oink y
                        //  acumula trufas por el doble de la suma de las caras al total de la ronda. Por ejemplo: 4 y 4 → Acumula 16 trufas.
                        // También, está obligado a lanzar los dados una vez más.
                    {
                        oinkJ2 +=1;
                        trufasDeRondaJ2[i]+= (dado[3] + dado[4] + dado[5])*2;
                        sumasteTrufas2+= (dado[3] + dado[4] + dado[5])*2;
                        cout << "Sumaste " << sumasteTrufas2 << " trufas" << endl ;
                        cout << "hiciste oink y estas obligado a tirar de vuelta"<< endl;
                        sumasteTrufas2=0;
                        opcion = 2; //esta obligado a lanzar
                    }


                }
                if  ( (dado[3] != dado[4] && dado[3] != dado[5] && dado[4] != dado[5]) && ( dado[3] == 1 || dado[4] == 1 || dado[5] == 1 )                 )
                    //  Si las caras son distintas entre sí y hay un as entre ellas. Pierde todas las trufas que
                    // venía acumulando en la ronda actual y automáticamente le cede el turno al otro cerdo.
                {
                    opcion1 = 1;// pierde el turno
                    trufasDeRondaJ2[i]= {} ;
                    cout << "perdes las trufas que venias acumulando de esta ronda y perdes el turno" << endl;
                    cout << "Sumaste " << trufasDeRondaJ2[i] << " trufas" << endl ;
                    sumasteTrufas2=0;

                }

                if (  (dado[3] + dado[4] == 2 && dado[5] !=1) || (dado[3] + dado[5] == 2 && dado[4] != 1) || (dado[5] + dado [4] == 2 && dado[3] != 1) )
                    //Si dos de las caras son iguales entre sí y son ases.El cerdo se hunde en el barro y pierde
                    //todas las trufas que venía acumulando de esta ronda y anteriores y pierde el turno.
                {
                    opcion1 = 1;// pierde el turno
                    trufasTotales2=0;
                    trufasDeRondaJ2[i] = {};
                    cout <<sorteo2<< "pierde el turno,se hunde en el barro y pierde todas las trufas acumuladas " << endl;
                    algunoFueAlBarro = true;

                }

                // 3 ases,
                if (dado[3] + dado[4] + dado[5] == 3 )

                {
                    opcion1 = 1;// pierde el turno
                    cout <<sorteo2<< "pierde el turno,pierde las trufas acumuladas y se las envia al jugador 2 " << endl;
                    //  Aplica la misma quita de puntos que en el caso anterior pero dichos puntos se
                    // acumulan al otro cerdo en dicha ronda. )
                    trufasDeRondaJ1[i] += trufasDeRondaJ2[i];
                    trufasTotales2=0;
                    trufasDeRondaJ2[i] = {};
                }


            }
// hasta aca llega el else

            if ( ((trufasDeRondaJ1[i] >= 50 || trufasTotales1>=50) && (trufasDeRondaJ2[i] >= 50 ||   trufasTotales2>=50 )) ||  (algunoFueAlBarro == true )    )
            {
                dosDadosJ1 = false;
                dosDadosJ2 = false;

            }


            //estos if definen quien sigue jugando

            if(opcion1==1)                // con opcion 1 pierde el turno
            {
                ingresaJ2='N';

            }
            else if(opcion1==2) //  con opcion 2 hizo oink y esta obligado a lanzar
            {
                ingresaJ2='S';

            }
            else
            {

                do
                {
                    cout <<"Desea seguir tirando dados?"<<endl;
                    cout <<"S/N"<<endl;
                    cin  >>ingresaJ2;

                }
                while (ingresaJ2 != 'N' && ingresaJ2 != 'S');

            }
            Sleep(1000) ;

        }
        trufasTotales2+=trufasDeRondaJ2[i];







        for ( int i = 0; i < 5; i++)
        {
            if (contar[i] > codicioso)
            {
                codicioso = contar[i];
            }
        }

        for ( int i = 0; i < 5; i++)
        {
            if (contar1[i] > codicioso1)
            {
                codicioso1 = contar1[i];
            }
        }






// final del for
    }
    cout << endl << endl;
    cout <<"FIN DE LA TIRADA DE DADOS" << endl;
    Sleep(4000);


    cls();
    do
    {
        bool Estadisticas;
        //char MaximoGanador[10] ;

        cout << "GRAN CERDO" << endl;
        cout <<"--------------------------------------------------------------------------------------"<< endl;
        cout << "HITO";
        locate(30,3);
        cout << nombreJ1;
        locate(60, 3);
        cout << nombreJ2 << endl;
        cout <<"--------------------------------------------------------------------------------------"<<endl;

        locate (2, 5);
        cout << "mas trufas en total";
        locate(27,5);
        if (trufasTotales1 < trufasTotales2)
        {
            cout << "0 PDV (" << trufasTotales1 << " trufas)";
        }
        else
        {
            cout << "5 PDV (" << trufasTotales1 << " trufas)";
            pdvJ1 += 5;
        }
        locate (60,5);
        if (trufasTotales2 < trufasTotales1)
        {
            cout << "0 PDV (" << trufasTotales2 << " trufas)";
        }
        else
        {
            cout << "5 PDV (" << trufasTotales2 << " trufas)";
            pdvJ2 += 5;
        }

        locate(2,6);
        cout<< "cada 50 trufas";

        locate(27,6);
        cout << (trufasTotales1/50) << " PDV (" << trufasTotales1 << " trufas)";
        pdvJ1 += (trufasTotales1/50);

        locate (60,6);
        cout << (trufasTotales2/50) << " PDV (" << trufasTotales2 << " trufas)";
        pdvJ2 += (trufasTotales2/50);

        locate(2,7);
        cout<< "oinks";

        locate(27,7);
        cout << (oinkJ1 * 2) <<" PDV (" << oinkJ1 <<" Oinks)";
        pdvJ1 += (oinkJ1 * 2);

        locate (60,7);
        cout << (oinkJ2 * 2) <<" PDV (" << oinkJ2 <<" Oinks)";
        pdvJ2 += (oinkJ2 * 2);

        locate(2,8);
        cout<< "cerdo codicioso";
        locate(27,8);
        if (codicioso < codicioso1)
        {
            cout << "0 PDV (" << codicioso << " lanzamientos)";
        }
        else
        {
            pdvJ1 += 5;
            cout << "5 PDV (" << codicioso << " lanzamientos)";
        }

        locate (60,8);
        if (codicioso1 < codicioso)
        {
            cout << "0 PDV (" << codicioso1 << " lanzamientos)";
        }
        else
        {
            pdvJ2 += 5;
            cout << "5 PDV (" << codicioso << " lanzamientos)" << endl;
        }
        locate (2,9);
        cout << "Porky" ;
        if (pdvJ1<9 && flagporkyJ1==true){
            pdvJ1+=1 ;
            pdvJ2-=1 ;
            locate (27,9);
            cout << "1 PDV" << endl ;
            locate (60,9);
            cout << "-1 PDV" << endl ;
        }
        else if (pdvJ1>=10 && pdvJ1<15 && flagporkyJ1==true){
            pdvJ1+=1;
            pdvJ2-=2 ;
            locate (27,9);
            cout << "1 PDV" << endl ;
            locate (60,9);
            cout << "-2 PDV" << endl ;
        }
        else if (pdvJ1>=15 && flagporkyJ1==true){
            pdvJ1+=1;
            pdvJ2-=3;
            locate (27,9);
            cout << "1 PDV" << endl ;
            locate (60,9);
            cout << "-3 PDV" << endl ;
        }
        if (pdvJ2<9 && flagporkyJ2==true){
            pdvJ2+=1 ;
            pdvJ1-=1 ;
            locate (60,9);
            cout << "1 PDV" << endl ;
            locate (27,9);
            cout << "-1 PDV" << endl ;
        }
        else if (pdvJ2>=10 && pdvJ2<15 && flagporkyJ2==true){
            pdvJ2+=1;
            pdvJ1-=2;
            locate (60,9);
            cout << "1 PDV" << endl ;
            locate (27,9);
            cout << "-2 PDV" << endl ;
        }
        else if (pdvJ2>=15 && flagporkyJ2==true){
            pdvJ2+=1;
            pdvJ1-=3 ;
            locate (60,9);
            cout << "1 PDV" << endl ;
            locate (27,9);
            cout << "-3 PDV" << endl ;
        }
        cout << endl ;


        cout <<"--------------------------------------------------------------------------------------"<<endl;

        locate(2, 10);
        cout<< "TOTAL";
        locate(27,10);
        cout << pdvJ1 << " PDV";
        locate (60,10);
        cout << pdvJ2 <<" PDV"<< endl<< endl;

        if (pdvJ1 > pdvJ2)
        {

            cout << "GANADOR: " << sorteo1<< " con " << pdvJ1 << " puntos de victoria." << endl << endl;
        }
        else if (pdvJ2 > pdvJ1)
        {

            cout << "GANADOR: " << sorteo2 << " con " << pdvJ2 << " puntos de victoria." << endl << endl;
        }
        else
        {
            cout << "Ha sido Empate." <<endl << endl;
        }

        cout <<"ingrese cero para continuar: " << endl << endl;

        cin >> op  ;
    }
    while(op!=0) ;

    return menu();

}

