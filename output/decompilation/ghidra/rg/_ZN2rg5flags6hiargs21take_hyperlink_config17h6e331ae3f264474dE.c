void _ZN2rg5flags6hiargs21take_hyperlink_config17h6e331ae3f264474dE(long param_1)

{
  ulong uVar1;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 *local_90;
  code *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  char *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_40 = 0x8000000000000000;
  uStack_28 = 0x8000000000000000;
                    /* try { // try from 00352760 to 00352769 has its CatchHandler @ 00352b41 */
  _ZN2rg5flags6hiargs8hostname17h842f73e1e84d80bbE
            (&local_80,*(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8));
  if (CONCAT44(uStack_7c,local_80) == -0x8000000000000000) {
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h21c1035d1def9f19E
              (&local_80);
  }
  else {
    local_a8 = local_70;
    local_b8 = local_80;
    uStack_b4 = uStack_7c;
    uStack_b0 = uStack_78;
    uStack_ac = uStack_74;
                    /* try { // try from 00352794 to 0035284a has its CatchHandler @ 00352afd */
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      local_90 = &local_b8;
      local_88 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_e8 = &PTR_s_found_hostname_for_hyperlink_con_004eb208;
      uStack_e0 = 1;
      local_c8 = 0;
      local_d8 = &local_90;
      uStack_d0 = 1;
      local_48 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb238);
      local_68 = "rg::flags::hiargs";
      uStack_60 = 0x11;
      local_58 = "rg::flags::hiargs";
      uStack_50 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_e8,4,&local_68);
    }
    local_d8 = (undefined4 **)local_a8;
    local_e8 = (undefined **)CONCAT44(uStack_b4,local_b8);
    uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
                    /* try { // try from 0035285e to 0035286e has its CatchHandler @ 00352aea */
    (*(code *)
      PTR__ZN12grep_printer9hyperlink20HyperlinkEnvironment4host17hfd05be8174aeda4aE_005271f8)
              (&local_40,&local_e8);
  }
                    /* try { // try from 0035286f to 00352878 has its CatchHandler @ 00352b41 */
  _ZN2rg5flags6hiargs10wsl_prefix17h1107136839cef0cfE(&local_80);
  if (CONCAT44(uStack_7c,local_80) == -0x8000000000000000) {
    _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_alloc__string__String_GT__GT_17h21c1035d1def9f19E
              (&local_80);
  }
  else {
    local_a8 = local_70;
    local_b8 = local_80;
    uStack_b4 = uStack_7c;
    uStack_b0 = uStack_78;
    uStack_ac = uStack_74;
                    /* try { // try from 003528a3 to 00352959 has its CatchHandler @ 00352afb */
    uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
    if (3 < uVar1) {
      local_90 = &local_b8;
      local_88 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_e8 = &PTR_s_found_wsl_prefix_for_hyperlink_c_004eb218;
      uStack_e0 = 1;
      local_c8 = 0;
      local_d8 = &local_90;
      uStack_d0 = 1;
      local_48 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                           (&PTR_s_crates_core_flags_hiargs_rs_004eb250);
      local_68 = "rg::flags::hiargs";
      uStack_60 = 0x11;
      local_58 = "rg::flags::hiargs";
      uStack_50 = 0x11;
      _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_e8,4,&local_68);
    }
    local_d8 = (undefined4 **)local_a8;
    local_e8 = (undefined **)CONCAT44(uStack_b4,local_b8);
    uStack_e0 = CONCAT44(uStack_ac,uStack_b0);
                    /* try { // try from 0035296d to 0035297d has its CatchHandler @ 00352ae8 */
    (*(code *)
      PTR__ZN12grep_printer9hyperlink20HyperlinkEnvironment10wsl_prefix17hcfa3d430dadbbe01E_00527200
    )(&local_40,&local_e8);
  }
  local_b8 = *(undefined4 *)(param_1 + 0x140);
  uStack_b4 = *(undefined4 *)(param_1 + 0x144);
  uStack_b0 = *(undefined4 *)(param_1 + 0x148);
  uStack_ac = *(undefined4 *)(param_1 + 0x14c);
  local_a8 = *(undefined8 *)(param_1 + 0x150);
  uStack_a0 = *(undefined4 *)(param_1 + 0x158);
  uStack_9c = *(undefined4 *)(param_1 + 0x15c);
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 8;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined *)(param_1 + 0x158) = 0;
                    /* try { // try from 003529be to 003529e7 has its CatchHandler @ 00352b1f */
  uVar1 = _ZN4core4sync6atomic11atomic_load17headb9992cbbd027aE
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hb16df1a2b362bf4cE_005266b8,0);
  if (3 < uVar1) {
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17he33983b6928b70ebE
              (&local_80,&local_b8);
    local_88 = 
    _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h71b66d641ee8f111E;
    local_e8 = &PTR_s_hyperlink_format__004eb228;
    uStack_e0 = 1;
    local_c8 = 0;
    local_d8 = &local_90;
    uStack_d0 = 1;
    local_90 = &local_80;
                    /* try { // try from 00352a29 to 00352a81 has its CatchHandler @ 00352aec */
    local_48 = (*(code *)PTR__ZN3log13__private_api3loc17h53b04f6fd0066707E_005266c8)
                         (&PTR_s_crates_core_flags_hiargs_rs_004eb268);
    local_68 = "rg::flags::hiargs";
    uStack_60 = 0x11;
    local_58 = "rg::flags::hiargs";
    uStack_50 = 0x11;
    _ZN3log13__private_api3log17h124fdfc9e9ed7585E(&local_e8,4,&local_68);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_80);
  }
  uStack_c0 = uStack_18;
  uStack_bc = uStack_14;
  local_d8 = (undefined4 **)local_30;
  uStack_d0 = uStack_28;
  local_e8 = (undefined **)local_40;
  uStack_e0 = uStack_38;
  local_58 = (char *)local_a8;
  uStack_50 = CONCAT44(uStack_9c,uStack_a0);
  local_68 = (char *)CONCAT44(uStack_b4,local_b8);
  uStack_60 = CONCAT44(uStack_ac,uStack_b0);
  (*(code *)PTR__ZN12grep_printer9hyperlink15HyperlinkConfig3new17hfa44b70ce19cc27eE_00527208)
            (&local_e8,&local_68);
  return;
}