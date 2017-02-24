import serial.SerialInterface;


public class DemoSerial{

	public static void main(String args[]){
		
		SerialInterface serialComm = new SerialInterface();

		serialComm.open();
		serialComm.write((int)args[0].charAt(0) - (int)('0'));
		System.out.println("Hola mundo ");

	}
}

