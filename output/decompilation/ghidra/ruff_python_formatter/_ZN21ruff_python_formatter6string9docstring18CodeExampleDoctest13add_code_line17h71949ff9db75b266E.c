void _ZN21ruff_python_formatter6string9docstring18CodeExampleDoctest13add_code_line17h71949ff9db75b266E
               (undefined8 *param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  ulong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulong local_68;
  undefined local_60 [16];
  
                    /* try { // try from 00424f01 to 00424fc5 has its CatchHandler @ 004250a5 */
  _ZN4core3str21__LT_impl_u20_str_GT_10split_once17h7acac61c42a54f40E(&local_88,*param_3,param_3[1])
  ;
  if (local_88 == 0) {
    local_60._0_8_ = param_2[4];
    uStack_80 = *(undefined4 *)param_2;
    uStack_7c = *(undefined4 *)((long)param_2 + 4);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 2);
    uStack_6c = *(undefined4 *)((long)param_2 + 0x14);
    local_68 = param_2[3];
    ppuVar5 = &PTR_s_crates_ruff_python_formatter_src_0067f2d0;
  }
  else {
    cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hbe429b610375a1aeE
                      (param_2[3],param_2[4],local_88,CONCAT44(uStack_7c,uStack_80));
    if (cVar4 != '\0') {
      local_88 = local_88 & 0xffffffff00000000;
      auVar6 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x20,&local_88);
      local_60 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                           (auVar6._0_8_,auVar6._8_8_,CONCAT44(uStack_74,local_78),
                            CONCAT44(uStack_6c,uStack_70));
      if (local_60._0_8_ == 0) {
        if (CONCAT44(uStack_6c,uStack_70) != 0) {
          local_60._0_8_ = param_2[4];
          uStack_80 = *(undefined4 *)param_2;
          uStack_7c = *(undefined4 *)((long)param_2 + 4);
          local_78 = *(undefined4 *)(param_2 + 1);
          uStack_74 = *(undefined4 *)((long)param_2 + 0xc);
          uStack_70 = *(undefined4 *)(param_2 + 2);
          uStack_6c = *(undefined4 *)((long)param_2 + 0x14);
          local_68 = param_2[3];
          ppuVar5 = &PTR_s_crates_ruff_python_formatter_src_0067f270;
          goto LAB_00425044;
        }
        local_60 = ZEXT816(1);
      }
      local_68 = param_3[4];
      local_88 = *param_3;
      uStack_80 = *(undefined4 *)(param_3 + 1);
      uStack_7c = *(undefined4 *)((long)param_3 + 0xc);
      local_78 = *(undefined4 *)(param_3 + 2);
      uStack_74 = *(undefined4 *)((long)param_3 + 0x14);
      uStack_70 = *(undefined4 *)(param_3 + 3);
      uStack_6c = *(undefined4 *)((long)param_3 + 0x1c);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hdd3e9f5ed333529eE
                (param_2,&local_88,&PTR_s_crates_ruff_python_formatter_src_0067f288);
      local_88 = 0x8000000000000004;
      _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
                (param_4,&local_88,&PTR_s_crates_ruff_python_formatter_src_0067f2a0);
      param_1[4] = param_2[4];
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar3;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      return;
    }
    local_60._0_8_ = param_2[4];
    uStack_80 = *(undefined4 *)param_2;
    uStack_7c = *(undefined4 *)((long)param_2 + 4);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_70 = *(undefined4 *)(param_2 + 2);
    uStack_6c = *(undefined4 *)((long)param_2 + 0x14);
    local_68 = param_2[3];
    ppuVar5 = &PTR_s_crates_ruff_python_formatter_src_0067f2b8;
  }
LAB_00425044:
  local_88 = 0x8000000000000000;
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h8415858ef55ebe0cE
            (param_4,&local_88,ppuVar5);
  *param_1 = 0x8000000000000000;
  return;
}