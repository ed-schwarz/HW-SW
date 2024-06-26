set log file lec.log -replace
read design ../src/verify_ref.v -verilog -Golden -root Xm_hwsw_codesign2019_alignedTIE_ref
read design ../src/verify_sem.v -verilog -revised -root Xm_hwsw_codesign2019_alignedTIE

//opcode WUR_av_0, slot Inst, format x24, length l24:
//InstBuf : xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx1111001100010000xxxx0000
set log file l24_x24_Inst_WUR_av_0.do.log -replace
add pin constraints 0 Instr_R[0] -Both
add pin constraints 0 Instr_R[1] -Both
add pin constraints 0 Instr_R[2] -Both
add pin constraints 0 Instr_R[3] -Both
add pin constraints 0 Instr_R[8] -Both
add pin constraints 0 Instr_R[9] -Both
add pin constraints 0 Instr_R[10] -Both
add pin constraints 0 Instr_R[11] -Both
add pin constraints 1 Instr_R[12] -Both
add pin constraints 0 Instr_R[13] -Both
add pin constraints 0 Instr_R[14] -Both
add pin constraints 0 Instr_R[15] -Both
add pin constraints 1 Instr_R[16] -Both
add pin constraints 1 Instr_R[17] -Both
add pin constraints 0 Instr_R[18] -Both
add pin constraints 0 Instr_R[19] -Both
add pin constraints 1 Instr_R[20] -Both
add pin constraints 1 Instr_R[21] -Both
add pin constraints 1 Instr_R[22] -Both
add pin constraints 1 Instr_R[23] -Both
report design data
set mapping method -unreach
set flatten model -NODFF_TO_DLAT_FEEDBACK
set system mode lec
add compare point -all

set cpu limit 30 -minutes
compare
report compare data -noneq -abort
usage

