undefined8 _ZN7uu_head7uu_head17h50c9b533b8c9e19eE(long *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined extraout_DL;
  char *pcVar9;
  undefined auVar10 [16];
  int local_10c;
  undefined **local_108;
  ulong uStack_100;
  undefined8 **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  code *local_98;
  undefined8 *local_90;
  code *local_88;
  long *local_80;
  ulong local_78;
  undefined local_70 [16];
  long local_60;
  long local_58;
  long local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_60 = param_1[3];
  local_78 = param_1[4];
  local_58 = local_60 + local_78 * 0x18;
  local_80 = param_1;
  lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h49c4ce57715093e8E
                    (&local_60);
  if (lVar7 != 0) {
    cVar1 = *(char *)((long)local_80 + 0x2a);
    cVar2 = *(char *)((long)local_80 + 0x29);
    cVar3 = *(char *)(local_80 + 5);
    local_50 = *local_80;
    local_c0 = local_80[1];
    bVar4 = false;
    do {
      if (cVar1 != '\0') {
LAB_001ba316:
        if (local_78 < 2) {
          if (cVar2 == '\0') goto LAB_001ba4eb;
        }
        else if (cVar3 != '\0' && cVar2 == '\0') goto LAB_001ba4eb;
        if (bVar4) {
          local_108 = &PTR_s__0022cf20;
          uStack_100 = 1;
          local_f8 = (undefined8 **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
          _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
        }
        local_108 = &PTR_s___>_standard_input_<___<___0022cf30;
        uStack_100 = 1;
        local_f8 = (undefined8 **)&DAT_00000008;
        local_f0 = 0;
        uStack_e8 = 0;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
LAB_001ba4eb:
        local_a0 = (undefined8 *)_ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
        local_108 = (undefined **)_ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(&local_a0);
        uStack_100 = CONCAT71(uStack_100._1_7_,extraout_DL) & 0xffffffffffffff01;
                    /* WARNING: Could not recover jumptable at 0x001ba521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar8 = (*(code *)(&DAT_0011dba4 + *(int *)(&DAT_0011dba4 + local_50 * 4)))();
        return uVar8;
      }
      while( true ) {
        pcVar9 = *(char **)(lVar7 + 8);
        uVar8 = *(undefined8 *)(lVar7 + 0x10);
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he651f17c72d2bfc1E
                          (pcVar9,uVar8,"-: ",1);
        if (cVar5 != '\0') goto LAB_001ba316;
        local_b0 = pcVar9;
        local_a8 = uVar8;
        _ZN3std2fs4File4open17h0c25e6f8dfd437aeE(&local_d0,pcVar9,uVar8);
        if ((int)local_d0 == 0) break;
        local_b8 = _ZN131__LT_std__io__error__Error_u20_as_u20_uucore__mods__error__FromIo_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT__GT_15map_err_context17ha41e17c1af67ee82E
                             (local_c8,local_b0,local_a8);
                    /* try { // try from 001ba359 to 001ba3df has its CatchHandler @ 001ba7f8 */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(1);
        auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_a0 = (undefined8 *)local_70;
        local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05a2559eaa6ef57cE;
        local_90 = &local_b8;
        local_88 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha092e32133e67abaE
        ;
        local_108 = (undefined **)&DAT_0022ce60;
        uStack_100 = 3;
        uStack_e8 = 0;
        local_f0 = 2;
        local_f8 = &local_a0;
        local_70 = auVar10;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_108);
        _ZN4core3ptr75drop_in_place_LT_alloc__boxed__Box_LT_uucore__mods__error__UIoError_GT__GT_17hc0cdad0ceeb81ca9E
                  (local_b8);
        lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h49c4ce57715093e8E
                          (&local_60);
        if (lVar7 == 0) {
          return 0;
        }
      }
      local_10c = local_d0._4_4_;
      if (local_78 < 2) {
        if (cVar2 != '\0') goto LAB_001ba6ed;
      }
      else if (cVar3 == '\0' || cVar2 != '\0') {
LAB_001ba6ed:
        if (bVar4) {
          local_108 = &PTR_s__0022cf20;
          uStack_100 = 1;
          local_f8 = (undefined8 **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
                    /* try { // try from 001ba719 to 001ba77a has its CatchHandler @ 001ba7ae */
          _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
        }
        local_a0 = &local_b0;
        local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05a2559eaa6ef57cE;
        local_108 = &PTR_DAT_0022cf40;
        uStack_100 = 2;
        uStack_e8 = 0;
        local_f0 = 1;
        local_f8 = &local_a0;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_108);
      }
      lVar7 = _ZN7uu_head9head_file17h48e6bcfaf0dc6df4E(&local_10c,local_80);
      local_d8 = lVar7;
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hcd6f8a6171cb1cbeE(local_10c);
      if (lVar7 != 0) {
                    /* try { // try from 001ba586 to 001ba634 has its CatchHandler @ 001ba7e9 */
        cVar5 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he651f17c72d2bfc1E
                          (pcVar9,uVar8,"-: ",1);
        if (cVar5 != '\0') {
          pcVar9 = "standard input";
          uVar8 = 0xe;
        }
        local_a0 = &local_b0;
        local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05a2559eaa6ef57cE;
        local_108 = &PTR_s_error_reading___Input_output_err_0022cf60;
        uStack_100 = 2;
        uStack_e8 = 0;
        local_f0 = 1;
        local_f8 = &local_a0;
        local_b0 = pcVar9;
        local_a8 = uVar8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hb3355800140cccf2E(local_48,&local_108);
        local_f0 = CONCAT44(local_f0._4_4_,1);
        local_f8 = (undefined8 **)local_38;
        local_d0 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h92b1183da66f27c9E(&local_108);
        local_c8 = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h8fd90a0920ebd797E_0022cfb8
        ;
        uVar6 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17h1158ea86a5f2627dE
                          (local_d0);
                    /* try { // try from 001ba64e to 001ba6d1 has its CatchHandler @ 001ba7d5 */
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar6);
        auVar10 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_a0 = (undefined8 *)local_70;
        local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h05a2559eaa6ef57cE;
        local_90 = &local_d0;
        local_88 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h8560145aaa71c4e2E
        ;
        local_108 = (undefined **)&DAT_0022ce60;
        uStack_100 = 3;
        uStack_e8 = 0;
        local_f0 = 2;
        local_f8 = &local_a0;
        local_70 = auVar10;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_108);
                    /* try { // try from 001ba6dc to 001ba6e0 has its CatchHandler @ 001ba7e9 */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hb08365f676f654b9E
                  (local_d0,local_c8);
      }
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h6d35cd5749ca4149E
                (&local_d8);
      lVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h49c4ce57715093e8E
                        (&local_60);
      bVar4 = true;
    } while (lVar7 != 0);
  }
  return 0;
}