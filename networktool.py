def validate_ip(ip):
    parts = ip.split(".")
    if len(parts) != 4:
        return False
    return True




def main():

    running = True
    while running:
        print("= NÄTVERKSVERKTYG =")
        print("1. Validera IP-adress")
        print("2. Validera port")
        print("3. Visa logg")
        print("4. Avsluta")
        try:
            choice = int(input("Välj ett alternativ: "))
        except ValueError:
            print("Ogiltigt val. Välj ett nummer från listan.")
            continue
        if choice < 1 or choice > 4:
            print("Ogiltigt val. Välj ett nummer från listan.")
            continue
        elif choice == 1:
            print("Validera IP-adress")
            ip = input("Ange en IP-adress: ")
            result = validate_ip(ip)
            print(result)
            

        elif choice == 2:
            print("Validera port")
            port = input("Ange en port: ")

        elif choice == 3:
            print("Visa logg")

        elif choice == 4:
            print("Avslutar...")
            break

if __name__ == "__main__":
    main()

