void _ZN11uu_unexpand10write_tabs17h8e9e933eb88f89cfE
               (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
               byte param_6,char param_7,byte param_8)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  long local_88;
  undefined local_80 [16];
  undefined *local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_40;
  code *local_38;
  
  if (param_7 == '\0') {
    if (param_8 != 0) goto LAB_001b2769;
  }
  else {
    param_8 = 1;
LAB_001b2769:
    if ((param_6 == 0) && (param_4 + 1 < param_5)) goto LAB_001b28b9;
  }
  if ((param_5 <= param_4) || ((param_8 & param_6) == 0 && param_7 == '\0')) {
LAB_001b278b:
    lVar3 = param_5 - param_4;
    if (param_4 <= param_5 && lVar3 != 0) {
      do {
        lVar1 = param_1[2];
        if ((ulong)(*param_1 - lVar1) < 2) {
          local_88 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h37baa5ae29b8f289E
                               (param_1," ",1);
          if (local_88 != 0) {
                    /* try { // try from 001b27e2 to 001b2899 has its CatchHandler @ 001b29d1 */
            local_80 = _ZN6uucore9util_name17h60d842bf27b05e82E();
            local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf6a1d2ab1cd5850eE;
            local_70 = &DAT_0021d100;
            local_68 = 2;
            local_50 = 0;
            local_60 = &local_40;
            local_58 = 1;
            local_40 = (undefined8 *)local_80;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
            local_80._8_8_ =
                 _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
            ;
            local_70 = &DAT_0021d120;
            local_68 = 2;
            local_50 = 0;
            local_58 = 1;
            local_80._0_8_ = &local_88;
            local_60 = (undefined8 **)local_80;
            _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
            uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
            goto LAB_001b29d1;
          }
        }
        else {
          *(undefined *)(param_1[1] + lVar1) = 0x20;
          param_1[2] = lVar1 + 1;
        }
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    return;
  }
LAB_001b28b9:
  do {
    auVar5 = _ZN11uu_unexpand12next_tabstop17h948056bd8ee01f21E(param_2,param_3,param_4);
    if ((auVar5._0_8_ != 1) || (uVar4 = auVar5._8_8_ + param_4, param_5 < uVar4)) goto LAB_001b278b;
    lVar3 = param_1[2];
    if ((ulong)(*param_1 - lVar3) < 2) {
      local_88 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17h37baa5ae29b8f289E
                           (param_1,"\t",1);
    }
    else {
      *(undefined *)(param_1[1] + lVar3) = 9;
      param_1[2] = lVar3 + 1;
      local_88 = 0;
    }
    param_4 = uVar4;
  } while (local_88 == 0);
                    /* try { // try from 001b2919 to 001b29d0 has its CatchHandler @ 001b29df */
  local_80 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hf6a1d2ab1cd5850eE;
  local_70 = &DAT_0021d100;
  local_68 = 2;
  local_50 = 0;
  local_60 = &local_40;
  local_58 = 1;
  local_40 = (undefined8 *)local_80;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
  local_80._8_8_ =
       _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E;
  local_70 = &DAT_0021d120;
  local_68 = 2;
  local_50 = 0;
  local_58 = 1;
  local_80._0_8_ = &local_88;
  local_60 = (undefined8 **)local_80;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_70);
  uVar2 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
LAB_001b29d1:
                    /* catch() { ... } // from try @ 001b27e2 with catch @ 001b29d1 */
                    /* try { // try from 001b29d8 to 001b29ea has its CatchHandler @ 001b29f3 */
  _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc92eec0589bd933aE(local_88);
  _Unwind_Resume(uVar2);
  return;
}