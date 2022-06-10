
include ../common/Makefile.common

EXE      = .elf
SRC      = IType.S
#src      = IType_Cov.S
CFLAGS  += -L../common
LDFLAGS += -T ../common/default.ld
TARGET   = IType
OUTPUT   = $(TARGET)$(EXE)

.PHONY: all clean

all:  $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC) $(LDFLAGS)
	$(OBJCOPY) -j .text -O binary $(OUTPUT) imem.bin
	$(OBJCOPY) -j .data -O binary $(OUTPUT) dmem.bin
	$(OBJCOPY) -O binary $(OUTPUT) memory.bin
	$(OBJDUMP) -d $(OUTPUT) > $(TARGET).dis
	$(READELF) -a $(OUTPUT) > $(TARGET).symbol

clean:
	$(RM) *.o $(OUTPUT) $(TARGET).dis $(TARGET).symbol [id]mem.bin memory.bin
assemble:
		$(CC) $(src) -S -o $(SRC) $(ARCH)
