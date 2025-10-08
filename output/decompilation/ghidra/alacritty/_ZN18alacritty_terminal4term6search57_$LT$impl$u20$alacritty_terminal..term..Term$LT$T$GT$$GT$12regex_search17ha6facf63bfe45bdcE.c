void _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_12regex_search17ha6facf63bfe45bdcE
               (undefined8 *param_1)

{
  ulong uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_28;
  code *local_20;
  
  _ZN18alacritty_terminal4term6search57__LT_impl_u20_alacritty_terminal__term__Term_LT_T_GT__GT_21regex_search_internal17h6112248bcc16e983E
            (&local_70);
  if (local_70 == 2) {
    local_a8 = uStack_68;
    local_a0 = local_60;
                    /* try { // try from 004715f4 to 0047172a has its CatchHandler @ 00471767 */
    uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (1 < uVar1) {
      local_58 = &PTR_s_Regex_exceeded_complexity_limit_009779e0;
      local_50 = 1;
      local_48 = (undefined8 **)&DAT_00000008;
      local_40 = 0;
      uStack_38 = 0;
      local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a00);
      local_98 = &DAT_001f84f0;
      local_90 = 0x20;
      local_88 = &DAT_001f84f0;
      local_80 = 0x20;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_58,2,&local_98);
    }
    uVar1 = _ZN4core4sync6atomic11atomic_load17h45f93311b58385bbE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hfa6ade34c357dc26E_009de3b0,0);
    if (3 < uVar1) {
      local_28 = &local_a8;
      local_20 = 
      _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h52a3e481c4252974E
      ;
      local_58 = &PTR_s_Cyan_009779f0;
      local_50 = 1;
      uStack_38 = 0;
      local_48 = &local_28;
      local_40 = 1;
      local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h250021ea1f26630aE_009de3b8)
                           (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00977a18);
      local_98 = &DAT_001f84f0;
      local_90 = 0x20;
      local_88 = &DAT_001f84f0;
      local_80 = 0x20;
      _ZN3log13__private_api3log17h0b6680b994d742b1E(&local_58,4,&local_98);
      uStack_68 = local_a8;
      local_60 = local_a0;
    }
    *param_1 = 0;
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3d4788587f1a236cE
              (uStack_68,local_60);
  }
  else {
    param_1[2] = local_60;
    *param_1 = CONCAT44(uStack_6c,local_70);
    param_1[1] = uStack_68;
  }
  return;
}