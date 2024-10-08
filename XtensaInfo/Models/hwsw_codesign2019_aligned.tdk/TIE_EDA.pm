
#!/././usr/xtensa/stools-6.1/bin/perl

##################################################################
# Code automatically generated by TC. Please do not modify.      #
##################################################################

package TIE_EDA;

use strict;
use Cwd;

@TIE_EDA::ISA = qw(Exporter);
@TIE_EDA::EXPORT = qw(
     get_gated_operands
     get_gated_semantics
     get_gated_ops_of_semantic
     get_gated_signals_of_semantic
     get_all_semantic_names
     get_tie_dc_script
     get_astates
  );

@TIE_EDA::EXPORT_OK = ();
@TIE_EDA::EXPORT_TAGS = ();

use vars qw(
  %gated_operands
  @astate
  @all_semantics
  $tie_dc_script
);

# This variable contains DC script related information
my $tie_dc_script = <<EOT;
EOT

# This array contains all the semantic names
my @all_semantic_names = qw(
	TIE_semantic_slot0_RFDE
	TIE_semantic_slot0_EXCW
	TIE_semantic_slot0_SYSCALL
	TIE_semantic_slot0_ENTRY
	TIE_semantic_slot0_MOVSP
	TIE_semantic_slot0_ROTW
	TIE_semantic_slot0_ILL_N
	TIE_semantic_slot0_MEMW
	TIE_semantic_slot0_EXTW
	TIE_semantic_slot0_RSIL
	TIE_semantic_slot0_RSR_MEMCTL
	TIE_semantic_slot0_WSR_MEMCTL
	TIE_semantic_slot0_XSR_MEMCTL
	TIE_semantic_slot0_RSR_LITBASE
	TIE_semantic_slot0_WSR_LITBASE
	TIE_semantic_slot0_XSR_LITBASE
	TIE_semantic_slot0_RSR_CONFIGID0
	TIE_semantic_slot0_WSR_CONFIGID0
	TIE_semantic_slot0_RSR_CONFIGID1
	TIE_semantic_slot0_NOP
	TIE_semantic_slot1_NOP
	TIE_semantic_slot2_NOP
	TIE_semantic_slot0_ILL
	TIE_semantic_slot0_WAITI
	TIE_semantic_slot0_RFI
	TIE_semantic_slot0_BREAK
	TIE_semantic_slot0_BREAK_N
	TIE_semantic_slot0_LDDR32_P
	TIE_semantic_slot0_SDDR32_P
	TIE_semantic_slot0_RFDO
	TIE_semantic_slot0_RFDD
	TIE_semantic_slot0_RER
	TIE_semantic_slot0_WER
	TIE_semantic_slot0_xt_sem_core_logical
	TIE_semantic_slot1_xt_sem_core_logical
	TIE_semantic_slot2_xt_sem_core_logical
	TIE_semantic_slot0_xt_sem_core_shift
	TIE_semantic_slot1_xt_sem_core_shift
	TIE_semantic_slot2_xt_sem_core_shift
	TIE_semantic_slot0_xt_sem_bool
	TIE_semantic_slot0_xt_sem_tlb
	TIE_semantic_slot0_xt_sem_clamps
	TIE_semantic_slot0_xt_sem_minmax
	TIE_semantic_slot0_xt_sem_nsa
	TIE_semantic_slot0_xt_sem_sext
	TIE_semantic_slot1_xt_sem_sext
	TIE_semantic_slot2_xt_sem_sext
	TIE_semantic_slot0_xt_sem_core_add
	TIE_semantic_slot1_xt_sem_core_add
	TIE_semantic_slot2_xt_sem_core_add
	TIE_semantic_slot0_xt_sem_core_move
	TIE_semantic_slot1_xt_sem_core_move
	TIE_semantic_slot2_xt_sem_core_move
	TIE_semantic_slot0_xt_sem_core_cti
	TIE_semantic_slot1_xt_sem_core_cti
	TIE_semantic_slot0_xt_sem_loads_stores
	TIE_semantic_slot0_xt_sem_core_sreg_1
	TIE_semantic_slot0_xt_sem_core_srps
	TIE_semantic_slot0_xt_sem_core_srbus
	TIE_semantic_slot0_xt_sem_core_sreg_3
	TIE_semantic_slot0_core_sr_masks
	TIE_semantic_slot0_xt_mul32
	TIE_semantic_slot0_RUR_w_r
	TIE_semantic_slot0_WUR_w_r
	TIE_semantic_slot0_RUR_w_i
	TIE_semantic_slot0_WUR_w_i
	TIE_semantic_slot0_RUR_a_r
	TIE_semantic_slot0_WUR_a_r
	TIE_semantic_slot0_RUR_a_i
	TIE_semantic_slot0_WUR_a_i
	TIE_semantic_slot0_RUR_b_r
	TIE_semantic_slot0_WUR_b_r
	TIE_semantic_slot0_RUR_b_i
	TIE_semantic_slot0_WUR_b_i
	TIE_semantic_slot0_RUR_u_r
	TIE_semantic_slot0_WUR_u_r
	TIE_semantic_slot0_RUR_u_i
	TIE_semantic_slot0_WUR_u_i
	TIE_semantic_slot0_RUR_v_r
	TIE_semantic_slot0_WUR_v_r
	TIE_semantic_slot0_RUR_v_i
	TIE_semantic_slot0_WUR_v_i
	TIE_semantic_slot0_RUR_q_r
	TIE_semantic_slot0_WUR_q_r
	TIE_semantic_slot0_RUR_q_i
	TIE_semantic_slot0_WUR_q_i
	TIE_semantic_slot0_wv_wur_sem
	TIE_semantic_slot0_wv_rur_sem
	TIE_semantic_slot0_av_wur_sem
	TIE_semantic_slot0_av_rur_sem
	TIE_semantic_slot0_bv_wur_sem
	TIE_semantic_slot0_bv_rur_sem
	TIE_semantic_slot0_RUR_done
	TIE_semantic_slot0_WUR_done
	TIE_semantic_slot0_RUR_shift
	TIE_semantic_slot0_WUR_shift
	TIE_semantic_slot0_RUR_even_ix
	TIE_semantic_slot0_WUR_even_ix
	TIE_semantic_slot0_RUR_odd_ix
	TIE_semantic_slot0_WUR_odd_ix
	TIE_semantic_slot0_RUR_even_const
	TIE_semantic_slot0_WUR_even_const
	TIE_semantic_slot0_RUR_w_ix
	TIE_semantic_slot0_WUR_w_ix
	TIE_semantic_slot0_RUR_w_inc
	TIE_semantic_slot0_WUR_w_inc
	TIE_semantic_slot0_RUR_m_ix
	TIE_semantic_slot0_WUR_m_ix
	TIE_semantic_slot0_RUR_l
	TIE_semantic_slot0_WUR_l
	TIE_semantic_slot0_RUR_n
	TIE_semantic_slot0_WUR_n
	TIE_semantic_slot0_RUR_n_2
	TIE_semantic_slot0_WUR_n_2
	TIE_semantic_slot0_RUR_lg2_n
	TIE_semantic_slot0_WUR_lg2_n
	TIE_semantic_slot0_RUR_step
	TIE_semantic_slot0_WUR_step
	TIE_semantic_slot0_RUR_ptr_data
	TIE_semantic_slot0_WUR_ptr_data
	TIE_semantic_slot0_RUR_ptr_w
	TIE_semantic_slot0_WUR_ptr_w
	TIE_semantic_slot0_RUR_debug_reg
	TIE_semantic_slot0_WUR_debug_reg
	TIE_semantic_slot0_RUR_time_decimation
	TIE_semantic_slot0_WUR_time_decimation
	TIE_semantic_slot0_qv_r_wur_sem
	TIE_semantic_slot0_qv_r_rur_sem
	TIE_semantic_slot0_qv_i_wur_sem
	TIE_semantic_slot0_qv_i_rur_sem
	TIE_semantic_slot0_FFT_COM_MUL
	TIE_semantic_slot0_FFT_2_f_LD
	TIE_semantic_slot0_FFT_2_FFT
	TIE_semantic_slot0_FFT_8_FFT_DIT
	TIE_semantic_slot0_FFT_8_FFT_DIF
	TIE_semantic_slot0_FFT_BIT_REVERSE
	TIE_semantic_slot0_FFT_INIT
	TIE_semantic_slot0_FFT_LOAD_EVEN
	TIE_semantic_slot1_FFT_LOAD_ODD
	TIE_semantic_slot0_FFT_LOAD_W
	TIE_semantic_slot0_FFT_STORE_EVEN
	TIE_semantic_slot1_FFT_STORE_ODD
	TIE_semantic_slot0_FFT_UPDATE
);

# This hash contains all the semantics that have been data-gated
# The names of the semantic module(s) and the gated signals should be as they
# appear in the TIE.v file.
my %gated_operands = (

# Semantic name
#             orig. signal              new signal                gated-by
);

# Add all sorts of subroutine here that are of use to the EDA group
# for post-processing all the information provided by TC.
sub get_tie_dc_script {
  return $tie_dc_script;
}


sub get_all_semantic_names {
  return @all_semantic_names;
}

sub get_gated_operands {
  return \%gated_operands;
}

sub get_gated_semantics {
  return (sort keys %gated_operands);
}

sub get_gated_ops_of_semantic {
  my ($sem) = @_;
  my @ops = ();
  return @ops if (!defined $gated_operands{$sem});
  foreach (@{$gated_operands{$sem}}) {
    push @ops, $_->[0];
  }
  return @ops;
}

sub get_gated_signals_of_semantic {
  my ($sem) = @_;
  my @s = ();
  return @s if (!defined $gated_operands{$sem});
  foreach (@{$gated_operands{$sem}}) {
     push @s, $_->[1];
  } 
  return @s;
}

sub get_astates {
  return @astate;
}
1;
