ALLFILES=Door DoorLock DoorMotor Sluice SluiceFactory SluiceWatch TrafficLight Valve Main Communication

GCC=g++


CFLAGS = -Werror -o2 -Wall -g
	#set compiler flags

LDFLAGS = -lpthread -lrt
SOURCES = Door.cpp DoorLock.cpp DoorMotor.cpp Sluice.cpp SluiceFactory.cpp SluiceWatch.cpp TrafficLight.cpp Valve.cpp Main.cpp Communication.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = Door DoorLock DoorMotor Sluice SluiceFactory SluiceWatch TrafficLight Valve Main Communication

.PHONY: all clean

all: $(TARGET)

$(TARGET) : $(OBJECTS)
	$(GCC) $(CFLAGS) -o Sluice $^ $(LDFLAGS)
clean:
	@rm -rf $(TARGET) $(OBJECTS)
