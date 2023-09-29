BUILD_DIR = ./bin
SOURCE_DIR = ./src
SOURCES= $(wildcard $(SOURCE_DIR)/*.c)

BINS = $(patsubst  %.c,%.out, $(patsubst $(SOURCE_DIR)/%,$(BUILD_DIR)/%, $(SOURCES)))

CC_FLAGS := 
CC:= clang

CC_FLAGS += -lm

.PHONY: all setup  clean

all: setup $(BINS)
	@echo "generated"

setup:
	@if [ ! -d $(BUILD_DIR) ]; \
	then \
		mkdir $(BUILD_DIR); \
	fi

clean:
	@if [ -d $(BUILD_DIR) ]; \
	then \
		rm -rf $(BUILD_DIR); \
	fi

$(BUILD_DIR)/%.out: $(SOURCE_DIR)/%.c 
	@echo CC $@
	@gcc $(CC_FLAGS) $< -o $@
