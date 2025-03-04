long * _ZN5uu_df6blocks15read_block_size17h03278a4ead33fd1dE(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined auVar7 [16];
  undefined *local_80;
  long local_78;
  undefined8 **local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 *local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined local_28;
  
  cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"blocksize",9);
  if (cVar4 == '\0') {
    cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"portability",0xb);
    if (cVar4 == '\0') {
      auVar7 = _ZN5uu_df6blocks19block_size_from_env17h0875cabe2802aae1E();
      lVar5 = auVar7._8_8_;
      if (auVar7._0_8_ != 1) {
        lVar5 = _ZN67__LT_uu_df__blocks__BlockSize_u20_as_u20_core__default__Default_GT_7default17hcd56ba661cd7b884E
                          ();
      }
      param_1[1] = lVar5;
      goto LAB_001d4add;
    }
    local_78 = _ZN67__LT_uu_df__blocks__BlockSize_u20_as_u20_core__default__Default_GT_7default17hcd56ba661cd7b884E
                         ();
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17had32a7dafbe4cc99E
              (&local_80,param_2,"blocksize",9);
    lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h16d97371a8658236E
                      ("blocksize",9,&local_80);
    if (lVar5 == 0) {
      _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00241ed8);
      pcVar3 = (code *)swi(3);
      plVar6 = (long *)(*pcVar3)();
      return plVar6;
    }
    uVar1 = *(undefined8 *)(lVar5 + 8);
    uVar2 = *(undefined8 *)(lVar5 + 0x10);
    _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE(&local_80,uVar1,uVar2);
    if (local_80 != (undefined *)0x3) {
      param_1[2] = (long)local_70;
      param_1[3] = lStack_68;
      *param_1 = (long)local_80;
      param_1[1] = local_78;
      return param_1;
    }
    if (local_78 == 0) {
      local_40 = 0;
      local_28 = 1;
      local_50 = &local_40;
      local_48 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_80 = &DAT_0010ba30;
      local_78 = 1;
      local_60 = 0;
      local_70 = &local_50;
      lStack_68 = 1;
      local_38 = uVar1;
      local_30 = uVar2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h87f8290896e212c8E(param_1 + 1,&local_80);
      *param_1 = 1;
      return param_1;
    }
  }
  param_1[1] = local_78;
LAB_001d4add:
  *param_1 = 3;
  return param_1;
}