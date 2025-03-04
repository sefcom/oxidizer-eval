void _ZN5uu_dd6Output13discard_cache17h9654de1740a6c207E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined local_78 [16];
  undefined local_68 [16];
  undefined8 *local_58;
  code *local_50;
  undefined *local_48;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 **local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar1 = _ZN5uu_dd4Dest13discard_cache17h93c1738e4adad1fbE(*param_1,param_1[1],param_2,param_3);
  local_78 = _ZN205__LT_core__result__Result_LT_T_C_nix__errno__consts__Errno_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17he363b563d49dfbc5E
                       (uVar1);
  if (local_78._0_8_ != 0) {
                    /* try { // try from 001d7b80 to 001d7c03 has its CatchHandler @ 001d7c18 */
    uVar1 = (**(code **)(local_78._8_8_ + 0x60))(local_78._0_8_);
    _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar1);
    local_68 = _ZN6uucore9util_name17h60d842bf27b05e82E();
    local_58 = (undefined8 *)local_68;
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h377362f42c043423E;
    local_40 = 
    _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hc9ea8a505475b34bE
    ;
    local_38 = &DAT_00261070;
    local_30 = 3;
    local_18 = 0;
    local_28 = &local_58;
    local_20 = 2;
    local_48 = local_78;
    _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_38);
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17hef88782da503643cE
              (local_78._0_8_,local_78._8_8_);
  }
  return;
}