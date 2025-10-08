undefined4 _ZN5uu_id6uumain17hb5c3e3d0b0cf6ec7E(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_001ef838)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h6436dc3d72134412E(uVar2);
  local_98 = _ZN5uu_id6uumain6uumain17hcb63553f6d076f9bE(param_1,param_2);
  if (local_98._0_8_ == 0) {
    return _ZN6uucore4mods5error9EXIT_CODE17hcdc285b475eac33eE_0;
  }
  pcStack_50 = 
  _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h71c1f2c1c8a1efd7E
  ;
  local_88 = (undefined **)&DAT_001182c0;
  local_80 = 1;
  local_68 = 0;
  local_70 = 1;
                    /* try { // try from 00156d7f to 00156d90 has its CatchHandler @ 00156f1e */
  local_78 = &local_58;
  local_58 = (undefined8 ***)local_98;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17hf6d255cc018ea898E(local_38,&local_88);
  local_58 = (undefined8 ***)local_38._0_8_;
  pcStack_50 = (code *)local_38._8_8_;
  local_48 = local_28;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h8215c1f114d7ddc6E
                    (local_38._8_8_,local_28,1,0);
  if (cVar1 == '\0') {
                    /* try { // try from 00156dbe to 00156ee1 has its CatchHandler @ 00156f23 */
    local_38 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001ef840)();
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h09315c6309a338a3E;
    local_88 = (undefined **)&DAT_001e81d0;
    local_80 = 2;
    local_68 = 0;
    local_78 = &local_20;
    local_70 = 1;
    local_20 = (undefined8 ***)local_38;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef848)(&local_88);
    local_38._8_8_ =
         _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_88 = (undefined **)&DAT_001e81f0;
    local_80 = 2;
    local_68 = 0;
    local_70 = 1;
    local_78 = (undefined8 ***)local_38;
    local_38._0_8_ = &local_58;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef848)(&local_88);
  }
  cVar1 = (**(code **)(local_98._8_8_ + 0x60))(local_98._0_8_);
  if (cVar1 != '\0') {
    local_38 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_001ef850)();
    local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h09315c6309a338a3E;
    local_88 = &PTR_DAT_001e8210;
    local_80 = 2;
    local_68 = 0;
    local_78 = &local_20;
    local_70 = 1;
    local_20 = (undefined8 ***)local_38;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001ef848)(&local_88);
  }
  uVar2 = (**(code **)(local_98._8_8_ + 0x58))(local_98._0_8_);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcee18d35cbfb2d14E(local_58,pcStack_50);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h972f6d7da2cadd1eE
            (local_98._0_8_,local_98._8_8_);
  return uVar2;
}