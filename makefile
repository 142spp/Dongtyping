CC = g++
CFLAGS = -W -Wall
TARGET = DongType
MAIN = main.cpp
OTHERS = iofunction.cpp play.cpp setting.cpp

$(TARGET) : $(MAIN) $(OTHERS)
			$(CC) $(CFLAGS) -o $(TARGET) $(MAIN) $(OTHERS)
clean : 
			rm *.o
			rm *.exe
			rm *.out