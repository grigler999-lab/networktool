
def validate_ip(ip):
    parts = ip.split(".")
    if len(parts) != 4:
        return False

    for part in parts:
         if not part.isdigit():
            return False
    
         number = int(part)
         if number < 0 or number > 255:
            return False

    return True




def main():
    log = []
    running = True
    while running:
        print("= NÄTVERKSVERKTYG =")
        print("1. Validera IP-adress")
        print("2. Validera port")
        print("3. Visa logg")
        print("4. Avsluta")
        try:
            choice = int(input("Välj ett alternativ: ").strip())
        except ValueError:
            print("Ogiltigt val. Välj ett nummer från listan.")
            continue
        if choice < 1 or choice > 4:
            print("Ogiltigt val. Välj ett nummer från listan.")
            continue
        elif choice == 1:
            print("Validera IP-adress")
            ip = input("Ange en IP-adress: ").strip()
            result = validate_ip(ip)
            if result:
                message = f"IP {ip} - giltig"
            else:
                message = f"IP {ip} - ogiltig"

            print(message)
            log.append(message)   
            

        elif choice == 2:
            print("Validera port")
            port = input("Ange en port: ").strip()
            
            if not port.isdigit():
                message = f"Port {port} - ogiltig"
                print(message)
                log.append(message)
                continue
            
            number = int(port)
            
            if number < 1 or number > 65535:
                message = f"Port {port} - ogiltig"
            else:
                message = f"Port {port} - giltig"

            print(message)
            log.append(message)


        elif choice == 3:
            print("= LOGG =")
            for i, entry in enumerate(log, start=1):
                print(f"{i}. {entry}")

        elif choice == 4:
            print(f"Totalt antal valideringar: {len(log)}")
            print("Avslutar...")
            break

if __name__ == "__main__":
    main()

