void _ZN7uu_join18parse_field_number17h9316b11a89c3fc26E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char local_a8;
  char local_a7;
  long local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [24];
  undefined4 local_20;
  
  _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
            (&local_a8);
  if (local_a8 == '\0') {
    if (local_a0 != 0) {
      param_1[1] = local_a0 + -1;
      *param_1 = 0;
      return;
    }
  }
  else if (local_a7 == '\x02') {
    param_1[1] = 0xffffffffffffffff;
    *param_1 = 0;
    return;
  }
  local_88 = 0;
  local_70 = 1;
  local_98 = &local_88;
  local_90 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_68 = &DAT_002354b0;
  local_60 = 1;
  local_48 = 0;
  local_58 = &local_98;
  local_50 = 1;
  local_80 = param_2;
  local_78 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_38,&local_68);
  local_20 = 1;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_38);
  *param_1 = uVar1;
  param_1[1] = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
  ;
  return;
}