ifeq ($(USE_CMSIS),y)

CMSIS_CORE_BASE=libs/cmsis_core

SRC+=$(wildcard $(CMSIS_CORE_BASE)/src/*.c)
INCLUDES+=-I$(CMSIS_CORE_BASE)/inc

else	
$(error CMSIS module must be included!)

endif