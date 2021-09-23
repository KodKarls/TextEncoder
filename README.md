# README #

##############################
## DLA POLAKÓW ##
##############################

####################
Opis aplikacji
####################
TextEncoder to aplikacja do prostego szyfrowania tekstu. Na chwilę obecną możliwe jest poprawne kodowanie tekstu jedynie w języku angielskim. Po uruchomieniu programu użytownik ma możliwość wyboru z jakiego źródła będzie pochodził tekst do zaszyfrowania. Obecnie dostępne są dwie opcje:
  - wpisanie tekstu z klawiatury do konsoli
  - zapisanie tekstu w pliku o nazwie inputFiles (plik ten znajduje się w folderze     files, w głównym katalogu projektu)

Po wybraniu jednej z dwóch wymienionych opcji użytkownik zostaje poproszony o wybranie metody szyforowania. Dostępne są dwie:
  - szyfrowanie według podanego wzoru,
  - szyfrowanie według liter.

Pierwsza opcja polega na tym, iż użytkownik podaje wzór kodowania:
  - wpisanie 1 oznacza ukrycie litery,
  - wpisanie 2 oznacza, nieukrywanie litery,
  - wpisanie 3 lub innej liczby zakańcza wzór i następuje zaszyfrowanie tekstu.

Dla przykładu jeśli użytkownik wpisał wzór: 1, 1, 2, 2. Oznacza to, że tekst będzie zaszyfrowany następująco: dwie pierwsze litery będą ukryte (zaszyfrowane), dwie następne nie itd. aż do wyczerpania wszystkich liter tekstu.

Druga opcja polega na tym, iż użytkownik podaje litery, które zamierza zaszyfrować.

Algorytm szyfrowania jest prosty i polega na zasłonięciu liter symbolem "*". Więcej o samym algorytmie można przeczytać w pliku Encoding.hpp.

Niezależnie od wyboru algorytmu i źródła pochodzenia tekstu wynik szyfrowania zostaje zapisany w pliku outputFile. Znajduje się on w tym samym miejscu co plik inputFile (czytaj wyżej).

####################
Sposób uruchamiania
####################
Projekt stworzony jest za pośrednictwem Visual Studio 2019. Do uruchomienia należy wykorzystać plik solucji znadujący się w głównym folderze projektu.

####################
Uwagi twórcy
####################
Jeśli masz sugestie co można by ulepszyć, naprawić, widzisz jakieś błędy, czuj się swobodnie i napisz. Wszelkie uwagi i wskazówki są mile widziane. Dzięki temu budujemy większą społeczność i nabywamy nowych umiejętności :)

Osobiście w przyszłości planuję rozbudować aplikację do wersji okienkowej.

##############################
## English ##
##############################

####################
Description of the application
####################
TextEncoder is an application for simple text encryption. At present, it is possible to encode the text correctly in English only. After starting the program, the user can choose the source from which the text to be encrypted will come. There are currently two options available:
   - typing text from the keyboard into the console
   - saving the text in a file called inputFiles (this file is in the files folder,      in the main project directory)

After selecting one of the two options listed, the user is prompted to select an encryption method. There are two available:
   - encryption according to the given pattern
   - letter encryption

The first option is that the user enters the encoding formula:
   - entering 1 means hiding the letter,
   - entering 2 means not hiding the letter,
   - entering 3 or another number completes the pattern and the text is encrypted

For example, if the user entered the formula: 1, 1, 2, 2. It means that the text will be encrypted as follows: the first two letters will be hidden (encrypted), the next two will not, etc., until all letters of the text are exhausted.

The second option is that the user enters the letters to be encrypted.

The encryption algorithm is simple and consists in covering the letters with the "*" symbol. You can read more about the algorithm itself in the Encoding.hpp file.

Regardless of the choice of the algorithm and the source of the text, the encryption result is saved in the outputFile. It is located in the same place as the inputFile (see above).

####################
How to run
####################
The project is created using Visual Studio 2019. To run, use the soluction file located in the main project folder.

####################
Creator's Notes
####################
If you have any suggestions on what could be improved or fixed, if you see any bugs, feel free to write. Any comments and tips are appreciated. In that, we build a larger community and acquire new skills :)

Personally, in the future, I plan to expand the application to a windowed version.