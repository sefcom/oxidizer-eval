undefined8 *
_ZN6uu_tee4open17h0365940af90c88f0E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,byte *param_5)

{
  undefined8 uVar1;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined2 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 *local_60;
  code *local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  
  _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(local_98);
  local_d8 = 0x1b600000000;
  if (param_4 == 0) {
    uStack_ce = 0x100;
  }
  else {
    uStack_ce = 1;
  }
  _local_d0 = CONCAT22(uStack_ce,0x100);
  local_cc = 1;
                    /* try { // try from 001b34ec to 001b34fa has its CatchHandler @ 001b36b6 */
  _ZN3std2fs11OpenOptions4open17h097a071329397a72E(&local_80,&local_d8,local_90,local_88);
  if (local_80 == 0) {
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8dc79dc8461f5b4aE(local_7c);
                    /* try { // try from 001b363a to 001b364c has its CatchHandler @ 001b36a4 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h02ba9e8c78156205E
              (&local_c8,param_2,param_3);
    param_1[2] = local_b8;
    *(undefined4 *)param_1 = (undefined4)local_c8;
    *(undefined4 *)((long)param_1 + 4) = local_c8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_c0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_c0._4_4_;
    param_1[3] = uVar1;
    param_1[4] = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hc32245d20c84adeeE_0021f9f8;
  }
  else {
    local_e0 = local_78;
                    /* try { // try from 001b3510 to 001b3608 has its CatchHandler @ 001b36c5 */
    local_50 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_68 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h845947ade0b20afcE;
    local_c8 = &DAT_0021f9a8;
    uStack_c0 = 2;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_70;
    local_70 = (undefined8 *)local_50;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
    local_50._0_8_ = 0;
    local_38 = 0;
    local_68 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_60 = &local_e0;
    local_58 = 
    _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
    local_c8 = &DAT_0021f9c8;
    uStack_c0 = 3;
    local_a8 = 0;
    local_b0 = 2;
    local_b8 = &local_70;
    local_70 = (undefined8 *)local_50;
    local_50._8_8_ = param_2;
    local_40 = param_3;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
    if ((param_5 == (byte *)0x0) || (*param_5 < 2)) {
      *param_1 = 0x8000000000000001;
                    /* try { // try from 001b362a to 001b3639 has its CatchHandler @ 001b36b1 */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb33ceb02c1cf9a1dE(local_e0);
    }
    else {
      *param_1 = 0x8000000000000000;
      param_1[1] = local_e0;
    }
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc65b4027f210db7eE(local_98);
  return param_1;
}