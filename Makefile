C_FILES = $(shell find . -iname "*.c")
TARGETS = $(C_FILES:%.c=%)
all: $(TARGETS)
clean :
	$(RM) $(TARGETS)
