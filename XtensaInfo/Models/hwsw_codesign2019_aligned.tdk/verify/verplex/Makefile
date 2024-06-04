#
#Makefile for running formal equivalence check
#You must have VERPLEX installed and in your path before you run this
#
default: verplex



.SECONDARY: $(patsubst %.do,%.do.log,$(shell ls *.do 2>/dev/null))

verplex: log warnings semantics report

semantics: 

verplex_all: log warnings $(patsubst %.do,%.check,$(shell ls *.do 2>/dev/null)) report

PERL = C:/usr/xtensa/XtDevTools/install/tools/RF-2016.4-win32/XtensaTools/Tools/perl/bin/MSWin32-x86/perl.exe
XTENSA_TOOLS = C:/usr/xtensa/XtDevTools/install/tools/RF-2016.4-win32/XtensaTools/Tools
%.check: %.do ../src/verify_ref.v ../src/verify_sem.v
	@echo "Running verplex on $*" 
	XTENSA_TOOLS=$(XTENSA_TOOLS) $(PERL) -w tie_verplex -check $* | tee -a verplex.log

log:
	@rm -rf verplex.log
	@touch verplex.log

report:
	@echo "============= Report Summary ============="
	@cat verplex.log
	@rm -f *.vector.do *.fpt

clean:
	rm -rf *.log *.lck *.fpt


warnings:
	@echo "The following opcodes are not checked:FFT_SIMPLE_MUL, FFT_COM_MUL, RUR_w_r, WUR_w_r, RUR_w_i, WUR_w_i, RUR_a_r, WUR_a_r, RUR_a_i, WUR_a_i, RUR_b_r, WUR_b_r, RUR_b_i, WUR_b_i, RUR_u_r, WUR_u_r, RUR_u_i, WUR_u_i, RUR_v_r, WUR_v_r, RUR_v_i, WUR_v_i, RUR_q_r, WUR_q_r, RUR_q_i, WUR_q_i, FFT_2_f_LD, FFT_2_FFT \n" | tee -a verplex.log

