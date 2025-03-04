void _ZN6uu_cut9cut_files17hab9ba34aeaa70600E(long param_1,ulong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong *puVar7;
  undefined **ppuVar8;
  undefined auVar9 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined **local_c8;
  code *local_c0;
  uint local_b4;
  undefined *local_b0;
  undefined **ppuStack_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_80;
  undefined **local_78;
  ulong *local_70;
  ulong local_68;
  ulong local_60;
  ulong *local_58;
  long local_50;
  long local_48;
  long local_40;
  ulong local_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  local_58 = param_2;
  local_50 = param_1;
  if (lVar3 == 0) {
                    /* try { // try from 001b6dbd to 001b6df3 has its CatchHandler @ 001b72f6 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h5054b97c46bbc40bE
              (&local_b0,"-: \n: Is a directory\n",1);
    local_c8 = local_a0;
    local_d8._0_8_ = local_b0;
    local_d8._8_8_ = ppuStack_a8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17he294ab4259f19bacE(param_1,local_d8);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  local_48 = *(long *)(param_1 + 8);
  local_40 = local_48 + lVar3 * 0x18;
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c649708cac16010E
                    (&local_48);
  if (lVar3 == 0) {
LAB_001b72c8:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h7a16c3da1cf76162E
              (local_50);
    return;
  }
  local_38 = *local_58;
  local_60 = local_58[8];
  local_68 = local_58[9];
  local_70 = local_58 + 1;
  local_b4 = 0;
LAB_001b6e7a:
  if ((local_b4 & 1) != 0) {
    do {
      ppuVar6 = *(undefined ***)(lVar3 + 8);
      ppuVar8 = *(undefined ***)(lVar3 + 0x10);
                    /* try { // try from 001b6fd1 to 001b70bc has its CatchHandler @ 001b730b */
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9e95b78712a5b126E
                        (ppuVar6,ppuVar8,"-: \n: Is a directory\n",1);
      if (cVar1 == '\0') {
        cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(ppuVar6,ppuVar8);
        if (cVar1 == '\0') goto LAB_001b70d0;
        local_d8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_e8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hafe5f0e7dc41fbf4E;
        local_b0 = &DAT_00228e58;
        ppuStack_a8 = (undefined **)0x2;
        local_90 = 0;
        local_98 = 1;
        local_e8._0_8_ = local_d8;
        local_a0 = (undefined **)local_e8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
        local_d8._0_8_ = (undefined *)0x0;
        local_c0 = (code *)((ulong)local_c0 & 0xffffffffffffff00);
        local_e8._8_8_ =
             _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_b0 = &DAT_00228e78;
        ppuStack_a8 = (undefined **)0x2;
        local_90 = 0;
        local_98 = 1;
        local_e8._0_8_ = local_d8;
        local_d8._8_8_ = ppuVar6;
        local_c8 = ppuVar8;
        local_a0 = (undefined **)local_e8;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
      }
      lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c649708cac16010E
                        (&local_48);
      if (lVar3 == 0) goto LAB_001b72c8;
    } while( true );
  }
  while( true ) {
    ppuVar6 = *(undefined ***)(lVar3 + 8);
    ppuVar8 = *(undefined ***)(lVar3 + 0x10);
                    /* try { // try from 001b6e98 to 001b6f87 has its CatchHandler @ 001b7309 */
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h9e95b78712a5b126E
                      (ppuVar6,ppuVar8,"-: \n: Is a directory\n",1);
    if (cVar1 != '\0') break;
    cVar1 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(ppuVar6,ppuVar8);
    if (cVar1 == '\0') goto LAB_001b70d0;
    local_d8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_e8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hafe5f0e7dc41fbf4E;
    local_b0 = &DAT_00228e58;
    ppuStack_a8 = (undefined **)0x2;
    local_90 = 0;
    local_98 = 1;
    local_e8._0_8_ = local_d8;
    local_a0 = (undefined **)local_e8;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    local_d8._0_8_ = (undefined *)0x0;
    local_c0 = (code *)((ulong)local_c0 & 0xffffffffffffff00);
    local_e8._8_8_ =
         _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_b0 = &DAT_00228e78;
    ppuStack_a8 = (undefined **)0x2;
    local_90 = 0;
    local_98 = 1;
    local_e8._0_8_ = local_d8;
    local_d8._8_8_ = ppuVar6;
    local_c8 = ppuVar8;
    local_a0 = (undefined **)local_e8;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
    lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c649708cac16010E
                      (&local_48);
    if (lVar3 == 0) goto LAB_001b72c8;
  }
  if (local_38 < 2) {
    uVar4 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    puVar7 = local_70;
    puVar5 = (undefined *)_ZN6uu_cut9cut_bytes17h04bd5adc21115d76E(uVar4,local_60,local_68,local_70)
    ;
  }
  else {
    uVar4 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
    puVar7 = local_70;
    puVar5 = (undefined *)
             _ZN6uu_cut10cut_fields17h5b603ad8eeef3f36E(uVar4,local_60,local_68,local_70);
  }
  local_b4 = (uint)CONCAT71((int7)((ulong)puVar7 >> 8),1);
  if (puVar5 != (undefined *)0x0) {
    local_78 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
    ;
    local_80 = puVar5;
    uVar2 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                      (puVar5);
                    /* try { // try from 001b7232 to 001b72a4 has its CatchHandler @ 001b72e7 */
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar2);
    auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_d8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hafe5f0e7dc41fbf4E;
    local_c8 = &local_80;
    local_c0 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5c8ad0c11d220d0dE
    ;
    local_b0 = &DAT_00228e28;
    ppuStack_a8 = (undefined **)0x3;
    local_90 = 0;
    local_98 = 2;
    local_d8._0_8_ = local_e8;
    local_a0 = (undefined **)local_d8;
    local_e8 = auVar9;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
                    /* try { // try from 001b72a5 to 001b72ae has its CatchHandler @ 001b7307 */
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hd9512be231cb7e3dE
              (&local_80);
  }
  goto LAB_001b72af;
LAB_001b70d0:
                    /* try { // try from 001b70d0 to 001b7144 has its CatchHandler @ 001b7307 */
  _ZN3std2fs4File4open17h862e55e715a37fbfE(&local_b0,ppuVar6,ppuVar8);
  _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17hd65893d8ae3f9995E
            (local_d8,&local_b0,lVar3);
  puVar5 = (undefined *)local_d8._0_8_;
  ppuVar6 = (undefined **)local_d8._8_8_;
  if ((undefined *)local_d8._0_8_ == (undefined *)0x0) {
    puVar5 = (undefined *)
             _ZN6uu_cut9cut_files28__u7b__u7b_closure_u7d__u7d_17h0eca3536022a71dcE
                       (local_58,local_d8._8_8_ & 0xffffffff);
    ppuVar6 = &
              PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18e10280f0a721dfE_00228da0
    ;
    if (puVar5 == (undefined *)0x0) goto LAB_001b72af;
  }
                    /* try { // try from 001b715f to 001b71d7 has its CatchHandler @ 001b72f8 */
  local_80 = puVar5;
  local_78 = ppuVar6;
  uVar2 = (*(code *)ppuVar6[0xc])(puVar5);
  _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar2);
  auVar9 = _ZN6uucore9util_name17h60d842bf27b05e82E();
  local_d8._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hafe5f0e7dc41fbf4E;
  local_c8 = &local_80;
  local_c0 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5c8ad0c11d220d0dE
  ;
  local_b0 = &DAT_00228e28;
  ppuStack_a8 = (undefined **)0x3;
  local_90 = 0;
  local_98 = 2;
  local_d8._0_8_ = local_e8;
  local_a0 = (undefined **)local_d8;
  local_e8 = auVar9;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_b0);
                    /* try { // try from 001b71d8 to 001b7209 has its CatchHandler @ 001b7307 */
  _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hd9512be231cb7e3dE
            (&local_80);
LAB_001b72af:
  lVar3 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3c649708cac16010E
                    (&local_48);
  if (lVar3 == 0) goto LAB_001b72c8;
  goto LAB_001b6e7a;
}