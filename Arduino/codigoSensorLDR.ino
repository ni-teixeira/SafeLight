const int PINO_SENSOR_LDR = A4; //Pino conectado ao sensor LDR
int valorLuminosidade;  //Variavel para armazenar o valor da luminosidade

// Função de inicialização
void setup() {
Serial.begin(9600) //Inicializa a comunicação serial a 9600 bps (bits por segundo)  

}

// Função principal de execução contínua
void loop() {
  // Lê o valor analógico do sensor LDR
  valorLuminosidade = analogRead(PINO_SENSOR_LDR);
  //Exibe o valor da luminosidade no onitor serial
  Serial.print("Maxima:");
  Serial.print(900);
  Serial.print(" ");
  Serial.print("Luminosidade:"); 
  Serial.print(valorLuminosidade); 
  Serial.print(" ");
  Serial.print("Minimo:");
  Serial.println(250) 
  //Aguarda 2 segundos antes da próxima leitura
  delay(2000)

}
