/* Copyright 2018, Gassmann Dustin
 * All rights reserved.
 *
 * Proyecto integrador del Curso Introduccón a la CIAA
 * 9° Escuela para la Enseñanza de Sistemas Embebidos
 *
 * FACENA - UNNE - CORRIENTES - ARGENTINA
 *
 *
 * Movimiento de servomotor con fin de carrera simulando el accionar de una barrera
 * 
 * Funcionamiento: 
 *
 * TECLA1: baja la barrera 10 grados a la vez si el grado de la misma es superior a 0.
 * TECLA2: sube la barrera 10 grados a la vez si el grado de la misma es inferior a 100.
 *
 */

/** \brief Blinking Bare Metal example source file
 **
 ** This is a mini example of the CIAA Firmware.
 **
 **/

/** \addtogroup CIAA_Firmware CIAA Firmware
 ** @{ */

/** \addtogroup Examples CIAA Firmware Examples
 ** @{ */
/** \addtogroup Baremetal Bare Metal example source file
 ** @{ */

/*
 * Initials     Name
 * ---------------------------
 * DG           Gassmann, Dustin
 */	

/*
 * modification history (new versions first)
 * -----------------------------------------------------------
 * yyyymmdd v0.0.1 initials initial version
 */

/*==================[inclusions]=============================================*/
#include "mi_proyecto.h"     /* <= own header */
#include "retardos.h"
#include "led.h"
#include "switch.h"
#include "GPIO.h"
#include "servo.h"
#include "timer.h"


int main(void)
{ 



   /* perform the needed initialization here */
	boardConfig();

	Init_Leds();

	Init_GPIO();

	Init_Switches();

    //Variables
   	uint8_t angulo = 0; //0 a 100

	uint8_t ang_act = 0; //0 a 100

	uint8_t tecla;

	uint8_t alto, bajo;

	servoConfig( 0, SERVO_ENABLE );

	servoConfig( SERVO0, SERVO_ENABLE_OUTPUT );

	servoWrite( SERVO0, angulo );
	
	    
	while(1){

		alto = GPIO_Read( GPIO0 );
		bajo = GPIO_Read( GPIO1 );

		tecla = Read_Switches();
		ang_act = servoRead( SERVO0 );


		//Barrera baja. Fin de carrera bajo presionado
		if (ang_act == 0 && bajo == 0) 
		{
			Led_Off_All();	  		
	  		Led_On( RED_LED );
		}

		//Barrera alta. Fin de carrera alto presionado
		if (ang_act == 100 && alto == 0) 
		{
	  		Led_Off_All();
	  		Led_On( GREEN_LED );
		}

		//Barrera en movimiento
		if ((ang_act > 0 && ang_act < 100) && (alto == 1 && bajo == 1)) 
		{
	  		Led_Off( GREEN_LED );
	  		Led_On( RED_LED );
	  		Led_Toggle( YELLOW_LED );
		}

		//Bajar barrera
	  	if (tecla == TECLA1 && ang_act > 0 ) 
	  	{ 
	  		delayMs(0, 100);
	  		Led_Toggle( YELLOW_LED );
	  		angulo = angulo - 10;
	  		servoWrite( SERVO0, angulo );
	  	}
	  	
	  	//Subir barrera
	  	if (tecla == TECLA2 && ang_act < 100 )
	  	{
	  		delayMs(0, 100);
	  		Led_Toggle( YELLOW_LED );
	  		angulo = angulo + 10;
	  		servoWrite( SERVO0, angulo );
	  	}
	  	
	  	//Bajar totalmente la barrera (0°)
	  	if (tecla == TECLA3) 
	  	{
	  		servoWrite( SERVO0, 0);
	  	}

	  	//Subir totalmente la barrera (100°)
	  	if (tecla == TECLA4) 
	  	{
	  		servoWrite( SERVO0, 100);
	  	}
	}

	return 0;


}

/** @} doxygen end group definition */
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/

