COMPILATEUR=g++
LINKER=g++
LDFLAGS=
CFLAGS=-Og
PATH_BUILD=Build/
EXE=$(PATH_BUILD)/csia_car_park

INCLUDES= -I"src/lib"

SRC= src/main.cpp

all: $(EXE)

OBJS:= $(addprefix $(PATH_BUILD)/,$(notdir $(SRC:%.cpp=%.o)))

$(OBJS): $(SRC)
	@mkdir -p $(PATH_BUILD)
	@echo "\n##$<"
	$(COMPILATEUR) $(INCLUDES) $(CFLAGS) "$<" -g -c -o $@

$(EXE): $(OBJS)
	@echo "LINKER"
	$(LINKER) -g -o $@ $^ $(LDFLAGS)

clean:
	rm -fr $(PATH_BUILD)