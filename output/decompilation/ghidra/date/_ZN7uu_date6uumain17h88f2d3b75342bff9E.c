ulong _ZN7uu_date6uumain17h88f2d3b75342bff9E(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_005779f0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9bb79340e2be38faE(uVar2);
  local_90 = _ZN7uu_date6uumain6uumain17h02143b6a9719834eE(param_1,param_2);
  if (local_90._0_8_ != 0) {
    local_28 = (undefined8 *)local_90;
    pcStack_20 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17haf4ab08c71168c6dE
    ;
    local_80 = (undefined **)&DAT_00201d70;
    local_78 = 1;
    local_60 = 0;
    local_68 = 1;
                    /* try { // try from 00301db2 to 00301dc3 has its CatchHandler @ 00301f4c */
    local_70 = &local_28;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd3f382ebaeb7f034E(local_50,&local_80);
    local_18 = local_40;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h113c9365d823dd91E
                      (local_50._8_8_,local_40,1,0);
    if (cVar1 == '\0') {
                    /* try { // try from 00301df4 to 00301f13 has its CatchHandler @ 00301f51 */
      local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_005779f8)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0bd5972353364dd9E;
      local_80 = (undefined **)&DAT_0044b000;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00577a00)(&local_80);
      local_50._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_80 = (undefined **)&DAT_0044b020;
      local_78 = 2;
      local_60 = 0;
      local_68 = 1;
      local_70 = (undefined8 **)local_50;
      local_50._0_8_ = &local_28;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00577a00)(&local_80);
    }
    cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
    if (cVar1 != '\0') {
      local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_00577a08)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0bd5972353364dd9E;
      local_80 = &PTR_s_Try_____help__for_more_informati_0044b040;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00577a00)(&local_80);
    }
    uVar3 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hca9b678a5ae7a7e7E(&local_28);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h6edae7bf3bfce92fE
              (local_90._0_8_,local_90._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_00577a10)();
  return uVar4;
}