undefined8
_ZN8uu_mkdir4exec17h97ad3c032066465dE
          (undefined4 *param_1,undefined param_2,undefined4 param_3,undefined param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 **local_e8;
  undefined local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
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
  lVar2 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3cb259793dced06bE
                    (&local_78);
  if (lVar2 != 0) {
    do {
      _ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E
                (&local_c8,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      local_e8 = local_b8;
      local_f8 = (undefined4)local_c8;
      uStack_f4 = local_c8._4_4_;
      uStack_f0 = (undefined4)uStack_c0;
      uStack_ec = uStack_c0._4_4_;
                    /* try { // try from 001b2c83 to 001b2c8e has its CatchHandler @ 001b2d4c */
      auVar3 = _ZN8uu_mkdir5mkdir17h25ca5a950d7e6473E(uStack_c0,local_b8,param_2,param_3,param_4);
      if (auVar3._0_8_ != 0) {
                    /* try { // try from 001b2c9d to 001b2d24 has its CatchHandler @ 001b2d51 */
        local_108 = auVar3;
        uVar1 = (**(code **)(auVar3._8_8_ + 0x60))(auVar3._0_8_);
        _ZN6uucore4mods5error13set_exit_code17hf3c39c5b4c05c2c0E(uVar1);
        auVar3 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_98 = (undefined8 *)local_d8;
        local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6a55cddc5280deE;
        local_80 = 
        _ZN69__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__fmt__Display_GT_3fmt17hf47c6583a9945374E
        ;
        local_c8 = &DAT_00220510;
        uStack_c0 = 3;
        local_a8 = 0;
        local_b8 = &local_98;
        local_b0 = 2;
        local_88 = local_108;
        local_d8 = auVar3;
        _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_c8);
                    /* try { // try from 001b2d2e to 001b2d32 has its CatchHandler @ 001b2d4c */
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h71810d9408842807E
                  (local_108._0_8_,local_108._8_8_);
      }
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb7551ff5f0211b82E(&local_f8);
      lVar2 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3cb259793dced06bE
                        (&local_78);
    } while (lVar2 != 0);
  }
  return 0;
}