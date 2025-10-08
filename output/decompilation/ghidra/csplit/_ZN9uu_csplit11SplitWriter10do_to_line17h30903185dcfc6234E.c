void _ZN9uu_csplit11SplitWriter10do_to_line17h30903185dcfc6234E
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5
               ,long param_6)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  bool bVar7;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  *(undefined *)(param_6 + 0x58) = 1;
  *(undefined8 *)(param_6 + 0x50) = 1;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h726fb365ecba84afE
            (&uStack_a0,param_3,param_4);
  puVar4 = PTR__ZN9uu_csplit11SplitWriter7writeln17h71cbc4937ea20739E_003711b8;
  local_a8 = 1;
  do {
                    /* try { // try from 002168c0 to 002168ca has its CatchHandler @ 00216af0 */
    _ZN92__LT_uu_csplit__InputSplitter_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9e28d1a528fdaefbE
              (&local_80,param_6);
    if (local_78 == -0x7fffffffffffffff) {
                    /* try { // try from 002169b2 to 002169bb has its CatchHandler @ 00216adf */
      _ZN4core3ptr177drop_in_place_LT_core__option__Option_LT__LP_usize_C_core__result__Result_LT_alloc__string__String_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__RP__GT__GT_17hd170b8d8dcb5eaffE
                (&local_80);
LAB_00216a1d:
                    /* try { // try from 00216a1d to 00216a27 has its CatchHandler @ 00216adf */
      (*(code *)PTR__ZN9uu_csplit11SplitWriter12finish_split17h02c3d655ecbf09e8E_003711c0)(param_2);
      param_1[4] = local_88;
      param_1[2] = local_98;
      param_1[3] = uStack_90;
      *param_1 = local_a8;
      param_1[1] = uStack_a0;
      return;
    }
    if (local_78 == -0x8000000000000000) {
      *param_1 = 0xc;
      param_1[1] = local_70;
      param_1[2] = local_68;
LAB_00216a63:
      _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h75a87585a3eed1deE
                (&local_a8);
      return;
    }
    local_c0 = local_78;
    local_b8 = local_70;
    bVar7 = param_5 < local_80 + 1U;
    bVar2 = !bVar7 && param_5 != local_80 + 1U;
    local_b0 = local_68;
    if ((char)(bVar2 - bVar7) != '\x01') {
      if (bVar2 == bVar7) {
        cVar1 = *(char *)(*(long *)(param_2 + 0x20) + 99);
        if (cVar1 == '\0') {
                    /* try { // try from 00216957 to 00216968 has its CatchHandler @ 00216add */
          _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h0772b428f360f01cE
                    (&local_60,param_6,local_80,&local_c0);
          _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
                    (&local_60);
          if (local_60 != (undefined **)0x8000000000000000) {
            ppuVar6 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c18;
            goto LAB_00216a8f;
          }
        }
                    /* try { // try from 0021698e to 00216997 has its CatchHandler @ 00216aca */
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h75a87585a3eed1deE
                  (&local_a8);
        local_a8 = 0xd;
        if (cVar1 != '\0') {
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_c0);
        }
      }
      else {
                    /* try { // try from 002169d7 to 002169e8 has its CatchHandler @ 00216add */
        _ZN9uu_csplit22InputSplitter_LT_I_GT_18add_line_to_buffer17h0772b428f360f01cE
                  (&local_60,param_6,local_80,&local_c0);
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17hac6e165de92e876fE
                  (&local_60);
        if (local_60 != (undefined **)0x8000000000000000) {
          ppuVar6 = &PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00341c00;
LAB_00216a8f:
          local_60 = &PTR_s_the_buffer_is_big_enough_to_cont_00341bf0;
          local_58 = 1;
          local_50 = 8;
          local_48 = 0;
          uStack_40 = 0;
                    /* try { // try from 00216ab1 to 00216ab9 has its CatchHandler @ 00216add */
          (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00370fc8)
                    (&local_60,ppuVar6);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
                    /* try { // try from 00216a0a to 00216a13 has its CatchHandler @ 00216abc */
        _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_uu_csplit__csplit_error__CsplitError_GT__GT_17h75a87585a3eed1deE
                  (&local_a8);
        local_a8 = 0xd;
      }
      goto LAB_00216a1d;
    }
                    /* try { // try from 0021691c to 00216926 has its CatchHandler @ 00216ae1 */
    lVar5 = (*(code *)puVar4)(param_2,local_70,local_68);
    if (lVar5 != 0) {
      *param_1 = 0;
      param_1[1] = lVar5;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_c0);
      goto LAB_00216a63;
    }
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h61638e650d01877fE(&local_c0);
  } while( true );
}