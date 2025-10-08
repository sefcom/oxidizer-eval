void _ZN9alacritty7migrate7migrate17hd130364cc6c1f643E(long *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 **local_118;
  undefined8 **ppuStack_110;
  undefined8 **ppuStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 **local_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined local_d0;
  undefined2 local_cf;
  undefined local_cd;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  undefined8 **local_98;
  code *pcStack_90;
  undefined8 local_88;
  undefined8 **local_78;
  undefined8 **ppuStack_70;
  undefined8 **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 **ppuStack_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  lVar1 = *param_1;
                    /* try { // try from 0055f406 to 0055f446 has its CatchHandler @ 0055f843 */
  _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
            (&local_118,param_1[1],param_1[2]);
  local_68 = ppuStack_108;
  local_78 = local_118;
  ppuStack_70 = ppuStack_110;
  _ZN4core6option15Option_LT_T_GT_7or_else17h0b1f5b4de00d6415E(&local_118,&local_78);
  _ZN4core6option15Option_LT_T_GT_7or_else17h4ae75538c15e033bE(&local_30,&local_118);
  if (CONCAT44(uStack_2c,local_30) == -0x8000000000000000) {
    local_118 = (undefined8 **)&PTR_s_No_configuration_file_found_00983320;
    ppuStack_110 = (undefined8 **)0x1;
    ppuStack_108 = (undefined8 **)&DAT_00000008;
    local_100 = 0;
    uStack_f8 = 0;
                    /* try { // try from 0055f62a to 0055f63d has its CatchHandler @ 0055f843 */
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_118);
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_009de2d0)(1);
  }
  else {
    local_b8 = local_20;
    local_c8._0_4_ = local_30;
    local_c8._4_4_ = uStack_2c;
    uStack_c0 = uStack_28;
    uStack_bc = uStack_24;
    if (*(char *)(param_1 + 3) == '\0') {
      local_e8 = (undefined8 **)&DAT_8000000000000000;
      if (lVar1 != -0x8000000000000000) {
                    /* try { // try from 0055f486 to 0055f48d has its CatchHandler @ 0055f826 */
        _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
                  (&local_118,param_1[1],param_1[2]);
        local_78 = ppuStack_110;
        ppuStack_70 = ppuStack_108;
        local_e8 = local_118;
      }
      local_cf = *(undefined2 *)((long)param_1 + 0x19);
      ppuStack_e0 = local_78;
      ppuStack_d8 = ppuStack_70;
      local_cd = 1;
      local_d0 = 1;
                    /* try { // try from 0055f4ce to 0055f4e5 has its CatchHandler @ 0055f808 */
      _ZN9alacritty7migrate14migrate_config17heae155b6e6f7f60cE
                (&local_78,&local_e8,CONCAT44(uStack_bc,uStack_c0),local_b8,5);
      if (local_78 == (undefined8 **)&DAT_00000001) {
        local_48 = ppuStack_70;
        ppuStack_40 = local_68;
        local_118 = (undefined8 **)&PTR_s_Configuration_file_migration_fai_00983330;
        ppuStack_110 = (undefined8 **)0x1;
        ppuStack_108 = (undefined8 **)0x8;
        local_100 = 0;
        uStack_f8 = 0;
                    /* try { // try from 0055f742 to 0055f7c3 has its CatchHandler @ 0055f7e4 */
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_118);
        local_a8 = (undefined8 **)&local_c8;
        ppuStack_a0 = (undefined8 **)
                      PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_009de9f8
        ;
        local_98 = &local_48;
        pcStack_90 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_118 = (undefined8 **)&PTR_s_Cyan_00983340;
        ppuStack_110 = (undefined8 **)0x3;
        uStack_f8 = 0;
        ppuStack_108 = &local_a8;
        local_100 = 2;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_118);
        (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_009de2d0)(1);
        goto LAB_0055f7c4;
      }
      _ZN4core3ptr102drop_in_place_LT_core__result__Result_LT_alacritty__migrate__Migration_C_alloc__string__String_GT__GT_17h5cb2b8afeb317d5dE
                (&local_78);
      _ZN4core3ptr51drop_in_place_LT_alacritty__cli__MigrateOptions_GT_17h13a483324731ab8cE
                (&local_e8);
    }
                    /* try { // try from 0055f519 to 0055f52e has its CatchHandler @ 0055f826 */
    _ZN9alacritty7migrate14migrate_config17heae155b6e6f7f60cE
              (&local_78,param_1,CONCAT44(uStack_bc,uStack_c0),local_b8,5);
    if ((int)local_78 != 1) {
      local_88 = local_50;
      local_a8 = ppuStack_70;
      ppuStack_a0 = local_68;
      if (*(char *)((long)param_1 + 0x1b) == '\0') {
                    /* try { // try from 0055f56b to 0055f57e has its CatchHandler @ 0055f7d5 */
        _ZN9alacritty7migrate9Migration15success_message17h6e70dbedf75118d1E(&local_e8,&local_a8,0);
        ppuStack_40 = (undefined8 **)
                      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
        ;
        local_118 = (undefined8 **)&DAT_00982f40;
        ppuStack_110 = (undefined8 ***)0x2;
        uStack_f8 = 0;
        ppuStack_108 = &local_48;
        local_100 = 1;
        local_48 = &local_e8;
                    /* try { // try from 0055f5c9 to 0055f5d1 has its CatchHandler @ 0055f7c6 */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_009dff18)(&local_118);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_e8);
      }
      _ZN4core3ptr50drop_in_place_LT_alacritty__migrate__Migration_GT_17h82cf96c51dcdbc49E
                (&local_a8);
      _ZN4core3mem4drop17ha42964a555fb617bE(&local_c8);
      _ZN4core3ptr51drop_in_place_LT_alacritty__cli__MigrateOptions_GT_17h13a483324731ab8cE(param_1)
      ;
      return;
    }
    ppuStack_d8 = (undefined8 **)CONCAT44(uStack_5c,local_60);
    local_e8 = ppuStack_70;
    ppuStack_e0 = local_68;
    local_118 = (undefined8 **)&PTR_s_Configuration_file_migration_fai_00983330;
    ppuStack_110 = (undefined8 **)0x1;
    ppuStack_108 = (undefined8 **)0x8;
    local_100 = 0;
    uStack_f8 = 0;
                    /* try { // try from 0055f679 to 0055f6f7 has its CatchHandler @ 0055f817 */
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_118);
    local_a8 = (undefined8 **)&local_c8;
    ppuStack_a0 = (undefined8 **)
                  PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17hca7467b342cca1adE_009de9f8
    ;
    local_98 = &local_e8;
    pcStack_90 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_118 = (undefined8 **)&PTR_s_Cyan_00983340;
    ppuStack_110 = (undefined8 **)0x3;
    uStack_f8 = 0;
    ppuStack_108 = &local_a8;
    local_100 = 2;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_009de5d0)(&local_118);
    (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_009de2d0)(1);
  }
LAB_0055f7c4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}