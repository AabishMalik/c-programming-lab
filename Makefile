BUILD_DIR = ./bin
SOURCE_DIR = ./src
SOURCES = $(wildcard $(SOURCE_DIR)/*.c)

BINS = $(patsubst  %.c,%, $(patsubst $(SOURCE_DIR)/%,$(BUILD_DIR)/%, $(SOURCES)))

CC_FLAGS := 

CC := x86_64-w64-mingw32-gcc

CC_FLAGS += -std=c17 -lm  -Os

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

$(BUILD_DIR)/%: $(SOURCE_DIR)/%.c 
	@echo CC $@
	@$(CC) $(CC_FLAGS) $< -o $@
