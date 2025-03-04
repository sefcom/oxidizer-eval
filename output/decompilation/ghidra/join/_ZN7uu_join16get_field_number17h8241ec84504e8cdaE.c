void _ZN7uu_join16get_field_number17h8241ec84504e8cdaE
               (undefined8 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long local_90;
  long local_88;
  long *local_80;
  code *local_78;
  long *local_70;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  undefined4 local_18;
  
  if (param_2 != 1) {
    if (param_4 == 0) {
      param_5 = 0;
    }
    param_1[1] = param_5;
    *param_1 = 0;
    return;
  }
  if ((param_4 == 1) && (param_3 != param_5)) {
    local_90 = param_3 + 1;
    local_88 = param_5 + 1;
    local_80 = &local_90;
    local_78 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_70 = &local_88;
    local_68 = 
    _ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17he829b250bc010c8bE
    ;
    local_60 = &DAT_00235490;
    local_58 = 2;
    local_40 = 0;
    local_50 = &local_80;
    local_48 = 2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_30,&local_60);
    local_18 = 1;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_30);
    *param_1 = uVar1;
    param_1[1] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
    ;
    return;
  }
  param_1[1] = param_3;
  *param_1 = 0;
  return;
}