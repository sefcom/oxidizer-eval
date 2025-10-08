undefined4 _ZN9uu_expand6uumain17h9981f9ffa8b76f55E(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_001ef0d0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h6a66160e4910c2e0E(uVar2);
  local_90 = _ZN9uu_expand6uumain6uumain17hb8c68f0a7b27f63cE(param_1,param_2);
  if (local_90._0_8_ == 0) {
    return _ZN6uucore4mods5error9EXIT_CODE17hcdc285b475eac33eE_0;
  }
  local_28 = (undefined8 **)local_90;
  pcStack_20 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h1b4e2802066c549aE
  ;
  local_80 = (undefined **)&DAT_00117a40;
  local_78 = 1;
  local_60 = 0;
  local_68 = 1;
                    /* try { // try from 001567a2 to 001567b3 has its CatchHandler @ 00156930 */
  local_70 = &local_28;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b66b5536bfc5281E(local_50,&local_80);
  local_18 = local_40;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h60751d4dad1dcd9fE
                    ();
  if (cVar1 == '\0') {
                    /* try { // try from 001567d8 to 001568f7 has its CatchHandler @ 00156935 */
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef0d8)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hebb77db423a996f0E;
    local_80 = (undefined **)&DAT_001e7b08;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_80);
    local_50._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_80 = (undefined **)&DAT_001e7b28;
    local_78 = 2;
    local_60 = 0;
    local_68 = 1;
    local_70 = (undefined8 ***)local_50;
    local_50._0_8_ = &local_28;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_80);
  }
  cVar1 = (**(code **)(local_90._8_8_ + 0x60))(local_90._0_8_);
  if (cVar1 != '\0') {
    local_50 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001ef0e8)();
    local_30 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hebb77db423a996f0E;
    local_80 = &PTR_s_Try_____help__for_more_informati_001e7b48;
    local_78 = 2;
    local_60 = 0;
    local_70 = &local_38;
    local_68 = 1;
    local_38 = (undefined8 ***)local_50;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef0e0)(&local_80);
  }
  uVar2 = (**(code **)(local_90._8_8_ + 0x58))(local_90._0_8_);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17he2a77dd3a42a1615E(&local_28);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h8db51044097e0a57E
            (local_90._0_8_,local_90._8_8_);
  return uVar2;
}