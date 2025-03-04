undefined8 _ZN6uu_env13ignore_signal17hb651b27965f7f812E(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 local_9c;
  int local_98 [2];
  undefined4 local_90;
  undefined local_88 [16];
  undefined4 *local_78;
  code *local_70;
  undefined *local_68;
  code *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined4 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  undefined4 local_10;
  
  _ZN3nix3sys6signal6signal17haa2dccad64099f8cE(local_98,param_1,1);
  if (local_98[0] == 4) {
    local_9c = param_1;
    local_88 = _ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_4desc17hd335e127646dbdc2E
                         (local_90);
    local_78 = &local_9c;
    local_70 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17hca014a89be6ce751E
    ;
    local_68 = local_88;
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h402b3702303fb18eE;
    local_58 = &PTR_DAT_00248c58;
    local_50 = 2;
    local_38 = 0;
    local_48 = &local_78;
    local_40 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(local_28,&local_58);
    local_10 = 0x7d;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h48315bbd00cc7109E(local_28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}