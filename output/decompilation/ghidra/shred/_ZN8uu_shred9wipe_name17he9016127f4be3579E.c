void _ZN8uu_shred9wipe_name17he9016127f4be3579E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 *local_218;
  code *local_210;
  undefined8 *puStack_208;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined *local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined local_1b8 [16];
  undefined8 *puStack_1a8;
  ulong local_1a0;
  undefined8 local_198;
  long local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined *local_148;
  undefined local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined *local_120;
  long *local_118;
  undefined *local_110;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  local_1c0 = param_5;
  local_1bc = param_4;
  local_180 = param_1;
  lVar4 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_00200bd0)(param_2,param_3);
  if (lVar4 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00200cf8)
              (&PTR_s_src_uu_shred_src_shred_rs_001fa290);
  }
  else {
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00200bc8)(&local_138,lVar4);
    puVar3 = local_128;
    if (((ulong)local_138 & 1) == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc7ad242b1d3efe8eE
                (&local_138,param_2,param_3);
      local_1e8 = local_128;
      local_1f8 = (undefined4)local_138;
      uStack_1f4 = local_138._4_4_;
      uStack_1f0 = (undefined4)uStack_130;
      uStack_1ec = uStack_130._4_4_;
      local_150 = 1;
      local_148 = puVar3;
      local_140 = 0;
      auVar6 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_14spec_next_back17h4ff96a92f286cfe4E
                         (&local_150);
      uVar5 = auVar6._8_8_;
      if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        do {
                    /* try { // try from 001651ed to 001651fc has its CatchHandler @ 00165606 */
          _ZN8uu_shred12FilenameIter3new17hd6443cd1750eb6daE(&local_68,uVar5);
          local_168 = local_58;
          uStack_160 = uStack_50;
          local_178 = local_68;
          uStack_174 = uStack_64;
          uStack_170 = uStack_60;
          uStack_16c = uStack_5c;
          while( true ) {
                    /* try { // try from 00165220 to 0016524d has its CatchHandler @ 00165621 */
            (*(code *)
              PTR__ZN81__LT_uu_shred__FilenameIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7014cc2a98dde122E_00200d58
            )(local_48,&local_178);
            _ZN3std4path4Path14with_file_name17h8d4e31eec5c8dbb1E
                      (&local_1d8,param_2,param_3,local_48);
                    /* try { // try from 00165258 to 0016526f has its CatchHandler @ 0016560d */
            _ZN3std2fs8metadata17ha5a1382d2d84ac19E
                      (&local_138,CONCAT44(uStack_1cc,uStack_1d0),CONCAT44(uStack_1c4,uStack_1c8));
            puVar3 = (undefined *)local_138;
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hf505446dc2c0cf57E
                      (&local_138);
            if ((int)puVar3 == 2) break;
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha28b79d3b0f8016bE
                      (CONCAT44(uStack_1d4,local_1d8),CONCAT44(uStack_1cc,uStack_1d0));
          }
                    /* try { // try from 00165290 to 00165429 has its CatchHandler @ 0016560b */
          local_188 = _ZN3std2fs6rename17h627f7751548d14cbE(&local_1f8,&local_1d8);
          if (local_188 != 0) goto LAB_00165494;
          if ((char)local_1bc != '\0') {
            local_1b8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
            local_218 = (undefined8 *)local_1b8;
            local_210 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
            local_138 = (undefined8 *)&DAT_001f9f98;
            uStack_130 = (undefined *)0x2;
            local_118 = (long *)0x0;
            local_120 = (undefined *)0x1;
            local_128 = (undefined *)&local_218;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_138);
            local_1b8._8_8_ = CONCAT44(uStack_1ec,uStack_1f0);
            local_1b8._0_8_ = 1;
            puStack_1a8 = (undefined8 *)local_1e8;
            local_1a0 = local_1a0 & 0xffffffffffffff00;
            local_218 = (undefined8 *)local_1b8;
            local_210 = (code *)
                        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
            ;
            puStack_208 = &local_88;
            local_200 = 
            PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00200e78
            ;
            local_138 = (undefined8 *)&DAT_001fa220;
            uStack_130 = (undefined *)0x3;
            local_118 = (long *)0x0;
            local_120 = (undefined *)0x2;
            local_128 = (undefined *)&local_218;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_138);
          }
          if ((char)local_1c0 == '\x03') {
            local_218 = (undefined8 *)0x1b600000000;
            uVar2 = (ulong)local_210 >> 0x10;
            local_210 = (code *)CONCAT62((uint6)uVar2 & 0xffff00000000,0x100);
            _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h3081668db5704993E
                      (&local_138,CONCAT44(uStack_1cc,uStack_1d0),CONCAT44(uStack_1c4,uStack_1c8));
            puStack_1a8 = (undefined8 *)local_128;
            local_1b8._0_4_ = SUB84(local_138,0);
            local_1b8._4_4_ = local_138._4_4_;
            local_1b8._8_8_ = uStack_130;
            _ZN3std2fs11OpenOptions4open17h4118912c5a12bddbE(&local_138,&local_218,local_1b8);
            local_1b8._0_4_ =
                 _ZN4core6result19Result_LT_T_C_E_GT_6expect17h34b28eb743e6c5c9E(&local_138);
                    /* try { // try from 0016542e to 00165440 has its CatchHandler @ 001655f8 */
            uVar5 = (*(code *)PTR__ZN3std2fs4File8sync_all17hd9ac1cd9a387b5e9E_00200e80)(local_1b8);
            _ZN4core6result19Result_LT_T_C_E_GT_6expect17h240243edbda98b4aE(uVar5);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h242f54cc5db43aa8E(local_1b8._0_4_);
          }
          local_128 = (undefined *)CONCAT44(uStack_1c4,uStack_1c8);
          local_138 = (undefined8 *)CONCAT44(uStack_1d4,local_1d8);
          uStack_130 = (undefined *)CONCAT44(uStack_1cc,uStack_1d0);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha28b79d3b0f8016bE
                    (CONCAT44(uStack_1f4,local_1f8),CONCAT44(uStack_1ec,uStack_1f0));
          local_1e8 = local_128;
          local_1f8 = (undefined4)local_138;
          uStack_1f4 = local_138._4_4_;
          uStack_1f0 = (undefined4)uStack_130;
          uStack_1ec = uStack_130._4_4_;
          _ZN4core3ptr43drop_in_place_LT_uu_shred__FilenameIter_GT_17h677fc060bd465f8fE
                    (CONCAT44(uStack_174,local_178),CONCAT44(uStack_16c,uStack_170));
          auVar6 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_14spec_next_back17h4ff96a92f286cfe4E
                             (&local_150);
          uVar5 = auVar6._8_8_;
        } while ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0);
      }
      local_180[2] = local_1e8;
      *local_180 = CONCAT44(uStack_1f4,local_1f8);
      local_180[1] = CONCAT44(uStack_1ec,uStack_1f0);
      return;
    }
  }
  local_188 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00200cf8)
                        (&PTR_s_src_uu_shred_src_shred_rs_001fa2a8);
LAB_00165494:
                    /* try { // try from 0016549c to 001655dd has its CatchHandler @ 001655e0 */
  local_1b8 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00200c88)();
  local_218 = (undefined8 *)local_1b8;
  local_210 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3641e459b5f3d84fE;
  local_138 = (undefined8 *)&DAT_001f9f98;
  uStack_130 = (undefined *)0x2;
  local_118 = (long *)0x0;
  local_120 = (undefined *)0x1;
  local_128 = (undefined *)&local_218;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(&local_138);
  uStack_80 = CONCAT44(uStack_1ec,uStack_1f0);
  local_88 = 1;
  puStack_78 = local_1e8;
  local_70 = 0;
  local_218 = (undefined8 *)0x1;
  local_200 = (undefined *)CONCAT71(local_200._1_7_,1);
  local_138 = &local_88;
  uStack_130 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
  ;
  local_120 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00200cc0
  ;
  local_118 = &local_188;
  local_110 = 
  PTR__ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17ha4645305e3b6a355E_00200d28
  ;
  local_1b8._0_8_ = &DAT_001fa250;
  local_1b8._8_8_ = 4;
  local_198 = 0;
  local_1a0 = 3;
  puStack_1a8 = &local_138;
  local_128 = (undefined *)&local_218;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00200c90)(local_1b8);
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00200d20)(1);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}