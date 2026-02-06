COMPILE := arm-linux-gnueabihf-
GCC := $(COMPILE)gcc
LD  := $(COMPILE)ld 
OBJCOPY := $(COMPILE)objcopy 
OBJDUMP := $(COMPILE)objdump 
VPATH := driver:usr:imx6ull
target := led

CFILESDIR := driver \
		     usr\
		     imx6ull

SFILESDIR := driver\
		     usr

INCLUDE := driver\
		   imx6ull\



CFILES := $(foreach dir, $(CFILESDIR), $(wildcard $(dir)/*.c))
SFILES := $(foreach dir, $(SFILESDIR), $(wildcard $(dir)/*.S))


NODIRCFILES := $(notdir $(CFILES)) #把前面的文件路径去掉
NODIRSFILES := $(notdir $(SFILES)) #把前面的文件路径去掉

CTARGET := $(patsubst %, obj/% , $(NODIRCFILES:.c=.o)) 
STARGET := $(patsubst %, obj/% , $(NODIRSFILES:.S=.o)) 

$(target).bin : $(CTARGET) $(STARGET)
	@echo $(CTARGET)
	$(LD) -Timx6ull.lds -o $(target).elf $^  
	$(OBJCOPY) -binary -s $(target).elf $@
	$(OBJDUMP) -D -m arm $(target).elf > $(target).dis

$(CTARGET) : obj/%.o : %.c
	$(GCC) -nostdlib -I$(INCLUDE) -c -o $@ $<

$(STARGET) : obj/%.o : %.S
	$(GCC) -nostdlib -I$(INCLUDE) -c -o $@ $<

clean:
	rm -rf $(target).elf $(target).dis $(target).bin $(CTARGET) $(STARGET)





	