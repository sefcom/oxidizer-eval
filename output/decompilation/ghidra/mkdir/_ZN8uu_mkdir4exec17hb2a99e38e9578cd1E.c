undefined8 _ZN8uu_mkdir4exec17hb2a99e38e9578cd1E(undefined4 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined local_e8 [16];
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined local_a8 [16];
  undefined8 *local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = param_1[4];
  uStack_64 = param_1[5];
  uStack_60 = param_1[6];
  uStack_5c = param_1[7];
  local_58 = param_1[8];
  uStack_54 = param_1[9];
  uStack_50 = param_1[10];
  uStack_4c = param_1[0xb];
  local_48 = param_1[0xc];
  uStack_44 = param_1[0xd];
  uStack_40 = param_1[0xe];
  uStack_3c = param_1[0xf];
  lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h703678aad0b6495eE
                    (&local_78);
  puVar1 = PTR__ZN8uu_mkdir5mkdir17hb9a94a553ced0d34E_001f4a78;
  if (lVar5 != 0) {
    do {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h09085b3eedcee021E
                (&local_d8,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
      uVar3 = local_d0;
      puVar2 = local_d8;
                    /* try { // try from 001602c5 to 001602cc has its CatchHandler @ 00160384 */
      auVar6 = (*(code *)puVar1)(local_d0,local_c8,param_2);
      if (auVar6._0_8_ == 0) {
                    /* try { // try from 00160280 to 00160289 has its CatchHandler @ 00160384 */
        _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h1159a829858b625cE
                  (0,auVar6._8_8_);
      }
      else {
                    /* try { // try from 001602db to 0016035c has its CatchHandler @ 00160389 */
        local_e8 = auVar6;
        uVar4 = (**(code **)(auVar6._8_8_ + 0x58))(auVar6._0_8_);
        (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_001f4a80)(uVar4);
        auVar6 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f4908)();
        local_98 = (undefined8 *)local_a8;
        local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f8342cc4ae57580E;
        local_80 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17ha6320bb394ca0d6bE
        ;
        local_d8 = &DAT_001ede10;
        local_d0 = 3;
        local_b8 = 0;
        local_c8 = &local_98;
        local_c0 = 2;
        local_88 = local_e8;
        local_a8 = auVar6;
        (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f4910)(&local_d8);
                    /* try { // try from 00160366 to 0016036a has its CatchHandler @ 00160384 */
        _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17had00d84193dcc420E
                  (local_e8._0_8_,local_e8._8_8_);
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h186e614367733317E(puVar2,uVar3);
      lVar5 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h703678aad0b6495eE
                        (&local_78);
    } while (lVar5 != 0);
  }
  return 0;
}