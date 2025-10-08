undefined8 _ZN6uu_env13ignore_signal17hd22c2b126fd57d37E(undefined4 param_1)

{
  undefined8 uVar1;
  undefined4 local_9c;
  int local_98 [2];
  undefined4 local_90;
  undefined local_88 [16];
  undefined4 *local_78;
  undefined *local_70;
  undefined *local_68;
  code *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined4 **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined local_28 [24];
  undefined4 local_10;
  
  (*(code *)PTR__ZN3nix3sys6signal6signal17h36b1180493a8e0aaE_002195f8)(local_98,param_1,1);
  if (local_98[0] == 4) {
    local_9c = param_1;
    local_88 = (*(code *)
                 PTR__ZN3nix5errno43__LT_impl_u20_nix__errno__consts__Errno_GT_4desc17h315f9aa16cfc7fceE_00219600
               )(local_90);
    local_78 = &local_9c;
    local_70 = 
    PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_00219460
    ;
    local_68 = local_88;
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0c2ec06aa0838e92E;
    local_58 = &PTR_DAT_00210ce8;
    local_50 = 2;
    local_38 = 0;
    local_48 = &local_78;
    local_40 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(local_28,&local_58);
    local_10 = 0x7d;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(local_28);
    return uVar1;
  }
  return 0;
}