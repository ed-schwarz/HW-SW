#
#Makefile for running formal equivalence check
#You must have VERPLEX installed and in your path before you run this
#
default: verplex


wv_wur_sem_check: 	l24_x24_Inst_WUR_wv_3.check \
	l24_x24_Inst_WUR_wv_2.check \
	l24_x24_Inst_WUR_wv_1.check \
	l24_x24_Inst_WUR_wv_0.check \

wv_rur_sem_check: 	l24_x24_Inst_RUR_wv_3.check \
	l24_x24_Inst_RUR_wv_2.check \
	l24_x24_Inst_RUR_wv_1.check \
	l24_x24_Inst_RUR_wv_0.check \

av_wur_sem_check: 	l24_x24_Inst_WUR_av_3.check \
	l24_x24_Inst_WUR_av_2.check \
	l24_x24_Inst_WUR_av_1.check \
	l24_x24_Inst_WUR_av_0.check \

av_rur_sem_check: 	l24_x24_Inst_RUR_av_3.check \
	l24_x24_Inst_RUR_av_2.check \
	l24_x24_Inst_RUR_av_1.check \
	l24_x24_Inst_RUR_av_0.check \

bv_wur_sem_check: 	l24_x24_Inst_WUR_bv_3.check \
	l24_x24_Inst_WUR_bv_2.check \
	l24_x24_Inst_WUR_bv_1.check \
	l24_x24_Inst_WUR_bv_0.check \

bv_rur_sem_check: 	l24_x24_Inst_RUR_bv_3.check \
	l24_x24_Inst_RUR_bv_2.check \
	l24_x24_Inst_RUR_bv_1.check \
	l24_x24_Inst_RUR_bv_0.check \

qv_r_wur_sem_check: 	l24_x24_Inst_WUR_qv_r_1.check \
	l24_x24_Inst_WUR_qv_r_0.check \

qv_r_rur_sem_check: 	l24_x24_Inst_RUR_qv_r_1.check \
	l24_x24_Inst_RUR_qv_r_0.check \

qv_i_wur_sem_check: 	l24_x24_Inst_WUR_qv_i_1.check \
	l24_x24_Inst_WUR_qv_i_0.check \

qv_i_rur_sem_check: 	l24_x24_Inst_RUR_qv_i_1.check \
	l24_x24_Inst_RUR_qv_i_0.check \


.SECONDARY: $(patsubst %.do,%.do.log,$(shell ls *.do 2>/dev/null))

verplex: log warnings semantics report

semantics: wv_wur_sem_check  wv_rur_sem_check  av_wur_sem_check  av_rur_sem_check  bv_wur_sem_check  bv_rur_sem_check  qv_r_wur_sem_check  qv_r_rur_sem_check  qv_i_wur_sem_check  qv_i_rur_sem_check  

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
	@echo "The following opcodes are not checked:RUR_w_r, WUR_w_r, RUR_w_i, WUR_w_i, RUR_a_r, WUR_a_r, RUR_a_i, WUR_a_i, RUR_b_r, WUR_b_r, RUR_b_i, WUR_b_i, RUR_u_r, WUR_u_r, RUR_u_i, WUR_u_i, RUR_v_r, WUR_v_r, RUR_v_i, WUR_v_i, RUR_q_r, WUR_q_r, RUR_q_i, WUR_q_i, RUR_done, WUR_done, RUR_shift, WUR_shift, RUR_even_ix, WUR_even_ix, RUR_odd_ix, WUR_odd_ix, RUR_even_const, WUR_even_const, RUR_od_ix, WUR_od_ix, RUR_w_ix, WUR_w_ix, RUR_w_inc, WUR_w_inc, RUR_m_ix, WUR_m_ix, RUR_l, WUR_l, RUR_n, WUR_n, RUR_n_2, WUR_n_2, RUR_lg2_n, WUR_lg2_n, RUR_step, WUR_step, RUR_ptr_data, WUR_ptr_data, RUR_ptr_w, WUR_ptr_w, RUR_debug_reg, WUR_debug_reg, FFT_SIMPLE_MUL, FFT_COM_MUL, FFT_2_f_LD, FFT_2_FFT, FFT_8_FFT, FFT_BIT_REVERSE, FFT_INIT, FFT_LOAD_W, FFT_UPDATE, FFT_LOAD_EVEN, FFT_STORE_EVEN, FFT_LOAD_ODD, FFT_STORE_ODD \n" | tee -a verplex.log

