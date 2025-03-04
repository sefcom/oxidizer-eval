long _ZN7uu_head32head_backwards_without_seek_file17h3a18ae91fc5190c0E
               (undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17he287ccdf4304b65dE
            (&local_38,0x10000,param_1);
  if (*param_2 == 1) {
    lVar1 = _ZN7uu_head21read_but_last_n_lines17h8782837729f811d6E
                      (&local_38,param_2[1],*(undefined *)((long)param_2 + 0x2b));
  }
  else {
    if ((int)*param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      _ZN4core9panicking5panic17h8c3a660c3523e4a4E
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_head_src_head_rs_0022cef0);
    }
                    /* try { // try from 001b9fea to 001ba04d has its CatchHandler @ 001ba04e */
    lVar1 = _ZN7uu_head21read_but_last_n_bytes17hcec7d62dae3b0b23E(&local_38,param_2[1]);
  }
  if (lVar1 == 0) {
    _ZN4core3ptr85drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT_17h7791d2e1a0ff900cE
              (local_38,local_30);
    lVar1 = 0;
  }
  else {
    _ZN4core3ptr85drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT__RF_std__fs__File_GT__GT_17h7791d2e1a0ff900cE
              (local_38,local_30);
  }
  return lVar1;
}