void _ZN5uu_df6blocks15read_block_size17h32d30779f3aa72e5E(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined *local_78;
  long local_70;
  undefined8 **local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined local_20;
  
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_0020a168
          )(param_2,"blocksize",9);
  if (cVar2 == '\0') {
    cVar2 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
            )(param_2,"portability",0xb);
    if (cVar2 == '\0') {
      auVar4 = _ZN5uu_df6blocks19block_size_from_env17hdb573be3e983bfb6E();
      if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        param_1[1] = auVar4._8_8_;
        goto LAB_0016ac68;
      }
    }
    local_70 = (*(code *)
                 PTR__ZN67__LT_uu_df__blocks__BlockSize_u20_as_u20_core__default__Default_GT_7default17hd82b76b8049fd167E_00209fd0
               )();
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h117add036a1ff1afE
              (&local_78,param_2);
    lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h8bc7816bfd18267bE(&local_78);
    if (lVar3 == 0) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209eb0)
                (&PTR_s_src_uu_df_src_blocks_rs_00202e08);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(code *)
      PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_0020a170)
              (&local_78,*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10));
    if (local_78 != (undefined *)0x4) {
      param_1[2] = (long)local_68;
      param_1[3] = lStack_60;
      *param_1 = (long)local_78;
      param_1[1] = local_70;
      return;
    }
    if (local_70 == 0) {
      local_30 = *(undefined8 *)(lVar3 + 8);
      local_28 = *(undefined8 *)(lVar3 + 0x10);
      local_38 = 0;
      local_20 = 1;
      local_48 = &local_38;
      local_40 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209ee0
      ;
      local_78 = &DAT_00119280;
      local_70 = 1;
      local_58 = 0;
      local_68 = &local_48;
      lStack_60 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h7e34be96cbbb4028E(param_1 + 1,&local_78);
      *param_1 = 1;
      return;
    }
  }
  param_1[1] = local_70;
LAB_0016ac68:
  *param_1 = 4;
  return;
}