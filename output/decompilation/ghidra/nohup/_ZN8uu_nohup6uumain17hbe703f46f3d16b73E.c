undefined4 _ZN8uu_nohup6uumain17hbe703f46f3d16b73E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined local_98 [16];
  undefined **local_88;
  undefined8 local_80;
  undefined8 ***local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 ***local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 ***local_20;
  code *local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_001e4d40)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4f55ca5a1de17ec7E(uVar2);
  local_98 = _ZN8uu_nohup6uumain6uumain17hc0edd149f256cc13E(param_1,param_2);
  if (local_98._0_8_ == 0) {
    return _ZN6uucore4mods5error9EXIT_CODE17hcdc285b475eac33eE_0;
  }
  pcStack_50 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h48854978e5320c88E
  ;
  local_88 = (undefined **)&DAT_00117b00;
  local_80 = 1;
  local_68 = 0;
  local_70 = 1;
                    /* try { // try from 0015405f to 00154070 has its CatchHandler @ 001541fe */
  local_78 = &local_58;
  local_58 = (undefined8 ***)local_98;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h74d9f230e380178dE(local_38,&local_88);
  local_58 = (undefined8 ***)local_38._0_8_;
  pcStack_50 = (code *)local_38._8_8_;
  local_48 = local_28;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf03f9b55eedef8beE
                    (local_38._8_8_,local_28,1,0);
  if (cVar1 == '\0') {
                    /* try { // try from 0015409e to 001541c1 has its CatchHandler @ 00154203 */
    local_38 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001e4d48)();
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5c297fd59d55f657E;
    local_88 = (undefined **)&DAT_001de190;
    local_80 = 2;
    local_68 = 0;
    local_78 = &local_20;
    local_70 = 1;
    local_20 = (undefined8 ***)local_38;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_88);
    local_38._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_88 = (undefined **)&DAT_001de1b0;
    local_80 = 2;
    local_68 = 0;
    local_70 = 1;
    local_78 = (undefined8 ***)local_38;
    local_38._0_8_ = &local_58;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_88);
  }
  cVar1 = (**(code **)(local_98._8_8_ + 0x60))(local_98._0_8_);
  if (cVar1 != '\0') {
    local_38 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001e4d58)();
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5c297fd59d55f657E;
    local_88 = &PTR_s_Try_____help__for_more_informati_001de1d0;
    local_80 = 2;
    local_68 = 0;
    local_78 = &local_20;
    local_70 = 1;
    local_20 = (undefined8 ***)local_38;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001e4d50)(&local_88);
  }
  uVar2 = (**(code **)(local_98._8_8_ + 0x58))(local_98._0_8_);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h59f2ef44d25a3f5cE(local_58,pcStack_50);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h1b36c152713e8919E
            (local_98._0_8_,local_98._8_8_);
  return uVar2;
}