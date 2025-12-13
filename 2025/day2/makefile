#Compiler
CC := gcc

#Targets
APP := app
TEST := test

#Dirs
SRC_DIR := src
BIN_DIR := bin
INC := ./include/

#Flags
CFLAGS := -Wall -I$(INC)
TEST_CFLAGS := $(CFLAGS) -DTEST_MODE

#Universal src
UNIVERSAL := solution.c
COMMON_SRC := $(SRC_DIR)/$(UNIVERSAL)

#Target based src
TEST_SRCS := $(SRC_DIR)/test.c $(COMMON_SRC)
APP_SRCS := $(SRC_DIR)/main.c $(COMMON_SRC)

EXE = app
OUTPUT = $(BIN_DIR)/$(EXE)

dev: $(TEST) dev_support
build: $(APP) dev_support


$(TEST): $(TEST_SRCS)
	$(CC) $(TEST_CFLAGS) $^ -o $(OUTPUT)

$(APP): $(APP_SRCS)
	$(CC) $(CFLAGS) $^ -o $(OUTPUT)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@



dev_support:clean run

run: 
	@echo "Running..."
	@echo ""
	@$(OUTPUT)

clean:
	rm -f $(SRC_DIR)/*.o


.PHONY: all clean support run