undefined8 *
_ZN7uu_uniq10opt_parsed17hf72dfa4667cb2ab6E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  char local_d0;
  char local_cf;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined4 local_28;
  
  local_c0 = param_2;
  local_b8 = param_3;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h4a2509cd518fbd9fE
            (&local_70,param_4,param_2,param_3);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h0de382a77e5c484bE
                    (param_2,param_3,&local_70);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  uVar3 = *(undefined8 *)(lVar2 + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_d0,uVar3,uVar1)
  ;
  if (local_d0 == '\0') {
    param_1[1] = 1;
    param_1[2] = local_c8;
  }
  else {
    if (local_cf != '\x02') {
      local_90 = 0;
      local_78 = 0;
      local_b0 = &local_c0;
      local_a8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9c987e12ca4ea4cfE;
      local_a0 = &local_90;
      local_98 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001fc530
      ;
      local_70 = &PTR_DAT_001f5850;
      local_68 = 2;
      local_50 = 0;
      local_60 = &local_b0;
      local_58 = 2;
      local_88 = uVar3;
      local_80 = uVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4bd594a823200ed2E(local_40,&local_70);
      local_28 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h41be10ceb8cdc0b4E(local_40);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hde76656e1cb71f72E_001f5890
      ;
      uVar3 = 1;
      goto LAB_00166cdc;
    }
    param_1[1] = 1;
    param_1[2] = 0xffffffffffffffff;
  }
  uVar3 = 0;
LAB_00166cdc:
  *param_1 = uVar3;
  return param_1;
}