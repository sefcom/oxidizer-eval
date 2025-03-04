void _ZN5uu_dd20stdout_canonicalized17h8616e33a4059f2eeE(long *param_1)

{
  long local_38;
  long lStack_30;
  long local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  long local_10;
  
  _ZN3std2fs12canonicalize17hc098601a0f17255dE(&local_38,&DAT_00123e07,0xb);
  if (local_38 == -0x8000000000000000) {
                    /* try { // try from 001d8dbc to 001d8dd2 has its CatchHandler @ 001d8e04 */
    _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_20,&DAT_00123e07,0xb);
    param_1[2] = local_10;
    *(undefined4 *)param_1 = local_20;
    *(undefined4 *)((long)param_1 + 4) = uStack_1c;
    *(undefined4 *)(param_1 + 1) = uStack_18;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_14;
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h6d990e1150a85915E
              (&local_38);
  }
  else {
    param_1[2] = local_28;
    *param_1 = local_38;
    param_1[1] = lStack_30;
  }
  return;
}