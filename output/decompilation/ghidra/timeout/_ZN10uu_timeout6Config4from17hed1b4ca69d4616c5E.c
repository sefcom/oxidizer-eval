undefined8 * _ZN10uu_timeout6Config4from17hed1b4ca69d4616c5E(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined4 local_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h750a4b638bcd2e41E
            (&local_f8,param_2,"signal",6);
  lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf05e35bee3f0c992E
                    ("signal",6,&local_f8);
  if (lVar6 == 0) {
    auVar9 = (*(code *)
               PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_0021ac48
             )(&DAT_0011b22c,4);
    uVar7 = auVar9._8_8_;
    if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0016d0b3;
  }
  else {
    auVar9 = (*(code *)
               PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_0021ac48
             )(*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    uVar7 = auVar9._8_8_;
    if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      local_48 = *(undefined8 *)(lVar6 + 8);
      local_40 = *(undefined8 *)(lVar6 + 0x10);
      local_50 = 0;
      local_38 = 1;
      local_60 = &local_50;
      local_58 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0021ac50
      ;
      local_f8 = &DAT_002126c0;
      uStack_f0 = 2;
      local_d8 = 0;
      local_e8 = &local_60;
      uStack_e0 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h689cb97ed54ab1f6E(&local_b0,&local_f8);
      uStack_98 = 0x7d;
      uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37b75c6be93c3797E(&local_b0);
      param_1[1] = uVar7;
      param_1[2] = &
                   PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h8795ec55eec71da5E_00212700
      ;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
LAB_0016d0b3:
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h750a4b638bcd2e41E
              (&local_f8,param_2,"kill-after",10);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf05e35bee3f0c992E
                      ("kill-after",10,&local_f8);
    if (lVar6 == 0) {
      local_100 = 1000000000;
    }
    else {
      (*(code *)PTR__ZN6uucore8features6parser10parse_time8from_str17h30003dba666110f8E_0021ac58)
                (&local_b0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),1);
      if (CONCAT44(uStack_ac,local_b0) != -0x8000000000000000) goto LAB_0016d28a;
      local_70 = CONCAT44(uStack_a4,uStack_a8);
      local_100 = local_a0;
    }
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h750a4b638bcd2e41E
              (&local_f8,param_2,"duration",8);
    lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf05e35bee3f0c992E
                      ("duration",8,&local_f8);
    if (lVar6 != 0) {
      (*(code *)PTR__ZN6uucore8features6parser10parse_time8from_str17h30003dba666110f8E_0021ac58)
                (&local_b0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10),1);
      puVar2 = 
      PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0021ac60
      ;
      if (CONCAT44(uStack_ac,local_b0) != -0x8000000000000000) {
LAB_0016d28a:
        uStack_e0 = CONCAT44(uStack_e0._4_4_,0x7d);
        uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h37b75c6be93c3797E(&local_f8);
        param_1[1] = uVar7;
        param_1[2] = &
                     PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h8795ec55eec71da5E_00212700
        ;
        *param_1 = 0x8000000000000000;
        return param_1;
      }
      local_68 = CONCAT44(uStack_a4,uStack_a8);
      uVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0021ac60
              )(param_2,"preserve-status",0xf);
      uVar4 = (*(code *)puVar2)(param_2,"foreground",10);
      uVar5 = (*(code *)puVar2)(param_2,"verbose",7);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h9cd26fd33fbec693E
                (&local_f8,param_2);
      _ZN12clap_builder6parser5error12MatchesError6unwrap17h89a327b00226d280E(&local_b0,&local_f8);
      if (CONCAT44(uStack_ac,local_b0) != 0) {
        local_c8 = local_80;
        uStack_c4 = uStack_7c;
        uStack_c0 = uStack_78;
        uStack_bc = uStack_74;
        uStack_d0 = uStack_88;
        uStack_cc = uStack_84;
        _ZN4core4iter6traits8iterator8Iterator7collect17ha5b465dfecffc17eE(param_1,&local_f8);
        param_1[3] = local_68;
        *(undefined4 *)(param_1 + 4) = local_a0;
        param_1[5] = local_70;
        *(undefined4 *)(param_1 + 6) = local_100;
        param_1[7] = uVar7;
        *(undefined *)(param_1 + 8) = uVar4;
        *(undefined *)((long)param_1 + 0x41) = uVar3;
        *(undefined *)((long)param_1 + 0x42) = uVar5;
        return param_1;
      }
      goto LAB_0016d2f1;
    }
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
              (&PTR_s_src_uu_timeout_src_timeout_rs_00212780);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
            (&PTR_s_src_uu_timeout_src_timeout_rs_00212768);
LAB_0016d2f1:
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
            (&PTR_s_src_uu_timeout_src_timeout_rs_00212798);
  pcVar1 = (code *)swi(3);
  puVar8 = (undefined8 *)(*pcVar1)();
  return puVar8;
}