void _ZN6uu_fmt13extract_width17h7438790f5cc9b932E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long extraout_RDX;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50;
  undefined local_48 [24];
  undefined4 local_30;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
            (&local_a8,param_2,"width",5);
  lVar4 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                    ("width",5,&local_a8);
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(lVar4 + 8);
    uVar1 = *(undefined8 *)(lVar4 + 0x10);
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_a8,uVar5,uVar1);
    if ((char)local_a8 != '\0') {
      local_68 = 0;
      local_50 = 1;
      local_78 = &local_68;
      local_70 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f6ed8
      ;
      local_a8 = &PTR_s_invalid_width__001f0928;
      local_a0 = 1;
      local_88 = 0;
      local_98 = &local_78;
      local_90 = 1;
      local_60 = uVar5;
      local_58 = uVar1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h974ccb46cc19ceacE(local_48,&local_a8);
      local_30 = 1;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h2c9a23957ea0966aE(local_48);
      param_1[1] = uVar5;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17heb5419a7ab07f1ccE_001f0720
      ;
      *param_1 = 1;
      return;
    }
    param_1[1] = 1;
    param_1[2] = local_a0;
    goto LAB_00164f1e;
  }
  bVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8index_of17h533e2cba337d4042E_001f70d8
          )(param_2,"files",5);
  lVar4 = 8;
  if ((bVar3 & extraout_RDX == 1) == 0) {
LAB_00164f18:
    local_a0 = 0;
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h44c4a3f5845ce8d4E
              (&local_a8,param_2,"files",5);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h80b30bf7e42be37cE
                      ("files",5,&local_a8);
    if (lVar6 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001f6f10)
                (&PTR_s_src_uu_fmt_src_fmt_rs_001f0938);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = *(undefined8 *)(lVar6 + 8);
    uVar1 = *(undefined8 *)(lVar6 + 0x10);
    local_a8 = (undefined **)((ulong)local_a8._4_4_ << 0x20);
    uVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x2d,&local_a8);
    lVar6 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                      (uVar7,uVar5,uVar1);
    if (lVar6 == 0) goto LAB_00164f18;
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E(&local_a8,lVar6);
    param_1[1] = (ulong)local_a8 & 0xff ^ 1;
    lVar4 = 0x10;
  }
  *(undefined8 *)((long)param_1 + lVar4) = local_a0;
LAB_00164f1e:
  *param_1 = 0;
  return;
}