ulong _ZN8uu_tsort6uumain17hdd05e82f40c09bb3E(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined local_a8 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [16];
  undefined8 **local_58;
  code *local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hc16ff077e3f1e2f6E_00225060)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hfcf59f14360ccc96E(uVar2);
  local_a8 = _ZN8uu_tsort6uumain6uumain17hff4558af46a5d226E(param_1,param_2);
  if (local_a8._0_8_ != 0) {
    uStack_40 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc009be0628a67b14E
    ;
    local_98 = (undefined **)&DAT_00114af0;
    local_90 = 1;
    local_78 = 0;
    local_80 = 1;
                    /* try { // try from 001670cf to 001670e0 has its CatchHandler @ 0016726c */
    local_88 = &local_48;
    local_48 = (undefined8 *)local_a8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h61e9aa31ff763042E(local_28,&local_98);
    uStack_40 = (code *)CONCAT44(uStack_1c,uStack_20);
    local_38 = local_18;
                    /* try { // try from 00167100 to 00167234 has its CatchHandler @ 00167271 */
    cVar1 = _ZN77__LT_alloc__string__String_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2ne17hb4f2d17f007cd88aE
                      (uStack_40);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00225068)();
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb3b4f0bde3248f91E;
      local_98 = (undefined **)&DAT_0021e710;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      local_58 = (undefined8 **)local_68;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00225070)(&local_98);
      local_68._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
      ;
      local_98 = (undefined **)&DAT_0021e730;
      local_90 = 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = (undefined8 **)local_68;
      local_68._0_8_ = &local_48;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00225070)(&local_98);
    }
    cVar1 = (**(code **)(local_a8._8_8_ + 0x68))(local_a8._0_8_);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR__ZN6uucore16execution_phrase17h7a36a698673d06abE_00225078)();
      local_58 = (undefined8 **)local_68;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb3b4f0bde3248f91E;
      local_98 = &PTR_DAT_0021e750;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_00225070)(&local_98);
    }
    uVar3 = (**(code **)(local_a8._8_8_ + 0x60))(local_a8._0_8_);
                    /* try { // try from 00167235 to 00167240 has its CatchHandler @ 0016726c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h55282bba1fb61ecdE(&local_48);
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hc04a4de1dc5bbeabE
              (local_a8._0_8_,local_a8._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17he41365fe4dc666e7E_00225080)();
  return uVar4;
}