# Conectado de componentes

## Materiales
- Placa Arduino Genuino UNO
- Controlador de motores L298N
- Módulo Bloethooth HC/05
- Cables de conección
- Dos motores
- Base reciclada de un auto a control remoto

## Procedimiento de la conección
Primero se realizó la coneccion de la Fuente de energia al Módulo L298N, mediante un sistema de conección de un interruptor.

En segundo lugar se distibuyó la energia hacia los pines de alimentación VIN y GND de la placa arduino.

Porteriormente se conecto los pines de control de motores del modulo a los pines PWM de la placa en un orden respectivo.Una vez realizada esto, se conectó los motores al módulo L298N.

Finalmente realizamos la coneccion del Módulo Bluethooth con la placa arduino, utiliozando cuatro pines del modulo; dos para la recepcion de energia y dos para el manejar su control.