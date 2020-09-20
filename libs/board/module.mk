ifeq ($(USE_BOARD),y)

BOARD_BASE=libs/board

# Directorio edu_ciaa_nxp:
SRC+=$(wildcard $(BOARD_BASE)/edu_ciaa_nxp/src/*.c)
INCLUDES+=-I$(BOARD_BASE)/edu_ciaa_nxp/inc

# Directorio lpc_chip_43xx:
SRC+=$(wildcard $(BOARD_BASE)/lpc_chip_43xx/src/*.c)
INCLUDES+=-I$(BOARD_BASE)/lpc_chip_43xx/inc
INCLUDES+=-I$(BOARD_BASE)/lpc_chip_43xx/usbd_rom

# Directorio lpc_startup:
SRC+=$(wildcard $(BOARD_BASE)/lpc_startup/src/*.c) 
INCLUDES+=-I$(BOARD_BASE)/lpc_startup/inc

else	
$(error BOARD module must be included for EDU-CIAA!)

endif