ulong _ZN7uu_vdir6uumain17h8d32ee154ddc15caE(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_98 [16];
  undefined **local_88;
  undefined8 local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined local_38 [16];
  undefined8 local_28;
  undefined8 **local_20;
  code *local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hcf33f4a6d6e443c4E_0048b790)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h5bc0fb60c9e8a468E(uVar2);
  local_98 = _ZN7uu_vdir6uumain6uumain17hbc16a1a2f399cf2aE(param_1,param_2);
  if (local_98._0_8_ != 0) {
    pcStack_50 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h1bc4f10f23d2c2edE
    ;
    local_88 = (undefined **)&DAT_001cf5a0;
    local_80 = 1;
    local_68 = 0;
    local_70 = 1;
                    /* try { // try from 00272eaf to 00272ec0 has its CatchHandler @ 0027304e */
    local_78 = &local_58;
    local_58 = (undefined8 **)local_98;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h9b2d20e41d365a2fE(local_38,&local_88);
    local_58 = (undefined8 **)local_38._0_8_;
    pcStack_50 = (code *)local_38._8_8_;
    local_48 = local_28;
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf7fdabd0edba5e86E
                      (local_38._8_8_,local_28,1,0);
    if (cVar1 == '\0') {
                    /* try { // try from 00272eee to 00273011 has its CatchHandler @ 00273053 */
      local_38 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0048b798)();
      local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb60a23456c6d19ebE;
      local_88 = (undefined **)&DAT_00381828;
      local_80 = 2;
      local_68 = 0;
      local_78 = &local_20;
      local_70 = 1;
      local_20 = (undefined8 **)local_38;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048b7a0)(&local_88);
      local_38._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
      ;
      local_88 = (undefined **)&DAT_00381848;
      local_80 = 2;
      local_68 = 0;
      local_70 = 1;
      local_78 = (undefined8 **)local_38;
      local_38._0_8_ = &local_58;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048b7a0)(&local_88);
    }
    cVar1 = (**(code **)(local_98._8_8_ + 0x60))(local_98._0_8_);
    if (cVar1 != '\0') {
      local_38 = (*(code *)PTR__ZN6uucore16execution_phrase17hf0e80cb4793732adE_0048b7a8)();
      local_18 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb60a23456c6d19ebE;
      local_88 = &PTR_DAT_00381868;
      local_80 = 2;
      local_68 = 0;
      local_78 = &local_20;
      local_70 = 1;
      local_20 = (undefined8 **)local_38;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0048b7a0)(&local_88);
    }
    uVar3 = (**(code **)(local_98._8_8_ + 0x58))(local_98._0_8_);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2822f6907e66af89E
              (local_58,pcStack_50);
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17h3a379ac7d39f91e2E
              (local_98._0_8_,local_98._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17h4ce6cf124c2ef658E_0048b7b0)();
  return uVar4;
}