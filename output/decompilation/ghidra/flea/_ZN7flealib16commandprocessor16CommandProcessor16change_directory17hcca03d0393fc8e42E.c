void _ZN7flealib16commandprocessor16CommandProcessor16change_directory17hcca03d0393fc8e42E
               (undefined4 *param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte extraout_DL;
  byte extraout_DL_00;
  byte bVar5;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined4 **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8db7540a69ffbf83E
                    (param_2,param_3,&DAT_0016a0d0,2);
  if (cVar1 == '\0') {
    if (param_3 == 0) {
      uVar4 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
      if (3 < uVar4) {
        local_a8 = &PTR_DAT_00808648;
        uStack_a0 = 1;
        local_98 = (undefined4 **)&DAT_00000008;
        local_90 = 0;
        uStack_88 = 0;
        local_b0 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                             (&PTR_DAT_00808658);
        local_d0 = &DAT_0016a0f1;
        local_c8 = 0x19;
        local_c0 = &DAT_0016a0f1;
        local_b8 = 0x19;
        _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_a8,4,&local_d0);
      }
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
                (param_1,&DAT_0016a0b9,0x17);
      return;
    }
    _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17h470d5afd4b782ddcE(&local_a8,param_4 + 0x10);
    lVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17had105b0bcb18ac9eE
                      (&local_a8,&PTR_DAT_00808670);
    bVar5 = extraout_DL_00 & 1;
                    /* try { // try from 0046d46f to 0046d529 has its CatchHandler @ 0046d7b9 */
    (*(code *)PTR__ZN7flealib10fileserver10FileServer16change_directory17h46ba8243e2a4185eE_00828290
    )(&local_48,lVar2 + 8,param_2,param_3);
    local_68 = local_38;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    lVar3 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
    if (lVar3 != 0) {
      local_58 = &local_78;
      local_50 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_a8 = &PTR_DAT_00808638;
      uStack_a0 = 1;
      uStack_88 = 0;
      local_98 = &local_58;
      local_90 = 1;
                    /* try { // try from 0046d723 to 0046d76b has its CatchHandler @ 0046d79b */
      local_b0 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                           (&PTR_DAT_008086a0);
      local_d0 = &DAT_0016a0f1;
      local_c8 = 0x19;
      local_c0 = &DAT_0016a0f1;
      local_b8 = 0x19;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_a8,1,&local_d0);
    }
  }
  else {
    _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17h470d5afd4b782ddcE(&local_a8,param_4 + 0x10);
    lVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17had105b0bcb18ac9eE
                      (&local_a8,&PTR_DAT_008086b8);
    bVar5 = extraout_DL & 1;
                    /* try { // try from 0046d37c to 0046d430 has its CatchHandler @ 0046d7ca */
    (*(code *)
      PTR__ZN7flealib10fileserver10FileServer19change_directory_up17hae49b0719f1d97deE_00828288)
              (&local_48,lVar2 + 8);
    local_68 = local_38;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    lVar3 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
    if (lVar3 != 0) {
      local_58 = &local_78;
      local_50 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_a8 = &PTR_DAT_00808638;
      uStack_a0 = 1;
      uStack_88 = 0;
      local_98 = &local_58;
      local_90 = 1;
                    /* try { // try from 0046d5bc to 0046d604 has its CatchHandler @ 0046d7aa */
      local_b0 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                           (&PTR_DAT_008086e8);
      local_d0 = &DAT_0016a0f1;
      local_c8 = 0x19;
      local_c0 = &DAT_0016a0f1;
      local_b8 = 0x19;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_a8,1,&local_d0);
    }
  }
  *(undefined8 *)(param_1 + 4) = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_74;
  param_1[2] = uStack_70;
  param_1[3] = uStack_6c;
  _ZN4core3ptr88drop_in_place_LT_std__sync__mutex__MutexGuard_LT_flealib__fileserver__FileServer_GT__GT_17h22f2e237e3cdbefbE
            (lVar2,bVar5);
  return;
}