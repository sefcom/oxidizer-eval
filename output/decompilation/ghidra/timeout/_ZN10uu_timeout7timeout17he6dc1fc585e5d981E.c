undefined  [16]
_ZN10uu_timeout7timeout17he6dc1fc585e5d981E
          (long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,int param_7,char param_8,char param_9,undefined param_10)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 local_1a8;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  int local_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined local_130 [16];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  
  local_1a0 = param_7;
  local_19c = param_4;
  local_148 = param_6;
  if (param_8 == '\0') {
    (*(code *)PTR_setpgid_0021acb0)(0,0);
  }
  iVar3 = (*(code *)PTR__ZN6uucore8features7signals18enable_pipe_errors17he7938a115a9dd81bE_0021acb8
          )();
  if (iVar3 != 0x86) {
    auVar8._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17hbad3cb5039bc98ddE(&stack0xffffffffffffffe0);
    auVar8._8_8_ = &
                   PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h700d3e94e2b313d5E_00213a20
    ;
    return auVar8;
  }
  if (param_2 == 0) {
    uVar5 = (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_0021aba0)
                      (0,0,&PTR_s_src_uu_timeout_src_timeout_rs_00212890);
                    /* catch() { ... } // from try @ 0016de58 with catch @ 0016df4e */
                    /* try { // try from 0016df56 to 0016df6b has its CatchHandler @ 0016df9b */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h40e3195548028f1cE(local_1a8);
    _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_std__process__ExitStatus_GT__C_std__io__error__Error_GT__GT_17hb9c9de528993b73fE
              (param_9,CONCAT44(uStack_18c,local_190));
    _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17hd368f76fcc8120b7E(&local_184);
    auVar8 = _Unwind_Resume(uVar5);
    return auVar8;
  }
  _ZN3std7process7Command3new17h13aef0b1002d7d4dE(&local_118,param_1);
                    /* try { // try from 0016dc17 to 0016dc6c has its CatchHandler @ 0016df83 */
  _ZN3std7process7Command4args17h370dfeef860fca48E(&local_118,param_1 + 0x18,param_2 + -1);
  _ZN3std7process7Command5stdin17h3011538398e27e14E(&local_118);
  _ZN3std7process7Command6stdout17h6522b8e9652dacb5E(&local_118);
  _ZN3std7process7Command6stderr17h511fd45e70e686f7E(&local_118);
  (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_0021acc0)(&local_168,&local_118);
  if ((int)local_168 == 1) {
    uVar5 = _ZN10uu_timeout7timeout28__u7b__u7b_closure_u7d__u7d_17h3eb8a63726ee3c05E(local_160);
    _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h42ec23edd69e1e2dE(&local_118);
    auVar2._8_8_ = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h8795ec55eec71da5E_002128c8
    ;
    auVar2._0_8_ = uVar5;
    return auVar2;
  }
  local_184 = local_168._4_4_;
  local_180 = (undefined4)local_160;
  uStack_17c = local_160._4_4_;
  uStack_178 = uStack_158;
  uStack_174 = uStack_154;
  local_170 = local_150;
                    /* try { // try from 0016dcbe to 0016dce6 has its CatchHandler @ 0016df6e */
  _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h42ec23edd69e1e2dE(&local_118);
  _ZN10uu_timeout15unblock_sigchld17h4453b7e3fc558475E();
  (*(code *)
    PTR__ZN75__LT_std__process__Child_u20_as_u20_uucore__features__process__ChildExt_GT_15wait_or_timeout17he25bb3510a5d6b08E_0021ac90
  )(&local_198,&local_184,param_3,local_19c);
  if (local_198 == 1) {
                    /* try { // try from 0016dcf0 to 0016dda3 has its CatchHandler @ 0016df5d */
    _ZN10uu_timeout11send_signal17h21a409eed1ad1074E(&local_184,param_5,param_8);
    auVar7 = (*(code *)
               PTR__ZN10uu_timeout6status148__LT_impl_u20_core__convert__From_LT_uu_timeout__status__ExitStatus_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17he2608e6770b25b35E_0021ab98
             )(1);
  }
  else if (local_194 == 1) {
    if ((local_190 & 0x7f) == 0) {
      uVar4 = local_190 >> 8 & 0xff;
    }
    else {
      uVar4 = _ZN10uu_timeout7timeout28__u7b__u7b_closure_u7d__u7d_17hdde2a0f6b24f5475E(local_190);
    }
    auVar7 = (*(code *)
               PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_0021ac40
             )(uVar4);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _ZN10uu_timeout17report_if_verbose17ha1199c5238d9a8e5E(param_5,uVar5,uVar1,param_10);
    _ZN10uu_timeout11send_signal17h21a409eed1ad1074E(&local_184,param_5,param_8);
    if (local_1a0 == 1000000000) {
      (*(code *)PTR__ZN3std7process5Child4wait17h7e33de4911114104E_0021ac98)(&local_118,&local_184);
      if ((int)local_118 == 1) {
        auVar7 = (*(code *)
                   PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0021acd0
                 )(uStack_110);
                    /* try { // try from 0016ddaf to 0016ddb5 has its CatchHandler @ 0016df6e */
        _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_std__process__ExitStatus_GT__C_std__io__error__Error_GT__GT_17hb9c9de528993b73fE
                  (local_198,CONCAT44(uStack_18c,local_190));
        goto LAB_0016ded6;
      }
      if (param_9 == '\0') {
        cVar6 = '\0';
      }
      else {
        if (((ulong)local_118 & 0x7f00000000) == 0) {
          auVar7 = (*(code *)
                     PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_0021ac40
                   )(local_118._4_4_ >> 8 & 0xff);
          goto LAB_0016deca;
        }
        cVar6 = ('\x01' < (char)(((byte)((ulong)local_118 >> 0x20) & 0x7f) + 1)) * '\x02';
      }
      auVar7 = (*(code *)
                 PTR__ZN10uu_timeout6status148__LT_impl_u20_core__convert__From_LT_uu_timeout__status__ExitStatus_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17he2608e6770b25b35E_0021ab98
               )(cVar6);
    }
    else {
                    /* try { // try from 0016ddbb to 0016dde9 has its CatchHandler @ 0016df5d */
      _ZN10uu_timeout20wait_or_kill_process17h3c57ed1f2e84097fE
                (&local_140,&local_184,uVar5,uVar1,local_148,local_1a0,param_9,param_8,param_10);
      if (local_140 == 1) {
        local_1a8 = local_138;
        local_168 = &local_1a8;
        local_160 = 
        PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_0021ab78
        ;
        local_118 = &DAT_0011ace0;
        uStack_110 = 1;
        local_f8 = 0;
        local_108 = &local_168;
        local_100 = 1;
                    /* try { // try from 0016de58 to 0016dea4 has its CatchHandler @ 0016df4e */
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h689cb97ed54ab1f6E(local_130,&local_118);
        local_100 = CONCAT44(local_100._4_4_,0x7d);
        local_108 = (undefined8 *)local_120;
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37b75c6be93c3797E(&local_118);
                    /* try { // try from 0016dead to 0016dec3 has its CatchHandler @ 0016df5d */
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h40e3195548028f1cE(local_1a8);
        auVar7._8_8_ = &
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h8795ec55eec71da5E_002128c8
        ;
        auVar7._0_8_ = uVar5;
      }
      else {
                    /* try { // try from 0016df20 to 0016df3a has its CatchHandler @ 0016df5d */
        auVar7 = (*(code *)
                   PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h9e5cddc9f9643acfE_0021ac40
                 )(local_13c);
      }
    }
  }
LAB_0016deca:
                    /* try { // try from 0016decf to 0016ded5 has its CatchHandler @ 0016df6e */
  _ZN4core3ptr125drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_std__process__ExitStatus_GT__C_std__io__error__Error_GT__GT_17hb9c9de528993b73fE
            (local_198,CONCAT44(uStack_18c,local_190));
LAB_0016ded6:
  _ZN4core3ptr40drop_in_place_LT_std__process__Child_GT_17hd368f76fcc8120b7E(&local_184);
  return auVar7;
}