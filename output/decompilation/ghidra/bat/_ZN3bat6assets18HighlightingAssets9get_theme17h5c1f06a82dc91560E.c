void _ZN3bat6assets18HighlightingAssets9get_theme17h5c1f06a82dc91560E
               (long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *local_e8;
  code *pcStack_e0;
  undefined *local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 **local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  code *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined local_48;
  undefined8 local_47;
  undefined8 local_38;
  undefined8 *local_30;
  
  lVar3 = param_1 + 0x68;
  local_38 = param_2;
  local_30 = param_3;
  lVar2 = (*(code *)
            PTR__ZN3bat6assets14lazy_theme_set12LazyThemeSet3get17heee0fccd6e54090aE_008087c8)
                    (lVar3);
  if (lVar2 == 0) {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                      (param_2,param_3,&DAT_00291c63,10);
    uVar4 = extraout_RDX;
    if ((cVar1 == '\0') &&
       (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                          (param_2,param_3,&DAT_00291c6d,9), uVar4 = extraout_RDX_00, cVar1 == '\0')
       ) {
      if (param_3 != (undefined8 *)0x0) {
        local_48 = 0;
        local_50 = 0;
        local_47 = 0x1500000006;
        local_80 = 0x8000000000000000;
        local_78 = &DAT_00291bd0;
        local_70 = 0xd;
        local_68 = 0x8000000000000002;
        local_e8 = &local_38;
        pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
        local_d0 = &PTR_DAT_007ce1c8;
        local_c8 = 2;
        local_b0 = 0;
        local_b8 = 1;
                    /* try { // try from 00535d1d to 00535d30 has its CatchHandler @ 00535e1b */
        local_c0 = &local_e8;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE
                  (&local_a0,0,extraout_RDX_00,&local_d0);
        local_d8 = local_90;
        param_3 = &local_80;
        puStack_98 = 
        PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
        ;
        local_88 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_d0 = (undefined **)&DAT_007ce198;
        local_c8 = 3;
        local_b0 = 0;
        local_b8 = 2;
                    /* try { // try from 00535d97 to 00535da1 has its CatchHandler @ 00535e19 */
        local_c0 = &local_a0;
        local_a0 = param_3;
        local_90 = (undefined *)&local_e8;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00807a50)(&local_d0);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_e8);
        _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
                  (&local_80);
      }
      if (*(long *)(param_1 + 0x80) == 0) {
        lVar3 = (*(code *)
                  PTR__ZN3bat6assets14lazy_theme_set12LazyThemeSet3get17heee0fccd6e54090aE_008087c8)
                          (lVar3,"Monokai Extended",0x10);
      }
      else {
        lVar3 = (*(code *)
                  PTR__ZN3bat6assets14lazy_theme_set12LazyThemeSet3get17heee0fccd6e54090aE_008087c8)
                          (lVar3,*(long *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88));
      }
      if (lVar3 == 0) {
        uVar4 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
                          (&DAT_00291c2c,0x37,&PTR_DAT_007ce1e8);
                    /* catch() { ... } // from try @ 00535d97 with catch @ 00535e19 */
                    /* catch() { ... } // from try @ 00535c40 with catch @ 00535e1d */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_e8);
        _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
                  (param_3);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume(uVar4);
      }
    }
    else {
      local_48 = 0;
      local_50 = 0;
      local_47 = 0x1500000006;
      local_80 = 0x8000000000000000;
      local_78 = &DAT_00291bd0;
      local_70 = 0xd;
      local_68 = 0x8000000000000002;
      local_e8 = &local_38;
      pcStack_e0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5cd1e3edb3ca57a0E;
      local_d0 = &PTR_DAT_007ce178;
      local_c8 = 2;
      local_b0 = 0;
      local_b8 = 1;
                    /* try { // try from 00535bc6 to 00535bd9 has its CatchHandler @ 00535e38 */
      local_c0 = &local_e8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17hec96efa742f30dccE(&local_a0,0,uVar4,&local_d0)
      ;
      local_d8 = local_90;
      local_a0 = &local_80;
      puStack_98 = 
      PTR__ZN90__LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc730c7572ee14c54E_00807a48
      ;
      local_88 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_d0 = (undefined **)&DAT_007ce198;
      local_c8 = 3;
      local_b0 = 0;
      local_b8 = 2;
                    /* try { // try from 00535c40 to 00535c4a has its CatchHandler @ 00535e1d */
      local_c0 = &local_a0;
      local_90 = (undefined *)&local_e8;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00807a50)(&local_d0);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_e8);
      _ZN4core3ptr72drop_in_place_LT_nu_ansi_term__display__AnsiGenericString_LT_str_GT__GT_17hde6d3ec6e19234d6E
                (&local_80);
      (*(code *)PTR__ZN3bat6assets18HighlightingAssets9get_theme17h5c1f06a82dc91560E_008087d8)
                (param_1,"ansi",4);
    }
  }
  return;
}