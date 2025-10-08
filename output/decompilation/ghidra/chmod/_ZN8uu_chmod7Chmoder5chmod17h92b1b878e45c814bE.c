undefined  [16]
_ZN8uu_chmod7Chmoder5chmod17h92b1b878e45c814bE(long param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  undefined8 *puVar8;
  byte bVar9;
  undefined **ppuVar10;
  long lVar11;
  char cVar12;
  undefined4 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **unaff_RBP;
  undefined auVar16 [16];
  undefined local_188 [16];
  undefined8 *local_178;
  code *local_170;
  undefined8 *local_168;
  code *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined **local_148;
  undefined **local_140;
  uint local_134;
  long local_130;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 **local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_78 [16];
  undefined8 local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  if (param_3 == 0) {
    local_158 = 0;
  }
  else {
    lVar1 = param_2 + param_3 * 0x18;
    bVar2 = *(byte *)(param_1 + 0x25);
    bVar3 = *(byte *)(param_1 + 0x21);
    bVar4 = *(byte *)(param_1 + 0x22);
    bVar5 = *(byte *)(param_1 + 0x24);
    bVar6 = *(byte *)(param_1 + 0x23);
    bVar9 = bVar2 ^ 1;
    if ((bVar5 & 1) != 0) {
      bVar9 = *(char *)(param_1 + 0x26) == '\0';
    }
    local_134 = (uint)bVar9;
    local_158 = 0;
    lVar11 = param_2 + 0x18;
    local_130 = param_1;
    do {
      while( true ) {
        lVar14 = lVar11;
        pcVar7 = *(code **)(param_2 + 8);
        puVar8 = *(undefined8 **)(param_2 + 0x10);
        _ZN3std2fs8metadata17hebe044cf0ef3250eE(&local_128,pcVar7,puVar8);
        ppuVar10 = local_128;
        _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17haa1cfc1a32482bd2E
                  (local_128,uStack_120);
        param_2 = lVar14;
        if ((int)ppuVar10 != 2) break;
        cVar12 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                           (pcVar7,puVar8);
        if (cVar12 == '\0') {
          if ((bVar3 & 1) == 0) {
            local_178 = (undefined8 *)0x0;
            local_160 = (code *)CONCAT71(local_160._1_7_,1);
            local_188._0_8_ = &local_178;
            local_188._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
            ;
            local_128 = &PTR_s_cannot_access___No_such_file_or_d_001eb9a8;
            uStack_120 = 2;
            local_108 = 0;
            local_118 = (undefined8 **)local_188;
            local_110 = 1;
            local_170 = pcVar7;
            local_168 = puVar8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(local_60,&local_128);
            local_110 = CONCAT44(local_110._4_4_,1);
            local_118 = (undefined8 **)local_50;
            local_150 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_128);
            local_148 = &
                        PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7f069f68cdc86ff5E_001eba08
            ;
            uVar13 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                               (local_150);
                    /* try { // try from 0015e36c to 0015e3f2 has its CatchHandler @ 0015e5d0 */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f2690)(uVar13)
            ;
            local_188 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2588)();
            local_178 = (undefined8 *)local_188;
            local_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9aa873f8513a6c9bE;
            local_168 = &local_150;
            local_160 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc126fa3594fc5fceE
            ;
            local_128 = (undefined **)&DAT_001eb958;
            uStack_120 = 3;
            local_108 = 0;
            local_118 = &local_178;
            local_110 = 2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f2590)(&local_128);
                    /* try { // try from 0015e3fd to 0015e401 has its CatchHandler @ 0015e5e4 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h98e78635d0352fa4E
                      (local_150,local_148);
          }
LAB_0015e010:
                    /* try { // try from 0015e010 to 0015e12c has its CatchHandler @ 0015e5e4 */
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f2690)(1);
        }
        else if ((local_134 & 1) == 0) {
          if ((bVar3 & 1) == 0) {
            local_178 = (undefined8 *)0x0;
            local_160 = (code *)CONCAT71(local_160._1_7_,1);
            local_188._0_8_ = &local_178;
            local_188._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
            ;
            local_128 = &PTR_s_cannot_operate_on_dangling_symli_001eb948;
            uStack_120 = 1;
            local_108 = 0;
            local_118 = (undefined8 **)local_188;
            local_110 = 1;
            local_170 = pcVar7;
            local_168 = puVar8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(local_78,&local_128);
            local_110 = CONCAT44(local_110._4_4_,1);
            local_118 = (undefined8 **)local_68;
            local_150 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_128);
            local_148 = &
                        PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7f069f68cdc86ff5E_001eba08
            ;
            uVar13 = _ZN81__LT_uucore__mods__error__USimpleError_u20_as_u20_uucore__mods__error__UError_GT_4code17ha04d37fdd51c3108E
                               (local_150);
                    /* try { // try from 0015e146 to 0015e1cc has its CatchHandler @ 0015e5bc */
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f2690)(uVar13)
            ;
            local_188 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f2588)();
            local_178 = (undefined8 *)local_188;
            local_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9aa873f8513a6c9bE;
            local_168 = &local_150;
            local_160 = 
            _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc126fa3594fc5fceE
            ;
            local_128 = (undefined **)&DAT_001eb958;
            uStack_120 = 3;
            local_108 = 0;
            local_118 = &local_178;
            local_110 = 2;
            (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f2590)(&local_128);
                    /* try { // try from 0015e1d7 to 0015e352 has its CatchHandler @ 0015e5e4 */
            _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h98e78635d0352fa4E
                      (local_150,local_148);
            (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f2690)(1);
          }
          if ((bVar4 & 1) != 0) {
            local_178 = (undefined8 *)0x0;
            local_160 = (code *)CONCAT71(local_160._1_7_,1);
            local_188._0_8_ = &local_178;
            local_188._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
            ;
            local_128 = &PTR_s_failed_to_change_mode_of_from_00_001eb988;
            uStack_120 = 2;
            local_108 = 0;
            local_118 = (undefined8 **)local_188;
            local_110 = 1;
            local_170 = pcVar7;
            local_168 = puVar8;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f26a0)(&local_128);
          }
          goto LAB_0015e010;
        }
LAB_0015e01b:
        lVar11 = lVar14 + 0x18;
        unaff_RBP = local_140;
        if (lVar14 == lVar1) goto LAB_0015e4c9;
      }
      if ((bVar2 & 1) == 0) {
        cVar12 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                           (pcVar7,puVar8);
        if (cVar12 != '\0') goto LAB_0015e01b;
      }
      ppuVar10 = local_140;
      if ((bVar5 & 1) == 0) {
                    /* try { // try from 0015e470 to 0015e484 has its CatchHandler @ 0015e5ba */
        auVar16 = _ZN8uu_chmod7Chmoder10chmod_file17h265d0431d919c569E(local_130,pcVar7,puVar8);
        auVar16 = _ZN4core6result19Result_LT_T_C_E_GT_3and17h77e5678da19ca805E
                            (auVar16._0_8_,auVar16._8_8_,local_158,ppuVar10);
      }
      else {
        if ((bVar6 & 1) != 0) {
          cVar12 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h75b4e74c9e510268E
                             (pcVar7,puVar8,"/",1);
          if (cVar12 != '\0') {
            local_178 = (undefined8 *)0x0;
            local_160 = (code *)CONCAT71(local_160._1_7_,1);
            local_188._0_8_ = &local_178;
            local_188._8_8_ =
                 PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f25c0
            ;
            local_128 = &PTR_s_it_is_dangerous_to_operate_recur_001eb9c8;
            uStack_120 = 2;
            local_108 = 0;
            local_118 = (undefined8 **)local_188;
            local_110 = 1;
                    /* try { // try from 0015e549 to 0015e58c has its CatchHandler @ 0015e5a9 */
            local_170 = pcVar7;
            local_168 = puVar8;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17h0f2f61c7a16737e3E(local_48,&local_128);
            local_110 = CONCAT44(local_110._4_4_,1);
            local_118 = (undefined8 **)local_38;
            uVar15 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h3f0686e8f75aaa9dE(&local_128);
            _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h9fbd8f8cb57f1996E
                      (local_158,ppuVar10);
            unaff_RBP = &
                        PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7f069f68cdc86ff5E_001eba08
            ;
            local_158 = uVar15;
            break;
          }
        }
                    /* try { // try from 0015e442 to 0015e451 has its CatchHandler @ 0015e5ba */
        auVar16 = _ZN8uu_chmod7Chmoder8walk_dir17ha01070efe2a4054dE(local_130,pcVar7,puVar8);
                    /* try { // try from 0015e452 to 0015e464 has its CatchHandler @ 0015e5ab */
        _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h9fbd8f8cb57f1996E
                  (local_158,ppuVar10);
      }
      unaff_RBP = auVar16._8_8_;
      local_158 = auVar16._0_8_;
      lVar11 = lVar14 + 0x18;
      local_140 = unaff_RBP;
    } while (lVar14 != lVar1);
  }
LAB_0015e4c9:
  auVar16._8_8_ = unaff_RBP;
  auVar16._0_8_ = local_158;
  return auVar16;
}