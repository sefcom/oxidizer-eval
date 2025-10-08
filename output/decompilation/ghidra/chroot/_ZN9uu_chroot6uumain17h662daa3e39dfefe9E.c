undefined4 _ZN9uu_chroot6uumain17h662daa3e39dfefe9E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined local_90 [16];
  undefined **local_80;
  undefined8 local_78;
  undefined8 ***local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [16];
  undefined8 local_40;
  undefined8 ***local_38;
  code *local_30;
  undefined8 **local_28;
  code *pcStack_20;
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_00201760)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h2b359b4433ae2d5eE(uVar2);
  local_90 = _ZN9uu_chroot6uumain6uumain17h0aacf4ff54def1d7E(param_1,param_2);
  if (local_90._0_8_ == 0) {
    return _ZN6uucore4mods5error9EXIT_CODE17hcdc285b475eac33eE_0;
  }
  local_28 = (undefined8 **)local_90;
  pcStack_20 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h311bececfc17dbbbE
  ;
  local_80 = (undefined **)&DAT_001195b0;
  local_78 = 1;
  local_60 = 0;
  local_68 = 1;
                    /* try { // try from 00161de2 to 00161df3 has its CatchHandler @ 00161f7c */
  local_70 = &local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h3cb555ed11a172a6E(local_50,&local_80);
  local_18 = local_40;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hcb8977ebfc05cc90E
                    (local_50._8_8_,local_40,1,0);
  if (cVar1 == '\0') {
                    /* try { // try from 00161e24 to 00161f43 has its CatchHandler @ 00161f81 */
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00201768)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06747422f0e65582E;
    local_80 = (undefined **)&DAT_001f9ef0;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00201770)(&local_80);
    local_50._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_80 = (undefined **)&DAT_001f9f10;
    local_78 = 2;
    local_60 = 0;
    local_68 = 1;
    local_70 = (undefined8 ***)local_50;
    local_50._0_8_ = &local_28;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00201770)(&local_80);
  }
  cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
  if (cVar1 != '\0') {
    local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_00201778)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h06747422f0e65582E;
    local_80 = &PTR_s_Try_____help__for_more_informati_001f9f30;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00201770)(&local_80);
  }
  uVar2 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0ad488b3302fb495E(&local_28);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hfb5dae7b0f85c73aE
            (local_90._0_8_,local_90._8_8_);
  return uVar2;
}