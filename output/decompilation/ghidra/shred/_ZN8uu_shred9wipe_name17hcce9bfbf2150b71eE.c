void _ZN8uu_shred9wipe_name17hcce9bfbf2150b71eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 *local_228;
  code *local_220;
  undefined8 *puStack_218;
  code *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined local_1e8 [8];
  code *pcStack_1e0;
  undefined8 *puStack_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  long local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  code *local_170;
  long *local_168;
  code *local_160;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_1f0 = param_5;
  local_1ec = param_4;
  local_190 = param_1;
  lVar3 = _ZN3std4path4Path9file_name17h79ecbb7850a9c7f3E(param_2,param_3);
  if (lVar3 == 0) {
LAB_001bdf12:
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002388c8);
  }
  else {
    _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
              (&local_188,lVar3);
    puVar2 = local_178;
    if (local_188 == (undefined8 *)0x0) {
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E(&local_188,param_2,param_3);
      local_1f8 = local_178;
      local_208 = (int)local_188;
      uStack_204 = local_188._4_4_;
      uStack_200 = (undefined4)uStack_180;
      uStack_1fc = uStack_180._4_4_;
      local_d8 = 1;
      local_d0 = puVar2;
      local_c8 = 0;
      auVar5 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_14spec_next_back17h81b9c6b41e365607E
                         (&local_d8);
      uVar4 = auVar5._8_8_;
      if (auVar5._0_8_ != 0) {
        do {
                    /* try { // try from 001bdac0 to 001bdacf has its CatchHandler @ 001bdf7c */
          _ZN8uu_shred12FilenameIter3new17h75c47570d6e41809E(&local_50,uVar4);
          local_78 = local_40;
          uStack_70 = uStack_38;
          local_88 = local_50;
          uStack_84 = uStack_4c;
          uStack_80 = uStack_48;
          uStack_7c = uStack_44;
          while( true ) {
                    /* try { // try from 001bdaf0 to 001bdb48 has its CatchHandler @ 001bdf90 */
            _ZN81__LT_uu_shred__FilenameIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8e8e3d724658b94fE
                      (&local_a0,&local_88);
            if (CONCAT44(uStack_9c,local_a0) == -0x8000000000000000) break;
            local_58 = local_90;
            local_68 = local_a0;
            uStack_64 = uStack_9c;
            uStack_60 = uStack_98;
            uStack_5c = uStack_94;
            _ZN3std4path4Path14with_file_name17h6ad9755a55c53ad4E
                      (&local_1b0,param_2,param_3,&local_68);
                    /* try { // try from 001bdb59 to 001bdb72 has its CatchHandler @ 001bdf81 */
            _ZN3std2fs8metadata17h605f1ca78403f0bdE
                      (&local_188,CONCAT44(uStack_1a4,uStack_1a8),CONCAT44(uStack_19c,uStack_1a0));
            if ((int)local_188 == 2) {
                    /* try { // try from 001bdb80 to 001bdb94 has its CatchHandler @ 001bdf6b */
              _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h057e93f1d1d682caE
                        (&local_188);
              local_198 = _ZN3std2fs6rename17he0e2ca4a2337599cE(&local_208,&local_1b0);
              if (local_198 != 0) {
                    /* try { // try from 001bddd0 to 001bdf11 has its CatchHandler @ 001bdf4b */
                _local_1e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                local_228 = (undefined8 *)local_1e8;
                local_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
                local_188 = (undefined8 *)&DAT_00238698;
                uStack_180 = (code *)0x2;
                local_168 = (long *)0x0;
                local_170 = (code *)0x1;
                local_178 = &local_228;
                _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_188);
                uStack_b8 = CONCAT44(uStack_1fc,uStack_200);
                local_c0 = 1;
                puStack_b0 = local_1f8;
                local_a8 = 0;
                local_228 = (undefined8 *)&DAT_00000001;
                local_210 = (code *)CONCAT71(local_210._1_7_,1);
                local_188 = &local_c0;
                uStack_180 = 
                _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
                ;
                local_170 = 
                _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
                ;
                local_168 = &local_198;
                local_160 = 
                _ZN60__LT_std__io__error__Error_u20_as_u20_core__fmt__Display_GT_3fmt17h59fe8285afbb4739E
                ;
                local_1e8 = (undefined  [8])&DAT_00238888;
                pcStack_1e0 = (code *)0x4;
                local_1c8 = 0;
                local_1d0 = 3;
                puStack_1d8 = &local_188;
                local_178 = &local_228;
                _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(local_1e8);
                _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
                goto LAB_001bdf12;
              }
              if ((char)local_1ec != '\0') {
                    /* try { // try from 001bdba9 to 001bdd1d has its CatchHandler @ 001bdf6d */
                _local_1e8 = _ZN6uucore9util_name17h60d842bf27b05e82E();
                local_228 = (undefined8 *)local_1e8;
                local_220 = 
                _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h264c667d1212e3adE;
                local_188 = (undefined8 *)&DAT_00238698;
                uStack_180 = (code *)0x2;
                local_168 = (long *)0x0;
                local_170 = (code *)0x1;
                local_178 = &local_228;
                _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_188);
                pcStack_1e0 = (code *)CONCAT44(uStack_1fc,uStack_200);
                local_1e8 = (undefined  [8])0x1;
                puStack_1d8 = local_1f8;
                local_1d0 = local_1d0 & 0xffffffffffffff00;
                local_228 = (undefined8 *)local_1e8;
                local_220 = 
                _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
                ;
                puStack_218 = &local_c0;
                local_210 = 
                _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E
                ;
                local_188 = (undefined8 *)&DAT_00238858;
                uStack_180 = (code *)0x3;
                local_168 = (long *)0x0;
                local_170 = (code *)0x2;
                local_178 = &local_228;
                _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_188);
              }
              if ((char)local_1f0 == '\x03') {
                local_228 = (undefined8 *)0x1b600000000;
                uVar1 = (ulong)local_220 >> 0x10;
                local_220 = (code *)CONCAT62((uint6)uVar1 & 0xffff00000000,0x100);
                _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hd63d5d024cbc8cccE
                          (&local_188,&local_1b0);
                puStack_1d8 = local_178;
                local_1e8._0_4_ = SUB84(local_188,0);
                local_1e8._4_4_ = local_188._4_4_;
                pcStack_1e0 = uStack_180;
                _ZN3std2fs11OpenOptions4open17h006d788eda6d20b4E(&local_188,&local_228,local_1e8);
                local_1e8._0_4_ =
                     _ZN4core6result19Result_LT_T_C_E_GT_6expect17hbf7455566ffa5658E(&local_188);
                    /* try { // try from 001bdd22 to 001bdd34 has its CatchHandler @ 001bdf5d */
                uVar4 = _ZN3std2fs4File8sync_all17ha0e03da750e69f90E(local_1e8);
                _ZN4core6result19Result_LT_T_C_E_GT_6expect17hccf86eaae5770f98E(uVar4);
                _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h7f7a30b7b330e79bE
                          (local_1e8._0_4_);
              }
              local_178 = (undefined8 *)CONCAT44(uStack_19c,uStack_1a0);
              local_188 = (undefined8 *)CONCAT44(uStack_1ac,local_1b0);
              uStack_180 = (code *)CONCAT44(uStack_1a4,uStack_1a8);
                    /* try { // try from 001bdd5b to 001bdd64 has its CatchHandler @ 001bdf2c */
              _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha6413bedadae7a14E(&local_208);
              local_1f8 = local_178;
              local_208 = (int)local_188;
              uStack_204 = local_188._4_4_;
              uStack_200 = (undefined4)uStack_180;
              uStack_1fc = uStack_180._4_4_;
              break;
            }
            _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h057e93f1d1d682caE
                      (&local_188);
                    /* try { // try from 001bdb73 to 001bdb7a has its CatchHandler @ 001bdf90 */
            _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha6413bedadae7a14E(&local_1b0);
          }
                    /* try { // try from 001bdd7f to 001bdd86 has its CatchHandler @ 001bdf7c */
          _ZN4core3ptr43drop_in_place_LT_uu_shred__FilenameIter_GT_17h234a690002371487E(&local_88);
          auVar5 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_14spec_next_back17h81b9c6b41e365607E
                             (&local_d8);
          uVar4 = auVar5._8_8_;
        } while (auVar5._0_8_ != 0);
      }
      local_190[2] = local_1f8;
      *local_190 = CONCAT44(uStack_204,local_208);
      local_190[1] = CONCAT44(uStack_1fc,uStack_200);
      return;
    }
  }
  uVar4 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_002388e0);
                    /* catch() { ... } // from try @ 001bdd5b with catch @ 001bdf2c */
  local_1f8 = local_178;
  local_208 = (int)local_188;
  uStack_204 = local_188._4_4_;
  uStack_200 = (undefined4)uStack_180;
  uStack_1fc = uStack_180._4_4_;
  _ZN4core3ptr43drop_in_place_LT_uu_shred__FilenameIter_GT_17h234a690002371487E(&local_88);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha6413bedadae7a14E(&local_208);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar4);
}