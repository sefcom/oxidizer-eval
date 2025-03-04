ulong _ZN11uu_basename6uumain17h4266efb8db5c1967E(undefined8 param_1,undefined8 param_2)

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
  
  uVar2 = (*(code *)PTR__ZN6uucore28disable_rust_signal_handlers17hc16ff077e3f1e2f6E_002122d0)();
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h9f773548c4e1115cE(uVar2);
  local_a8 = _ZN11uu_basename6uumain6uumain17hafa1ff2c988de7cbE(param_1,param_2);
  if (local_a8._0_8_ != 0) {
    uStack_40 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hd3a3e4be490b2448E
    ;
    local_98 = (undefined **)&DAT_00113500;
    local_90 = 1;
    local_78 = 0;
    local_80 = 1;
                    /* try { // try from 0016309f to 001630b0 has its CatchHandler @ 0016323c */
    local_88 = &local_48;
    local_48 = (undefined8 *)local_a8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hccb2c5237b9a5f11E(local_28,&local_98);
    uStack_40 = (code *)CONCAT44(uStack_1c,uStack_20);
    local_38 = local_18;
                    /* try { // try from 001630d0 to 00163204 has its CatchHandler @ 00163241 */
    cVar1 = _ZN77__LT_alloc__string__String_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2ne17hb4f2d17f007cd88aE
                      (uStack_40);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_002122d8)();
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he1b7e7c9a71a9970E;
      local_98 = (undefined **)&DAT_0020c238;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      local_58 = (undefined8 **)local_68;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002122b0)(&local_98);
      local_68._8_8_ =
           _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E
      ;
      local_98 = (undefined **)&DAT_0020c258;
      local_90 = 2;
      local_78 = 0;
      local_80 = 1;
      local_88 = (undefined8 **)local_68;
      local_68._0_8_ = &local_48;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002122b0)(&local_98);
    }
    cVar1 = (**(code **)(local_a8._8_8_ + 0x68))(local_a8._0_8_);
    if (cVar1 != '\0') {
      local_68 = (*(code *)PTR__ZN6uucore16execution_phrase17h7a36a698673d06abE_002122e0)();
      local_58 = (undefined8 **)local_68;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17he1b7e7c9a71a9970E;
      local_98 = &PTR_DAT_0020c278;
      local_90 = 2;
      local_78 = 0;
      local_88 = &local_58;
      local_80 = 1;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E_002122b0)(&local_98);
    }
    uVar3 = (**(code **)(local_a8._8_8_ + 0x60))(local_a8._0_8_);
                    /* try { // try from 00163205 to 00163210 has its CatchHandler @ 0016323c */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hec0dbaa5dc26e973E(&local_48);
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17heb7adbed468572c8E
              (local_a8._0_8_,local_a8._8_8_);
    return (ulong)uVar3;
  }
  uVar4 = (*(code *)PTR__ZN6uucore4mods5error13get_exit_code17he41365fe4dc666e7E_002122e8)();
  return uVar4;
}