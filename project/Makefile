TARGET_EXEC := csia_car_park
COMPILATEUR=g++
LINKER=g++

BUILD_DIR := ./Build
SRC_DIRS := ./src

# Find all the C and C++ files we want to compile
SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c)

# String substitution for every C/C++ file.
# As an example, hello.cpp turns into ./build/hello.cpp.o
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

# String substitution (suffix version without %).
# As an example, ./build/hello.cpp.o turns into ./build/hello.cpp.d
DEPS := $(OBJS:.o=.d)

# Every folder in ./src will need to be passed to GCC so that it can find header files
INC_DIRS := $(shell find $(SRC_DIRS) -type d)
# Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# The -MMD and -MP flags together generate Makefiles for us!
# These files will have .d instead of .o as the output.
CPPFLAGS := $(INC_FLAGS)

# The final build step.
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	@echo ##########
	@echo # LINKER # 
	@echo ##########                      
	$(LINKER) $(OBJS) -g -o $@ $(LDFLAGS)

# Build step for C++ source
$(BUILD_DIR)/%.cpp.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "##$<"
	$(COMPILATEUR) $(CPPFLAGS) $(CXXFLAGS) $< -g -c -o $@

clean:
	rm -fr $(BUILD_DIR)