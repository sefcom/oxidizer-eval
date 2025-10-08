void _ZN8uu_pinky8platform4unix5Pinky10long_pinky17hd848aae237e2c0a5E(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined ***local_1e8;
  code *pcStack_1e0;
  undefined ***local_1d8;
  undefined ***local_1c8;
  code *pcStack_1c0;
  undefined ***local_1b8;
  undefined8 local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined4 local_194;
  undefined *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined **local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_138;
  code *pcStack_130;
  undefined ***local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined **local_b0;
  code *pcStack_a8;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ffef0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar7 = *(undefined **)(param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0x1e);
    bVar2 = *(byte *)(param_1 + 0x1b);
    bVar3 = *(byte *)(param_1 + 0x1c);
    lVar6 = *(long *)(param_1 + 0x10) * 0x18;
    do {
      local_b0 = &local_170;
      pcStack_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3d9b1dc5a3e6c5f8E;
      local_138 = &PTR_s_Login_name__In_real_life__001f9090;
      pcStack_130 = (code *)0x2;
      local_118 = &DAT_0011a8a0;
      uStack_110 = 1;
      uStack_120 = 1;
      local_170 = puVar7;
      local_128 = &local_b0;
      (*(code *)puVar4)(&local_138);
      (*(code *)
        PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_001ffef8
      )(&local_b0,*(undefined8 *)(local_170 + 8),*(undefined8 *)(local_170 + 0x10));
      if (local_b0 == (undefined **)&DAT_8000000000000000) {
        _ZN4core3ptr106drop_in_place_LT_core__result__Result_LT_uucore__features__entries__Passwd_C_std__io__error__Error_GT__GT_17h9dd5054bcb71dab2E
                  (&local_b0);
        local_138 = &PTR_s_____001f9080;
        pcStack_130 = (code *)0x1;
        local_128 = (undefined ***)0x8;
        uStack_120 = 0;
        local_118 = (undefined *)0x0;
        (*(code *)puVar4)(&local_138);
      }
      else {
        local_c8 = local_40;
        uStack_c0 = uStack_38;
        local_d8 = local_50;
        uStack_d0 = uStack_48;
        local_e8 = local_60;
        uStack_e0 = uStack_58;
        local_f8 = local_70;
        puStack_f0 = puStack_68;
        local_108 = local_80;
        uStack_104 = uStack_7c;
        uStack_100 = uStack_78;
        uStack_fc = uStack_74;
        local_138 = local_b0;
        pcStack_130 = pcStack_a8;
                    /* try { // try from 00163bb6 to 00163bc0 has its CatchHandler @ 00164039 */
        _ZN8uu_pinky8platform4unix17gecos_to_fullname17hc5cc590c8c5acc48E(&local_1c8,&local_138);
        if (local_1c8 == (undefined ***)0x8000000000000000) {
          local_168 = (undefined **)0x0;
          uStack_160 = 1;
          local_158 = 0;
          if ((undefined **)puStack_f0 != (undefined **)0x8000000000000000) goto LAB_00163c0d;
LAB_00163c61:
          local_180 = 1;
          uStack_178 = 0;
          local_188 = (undefined *)0x0;
        }
        else {
          local_158 = local_1b8;
          local_168 = (undefined **)local_1c8;
          uStack_160 = pcStack_1c0;
          if ((undefined **)puStack_f0 == (undefined **)0x8000000000000000) goto LAB_00163c61;
LAB_00163c0d:
          local_180 = local_e8;
          uStack_178 = uStack_e0;
          local_188 = puStack_f0;
        }
        local_150 = (undefined **)CONCAT44(uStack_104,local_108);
        if (local_150 == (undefined **)0x8000000000000000) {
          local_148 = 1;
          uStack_140 = 0;
          local_150 = (undefined **)0x0;
        }
        else {
          local_148 = CONCAT44(uStack_fc,uStack_100);
          uStack_140 = local_f8;
        }
        local_1e8 = &local_168;
        pcStack_1e0 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_1c8 = (undefined ***)&PTR_s__001f9020;
        pcStack_1c0 = (code *)0x2;
        puStack_1a8 = (undefined *)0x0;
        local_1b8 = (undefined ***)&local_1e8;
        local_1b0 = 1;
                    /* try { // try from 00163d19 to 00163df2 has its CatchHandler @ 00164041 */
        (*(code *)puVar4)(&local_1c8);
        if ((bVar1 & 1) != 0) {
          local_1e8 = (undefined ***)&local_188;
          pcStack_1e0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_1c8 = (undefined ***)&PTR_s_Directory__001f90b0;
          pcStack_1c0 = (code *)0x1;
          puStack_1a8 = &DAT_0011a8e0;
          local_1a0 = 1;
          local_1b8 = (undefined ***)&local_1e8;
          local_1b0 = 1;
          (*(code *)puVar4)(&local_1c8);
          local_1e8 = &local_150;
          pcStack_1e0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_1c8 = (undefined ***)&PTR_s_Shell__001f9040;
          pcStack_1c0 = (code *)0x2;
          puStack_1a8 = (undefined *)0x0;
          local_1b8 = (undefined ***)&local_1e8;
          local_1b0 = 1;
          (*(code *)puVar4)(&local_1c8);
        }
        if ((bVar2 & 1) != 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf329c2e59eb871a4E
                    (&local_1c8,local_180,uStack_178);
          local_1d8 = local_1b8;
          local_1e8 = local_1c8;
          pcStack_1e0 = pcStack_1c0;
                    /* try { // try from 00163e07 to 00163e1c has its CatchHandler @ 0016401f */
          _ZN3std4path7PathBuf4push17had6f445dae3e5da7E(&local_1e8,".project",8);
          local_1b8 = local_1d8;
          local_1c8 = local_1e8;
          pcStack_1c0 = pcStack_1e0;
                    /* try { // try from 00163e31 to 00163e52 has its CatchHandler @ 00164037 */
          _ZN3std2fs4File4open17ha0c637b6d5aad0c6E(&local_198,&local_1c8);
          uVar5 = local_194;
          if (local_198 == 1) {
            _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h7f4d083a74fe168dE
                      (&local_198);
          }
          else {
            local_1c8 = (undefined ***)&PTR_s_Project__001f9060;
            pcStack_1c0 = (code *)0x1;
            local_1b8 = (undefined ***)&DAT_00000008;
            local_1b0 = 0;
            puStack_1a8 = (undefined *)0x0;
                    /* try { // try from 00163e80 to 00163e85 has its CatchHandler @ 00163ffd */
            (*(code *)puVar4)(&local_1c8);
                    /* try { // try from 00163e86 to 00163e8d has its CatchHandler @ 00163ff8 */
            _ZN8uu_pinky8platform4unix15read_to_console17hc6a6cffdbcb4a9a1E(uVar5);
          }
        }
        if ((bVar3 & 1) != 0) {
                    /* try { // try from 00163ea6 to 00163ead has its CatchHandler @ 00164041 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf329c2e59eb871a4E
                    (&local_1c8,local_180,uStack_178);
          local_1d8 = local_1b8;
          local_1e8 = local_1c8;
          pcStack_1e0 = pcStack_1c0;
                    /* try { // try from 00163ec2 to 00163ed7 has its CatchHandler @ 00164021 */
          _ZN3std4path7PathBuf4push17had6f445dae3e5da7E(&local_1e8,&DAT_0011a910,5);
          local_1b8 = local_1d8;
          local_1c8 = local_1e8;
          pcStack_1c0 = pcStack_1e0;
                    /* try { // try from 00163eec to 00163f0d has its CatchHandler @ 00164035 */
          _ZN3std2fs4File4open17ha0c637b6d5aad0c6E(&local_198,&local_1c8);
          uVar5 = local_194;
          if (local_198 == 1) {
            _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h7f4d083a74fe168dE
                      (&local_198);
          }
          else {
            local_1c8 = (undefined ***)&PTR_s_Plan__001f9070;
            pcStack_1c0 = (code *)0x1;
            local_1b8 = (undefined ***)0x8;
            local_1b0 = 0;
            puStack_1a8 = (undefined *)0x0;
                    /* try { // try from 00163f3b to 00163f40 has its CatchHandler @ 00163fdc */
            (*(code *)puVar4)(&local_1c8);
                    /* try { // try from 00163f41 to 00163f48 has its CatchHandler @ 00163fd7 */
            _ZN8uu_pinky8platform4unix15read_to_console17hc6a6cffdbcb4a9a1E(uVar5);
          }
        }
        local_1c8 = (undefined ***)&PTR_DAT_001f8f70;
        pcStack_1c0 = (code *)0x1;
        local_1b8 = (undefined ***)0x8;
        local_1b0 = 0;
        puStack_1a8 = (undefined *)0x0;
                    /* try { // try from 00163f6f to 00163f74 has its CatchHandler @ 00164041 */
        (*(code *)puVar4)(&local_1c8);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_150);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_188);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_168);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h14fcc68f829f922fE(&local_138);
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h29ddd331d55ccf59E
                  (&uStack_120);
        _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h29ddd331d55ccf59E
                  (&local_d8);
      }
      puVar7 = puVar7 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  return;
}