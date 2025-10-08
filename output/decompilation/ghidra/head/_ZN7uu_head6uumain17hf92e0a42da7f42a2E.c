ulong _ZN7uu_head6uumain17hf92e0a42da7f42a2E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_90 [16];
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined8 local_40;
  undefined8 **local_38;
  code *local_30;
  undefined8 *local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_001fe6a8)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h176f22e71776d991E(uVar2);
  local_90 = _ZN7uu_head6uumain6uumain17hacddb22773ff1028E(param_1,param_2);
  if (local_90._0_8_ != 0) {
    local_28 = (undefined8 *)local_90;
    pcStack_20 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4a7b2ddd371fffd5E
    ;
    local_80 = (undefined **)&DAT_00118a90;
    local_78 = 1;
    local_60 = 0;
    local_68 = 1;
                    /* try { // try from 0015e232 to 0015e243 has its CatchHandler @ 0015e3c0 */
    local_70 = &local_28;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd0b4531fe379a27fE(local_50,&local_80);
    local_18 = local_40;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h88872ad91003a480E
                      ();
    if (cVar1 == '\0') {
                    /* try { // try from 0015e268 to 0015e387 has its CatchHandler @ 0015e3c5 */
      local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001fe6b0)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7257faffceabf0efE;
      local_80 = (undefined **)&DAT_001f6d60;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fe6b8)(&local_80);
      local_50._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_80 = (undefined **)&DAT_001f6b40;
      local_78 = 2;
      local_60 = 0;
      local_68 = 1;
      local_70 = (undefined8 **)local_50;
      local_50._0_8_ = &local_28;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fe6b8)(&local_80);
    }
    cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
    if (cVar1 != '\0') {
      local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001fe6c0)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h7257faffceabf0efE;
      local_80 = &PTR_s_Try_____help__for_more_informati_001f6d80;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001fe6b8)(&local_80);
    }
    uVar3 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2c86c608eb8d5f27E(&local_28);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h2ef53405815fe33aE
              (local_90._0_8_,local_90._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_001fe6c8)();
  return uVar4;
}