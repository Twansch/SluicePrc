ALLFILES=Door DoorLock DoorMotor Sluice SluiceFactory SluiceWatch TrafficLight Valve Main

GCC=g++


CFLAGS = -Werror -o2 -Wall -g
	#set compiler flags

LDFLAGS = -lpthread -lrt
SOURCES = Door.cpp DoorLock.cpp DoorMotor.cpp Sluice.cpp SluiceFactory.cpp SluiceWatch.cpp TrafficLight.cpp Valve.cpp Main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = Door DoorLock DoorMotor Sluice SluiceFactory SluiceWatch TrafficLight Valve Main

.PHONY: all clean

all: $(TARGET)

$(TARGET) : $(OBJECTS)
	$(GCC) $(CFLAGS) -o Sluice $^ $(LDFLAGS)
clean:
	@rm -rf $(TARGET) $(OBJECTS)
