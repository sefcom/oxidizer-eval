undefined8
_ZN7uu_head31head_backwards_on_seekable_file17h9ab8f833488ebf97E(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  int local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulong local_78;
  
  if (*param_2 == 1) {
    auVar4 = _ZN7uu_head22find_nth_line_from_end17h5c4d4ddf46229ebfE
                       (param_1,param_2[1],*(undefined *)((long)param_2 + 0x2b));
    if (auVar4._0_8_ != 0) {
      return auVar4._8_8_;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h5b1434c6071ed7d0E
              (&local_c8,0x10000,param_1);
                    /* try { // try from 001ba0dc to 001ba0e6 has its CatchHandler @ 001ba151 */
    uVar2 = _ZN7uu_head12read_n_bytes17hf3a515e6e6370f94E(&local_c8,auVar4._8_8_);
  }
  else {
    if ((int)*param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_head_src_head_rs_0022cf08);
    }
    uVar1 = param_2[1];
    _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_c8,param_1);
    if (local_c8 == 2) {
      return local_c0;
    }
    lVar3 = local_78 - uVar1;
    if (local_78 < uVar1 || lVar3 == 0) {
      return 0;
    }
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h5b1434c6071ed7d0E
              (&local_c8,0x10000,param_1);
                    /* try { // try from 001ba106 to 001ba110 has its CatchHandler @ 001ba14f */
    uVar2 = _ZN7uu_head12read_n_bytes17hf3a515e6e6370f94E(&local_c8,lVar3);
  }
  _ZN4core3ptr93drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_mut_u20_std__fs__File_GT__GT_17h29a0ad3ae49a85fcE
            (CONCAT44(uStack_c4,local_c8),local_c0);
  return uVar2;
}