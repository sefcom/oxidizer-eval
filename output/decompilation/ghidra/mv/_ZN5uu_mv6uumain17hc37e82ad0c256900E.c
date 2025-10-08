ulong _ZN5uu_mv6uumain17hc37e82ad0c256900E(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_0024a6a0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf36fb598181f267cE(uVar2);
  local_90 = _ZN5uu_mv6uumain6uumain17hf64ab4b108c670eeE(param_1,param_2);
  if (local_90._0_8_ != 0) {
    local_28 = (undefined8 *)local_90;
    pcStack_20 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h4f9d46a455376481E
    ;
    local_80 = (undefined **)&DAT_0011fc00;
    local_78 = 1;
    local_60 = 0;
    local_68 = 1;
                    /* try { // try from 001797b2 to 001797c3 has its CatchHandler @ 0017994c */
    local_70 = &local_28;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hba77342b09338459E(local_50,&local_80);
    local_18 = local_40;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h7077bfe9970309c3E
                      (local_50._8_8_,local_40,1,0);
    if (cVar1 == '\0') {
                    /* try { // try from 001797f4 to 00179913 has its CatchHandler @ 00179951 */
      local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0024a6a8)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16459f5c56ff6206E;
      local_80 = (undefined **)&DAT_002404f8;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_80);
      local_50._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_80 = (undefined **)&DAT_00240518;
      local_78 = 2;
      local_60 = 0;
      local_68 = 1;
      local_70 = (undefined8 **)local_50;
      local_50._0_8_ = &local_28;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_80);
    }
    cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
    if (cVar1 != '\0') {
      local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_0024a6b8)();
      local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h16459f5c56ff6206E;
      local_80 = &PTR_s_Try_____help__for_more_informati_00240538;
      local_78 = 2;
      local_60 = 0;
      local_70 = &local_38;
      local_68 = 1;
      local_38 = (undefined8 **)local_50;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0024a6b0)(&local_80);
    }
    uVar3 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h304c8b815f41dee8E(&local_28);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1fa91726517a8bedE
              (local_90._0_8_,local_90._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_0024a6c0)();
  return uVar4;
}