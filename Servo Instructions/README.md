# Servo instructions

En servomotor er en motor, hvis aksel drejer til en bestemt position baseret på et styresignal. De bruges typisk til at styre fjernstyrede fly ved at justere vingeklapperne, flyveposition for droner, styreventiler, der bruges til flowkontrol eller kontinuerlig kørsel af hjul til robotter. De kan bruges til at placere eller justere næsten alt, hvad du kan tænke på. De består af et plastikhus, som indeholder en jævnstrømsmotor, et styrekredsløb og et par gear til moment (se figur 1).

<figure>
  <img src="article-2017march-servo-motors-and-control-fig1.jpg" />
  <figcaption>Fig.1 - Servo med 180 graders bevægelse</figcaption>
</figure>

# Servoens funktions måde
Styringen af servomotorens akselposition kommer fra brug af et pulsbreddemodulationssignal (PWM) til at dreje akslen med uret eller mod uret, afhængigt af signalets pulsbredde. Typisk vil en pulsbredde på 1 ms rotere akslen med uret, og en 2 ms puls vil rotere akslen mod uret. For at placere skaftet halvvejs eller i midten fungerer en 1,5 ms puls typisk. Du skal bruge 20 ms mellem hver puls. Figur 2 nedenfor viser timingen for hver position.

<figure>
  <img src="https://user-images.githubusercontent.com/44589560/161221746-2ab1efd0-2eb9-4a35-abe5-0cd196939ab9.png" />
  <figcaption>Fig.2 - PWM Timing for forskellige akselpositioner</figcaption>
</figure>


<figure>
  <img src="https://user-images.githubusercontent.com/44589560/161222161-589eb82e-e268-469a-a586-f7b18cbfbfdf.png" />
  <figcaption>Figure 3: The wiring connections as shown in Parallax’s datasheet.</figcaption>
</figure>

