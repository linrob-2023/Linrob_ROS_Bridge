import socket
import json



# Create a new TCP/IP socket
sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server_address = ("172.24.80.1", 4713)
sock.connect(server_address)

try:
    while True:
        # Receive data from the server

        data = sock.recv(8192)

        if data:
            # If data was received, parse it as JSON
            status_data = json.loads(data.decode())
            print(
                f'Axis_Name: {status_data["Axis_Name"]},'
                f' Status: {status_data["status"]},'
                f' State: {status_data["state"]},'
                f' Error Id: {status_data["error_id_l1"]},'
                f' Timestamp: {status_data["timestamp"]}'
                f' Position reached: {status_data["position_reached"]}'
            )
        else:
            # If no data was received, the connection was closed
            print("Connection closed by server")
            break

except Exception as e:
    print(f"Error occurred: {e}")

finally:
    # Clean up the connection
    sock.close()
