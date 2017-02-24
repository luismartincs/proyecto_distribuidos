package serial;

import com.fazecast.jSerialComm.*;
import java.io.OutputStream;
import java.io.InputStream;

public class SerialInterface{

	private SerialPort comPort;

	public SerialInterface(){
		
	}

	public void open(){
		comPort = SerialPort.getCommPorts()[0];
		comPort.openPort();
		System.out.println("Open: "+comPort.getDescriptivePortName()+","+comPort.getBaudRate());
	}

	public void write(int data){
		OutputStream os = comPort.getOutputStream();

		try{
			os.write(data);
			os.close();
		}catch(Exception ex){
			System.out.println("write "+ex);
		}
	}


	public void write(byte[] data){
		OutputStream os = comPort.getOutputStream();

		try{
			os.write(data);
			os.close();
		}catch(Exception ex){
			System.out.println(ex);
		}
	}

	public void close(){
		try{
			comPort.closePort();
		}catch(Exception ex){
			System.out.println(ex);
		}
	}

}
