void _ZN7uu_join18parse_field_number17h7876c58ca785f0e6E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char local_a8;
  char local_a7;
  long local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_a8);
  if (local_a8 == '\x01') {
    if (local_a7 != '\x02') {
LAB_0016ebf1:
      local_88 = 0;
      local_70 = 1;
      local_98 = &local_88;
      local_90 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00204f88
      ;
      local_68 = &PTR_DAT_001fe598;
      local_60 = 1;
      local_48 = 0;
      local_58 = &local_98;
      local_50 = 1;
      local_80 = param_2;
      local_78 = param_3;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h9a77d6fb89838746E(local_38,&local_68);
      local_20 = 1;
      uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6838e3ae00012226E(local_38);
      *param_1 = uVar1;
      param_1[1] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h54a1587742d47b08E_001fe360
      ;
      return;
    }
    param_1[1] = 0xffffffffffffffff;
  }
  else {
    if (local_a0 == 0) goto LAB_0016ebf1;
    param_1[1] = local_a0 + -1;
  }
  *param_1 = 0;
  return;
}