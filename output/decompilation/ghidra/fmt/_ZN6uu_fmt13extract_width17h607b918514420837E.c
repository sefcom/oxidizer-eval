void _ZN6uu_fmt13extract_width17h607b918514420837E(ulong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  char local_88 [8];
  undefined **local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined local_48 [24];
  undefined4 local_30;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
            (&local_b8,param_2,"width");
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                    ("width",5,&local_b8);
  if (lVar3 == 0) {
    auVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17hc3c8b487726d2353E
                       (param_2,"files",5);
    lVar3 = 8;
    uVar7 = 0;
    if ((auVar8._0_8_ == 1) && (auVar8._8_8_ == 1)) {
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h5d676eefe7e492ecE
                (&local_b8,param_2,"files");
      lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h98df6b0c915d5d1bE
                        ("files",5,&local_b8);
      if (lVar5 == 0) {
        _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_fmt_src_fmt_rs_00226530);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar7 = *(undefined8 *)(lVar5 + 8);
      uVar1 = *(undefined8 *)(lVar5 + 0x10);
      local_b8 = (undefined **)((ulong)local_b8._4_4_ << 0x20);
      uVar6 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_b8);
      lVar5 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hdb721c8cd5e22968E
                        (uVar6,uVar7,uVar1);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
                  (&local_b8,lVar5);
        param_1[1] = (ulong)local_b8 & 0xff ^ 1;
        lVar3 = 0x10;
        uVar7 = local_b0;
      }
    }
    *(undefined8 *)((long)param_1 + lVar3) = uVar7;
    *param_1 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 8);
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (local_88,uVar7,uVar1);
    if (local_88[0] == '\0') {
      uVar4 = 1;
    }
    else {
      local_68 = 0;
      local_50 = 1;
      local_78 = &local_68;
      local_70 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_b8 = &PTR_s_invalid_width__00226520;
      local_b0 = 1;
      local_98 = 0;
      local_a8 = &local_78;
      local_a0 = 1;
      local_60 = uVar7;
      local_58 = uVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h57a000129381aa23E(local_48,&local_b8);
      local_30 = 1;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17had2f12c6fe048da6E(local_48);
      local_80 = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hbb2ca950e64d5c64E_00226400
      ;
    }
    param_1[1] = uVar4;
    param_1[2] = (ulong)local_80;
    *param_1 = (ulong)(local_88[0] != '\0');
  }
  return;
}