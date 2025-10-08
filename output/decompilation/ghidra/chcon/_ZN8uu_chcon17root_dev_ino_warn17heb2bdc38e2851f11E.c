void _ZN8uu_chcon17root_dev_ino_warn17heb2bdc38e2851f11E(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 **local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_70 [16];
  undefined8 local_60;
  undefined local_58;
  undefined8 *local_50;
  code *local_48;
  undefined *local_40;
  code *local_38;
  
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he02cbea1a37bd162E
                    (param_1,param_2,"/",1);
  if (cVar2 == '\0') {
    local_70 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6f18)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20;
    local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
    local_a0 = (undefined **)&DAT_001f04a0;
    local_98 = 2;
    local_80 = 0;
    local_88 = 1;
    local_90 = &local_50;
    local_50 = (undefined8 *)local_70;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20)(&local_a0);
    local_70._0_8_ = 1;
    local_58 = 1;
    local_48 = (code *)
               PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6f68
    ;
    local_40 = 
    PTR__ZN8uu_chcon7options13preserve_root16NO_PRESERVE_ROOT17hbcb70d7a28ebeb93E_001f70f0;
    local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
    local_a0 = &PTR_s_It_is_dangerous_to_operate_recur_001f04e0;
    local_98 = 3;
    local_80 = 0;
    local_88 = 2;
    local_90 = &local_50;
    local_70._8_8_ = param_1;
    local_60 = param_2;
    local_50 = (undefined8 *)local_70;
    (*(code *)puVar1)(&local_a0);
  }
  else {
    local_70 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f6f18)();
    puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20;
    local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
    local_a0 = (undefined **)&DAT_001f04a0;
    local_98 = 2;
    local_80 = 0;
    local_90 = &local_50;
    local_88 = 1;
    local_50 = (undefined8 *)local_70;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f6f20)(&local_a0);
    local_70._0_8_ =
         PTR__ZN8uu_chcon7options13preserve_root16NO_PRESERVE_ROOT17hbcb70d7a28ebeb93E_001f70f0;
    local_70._8_8_ = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfc43d111ea64d20eE;
    local_a0 = &PTR_s_It_is_dangerous_to_operate_recur_001f04c0;
    local_98 = 2;
    local_80 = 0;
    local_88 = 1;
    local_90 = (undefined8 **)local_70;
    (*(code *)puVar1)(&local_a0);
  }
  return;
}