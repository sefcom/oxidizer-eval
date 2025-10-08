ulong _ZN6uu_seq6uumain17h40b8e2fba6f3a80aE(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_002239b0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h83661589f60e32fbE(uVar2);
  local_90 = _ZN6uu_seq6uumain6uumain17h1ad203335fb9862fE(param_1,param_2);
  if (local_90._0_8_ != 0) {
    local_28 = (undefined8 *)local_90;
    pcStack_20 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h828730ad9444c7e9E
    ;
    local_80 = (undefined **)&DAT_0011b0f0;
    local_78 = 1;
    local_60 = 0;
    local_68 = 1;
                    /* try { // try from 0016b052 to 0016b063 has its CatchHandler @ 0016b1ec */
    local_70 = &local_28;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hc1438dbeaf8a92bbE(local_50,&local_80);
    local_18 = local_40;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h5b74b5abc7046faaE
                      (local_50._8_8_,local_40,1,0);
    if (cVar1 == '\0') {
                    /* try { // try from 0016b094 to 0016b1b3 has its CatchHandler @ 0016b1f1 */
      local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002239b8)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h72421d67ddff0302E;
      local_80 = (undefined **)&DAT_0021a478;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002239c0)(&local_80);
      local_50._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_80 = (undefined **)&DAT_0021a498;
      local_78 = 2;
      local_60 = 0;
      local_68 = 1;
      local_70 = (undefined8 **)local_50;
      local_50._0_8_ = &local_28;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002239c0)(&local_80);
    }
    cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
    if (cVar1 != '\0') {
      local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_002239c8)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h72421d67ddff0302E;
      local_80 = &PTR_s_Try_____help__for_more_informati_0021a4b8;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002239c0)(&local_80);
    }
    uVar3 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h4d7cf7c804669b13E(&local_28);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h39ae878ea815d1cfE
              (local_90._0_8_,local_90._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_002239d0)();
  return uVar4;
}