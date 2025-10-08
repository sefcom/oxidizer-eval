void _ZN5uu_df7columns6Column12from_matches17h56d2df2bf88d44daE
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar2 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
  ;
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_0020a178
          )(param_2,"print-type",10);
  cVar4 = (*(code *)puVar2)(param_2,"inodes",6);
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_0020a180
          )(param_2,"output",6);
  if (cVar5 == '\x03') {
    if (cVar3 != '\0') {
      if (cVar4 == '\0') {
LAB_0016af8f:
        puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,7);
        if (puVar7 == (undefined4 *)0x0) {
LAB_0016b1a4:
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00209e90)(1,7);
          goto LAB_0016b1b4;
        }
        *puVar7 = 0x2010b00;
        *(undefined2 *)(puVar7 + 1) = 0x403;
      }
      else {
LAB_0016af21:
        puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,7);
        if (puVar7 == (undefined4 *)0x0) goto LAB_0016b1a4;
        *puVar7 = 0x7060b00;
        *(undefined2 *)(puVar7 + 1) = 0x908;
      }
      *(undefined *)((long)puVar7 + 6) = 5;
      param_1[1] = 7;
      param_1[2] = puVar7;
      param_1[3] = 7;
      goto LAB_0016b128;
    }
    if (cVar4 == '\0') {
LAB_0016b0f0:
      puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,6);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x3020100;
        *(undefined2 *)(puVar7 + 1) = 0x504;
LAB_0016b114:
        param_1[1] = 6;
        param_1[2] = puVar7;
        param_1[3] = 6;
LAB_0016b128:
        *param_1 = 0;
        return;
      }
    }
    else {
LAB_0016af5e:
      puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,6);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0x8070600;
        *(undefined2 *)(puVar7 + 1) = 0x509;
        goto LAB_0016b114;
      }
    }
LAB_0016b1b4:
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00209e90)(1,6);
  }
  else if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      if (cVar5 == '\x02') {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h54572697988ee692E
                  (&local_78,param_2);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h953c1c3ca778ca12E(&local_b8,&local_78)
        ;
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          local_48 = local_88;
          uStack_40 = uStack_80;
          local_58 = local_98;
          uStack_50 = uStack_90;
          local_68 = local_a8;
          uStack_60 = uStack_a0;
          local_78 = local_b8;
          uStack_74 = uStack_b4;
          uStack_70 = uStack_b0;
          uStack_6c = uStack_ac;
          local_f8 = 0;
          local_f0 = 8;
          local_e8 = 0;
          local_e0 = 0;
          uStack_d8 = 1;
          local_d0 = 0;
          do {
                    /* try { // try from 0016b080 to 0016b0ed has its CatchHandler @ 0016b1ec */
            lVar8 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hded8a622fced995eE
                              (&local_78);
            if (lVar8 == 0) {
              param_1[3] = local_d0;
              *(undefined4 *)(param_1 + 1) = (undefined4)local_e0;
              *(undefined4 *)((long)param_1 + 0xc) = local_e0._4_4_;
              *(undefined4 *)(param_1 + 2) = (undefined4)uStack_d8;
              *(undefined4 *)((long)param_1 + 0x14) = uStack_d8._4_4_;
              *param_1 = 0;
LAB_0016b194:
              _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hc3fe8674e0b3654cE
                        (local_f8,local_f0);
              return;
            }
            uVar9 = *(undefined8 *)(lVar8 + 8);
            uVar1 = *(undefined8 *)(lVar8 + 0x10);
            local_c8 = uVar9;
            local_c0 = uVar1;
            cVar3 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h120b22dc52b1e14eE
                              (&local_c8,local_f0,local_e8);
            if (cVar3 != '\0') {
                    /* try { // try from 0016b15c to 0016b16b has its CatchHandler @ 0016b1ea */
              _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h40d1dda03127eab3E
                        (&local_b8,uVar9,uVar1);
              param_1[3] = local_a8;
              *(undefined4 *)(param_1 + 1) = local_b8;
              *(undefined4 *)((long)param_1 + 0xc) = uStack_b4;
              *(undefined4 *)(param_1 + 2) = uStack_b0;
              *(undefined4 *)((long)param_1 + 0x14) = uStack_ac;
              *param_1 = 1;
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4a907a8f82cf67deE
                        (local_e0,uStack_d8);
              goto LAB_0016b194;
            }
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hab2276672e065655E(&local_f8,uVar9,uVar1);
            uVar6 = _ZN5uu_df7columns6Column5parse17h53cde52d906cd7b1E(local_c8,local_c0);
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hcb2f69e768e07283E(uVar6);
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb31c117abee96b92E(&local_e0,uVar6);
          } while( true );
        }
        goto LAB_0016b1dd;
      }
      goto LAB_0016b0f0;
    }
    if (cVar5 != '\x02') goto LAB_0016af5e;
  }
  else if (cVar4 == '\0') {
    if (cVar5 != '\x02') goto LAB_0016af8f;
  }
  else if (cVar5 != '\x02') goto LAB_0016af21;
  (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_0020a188)
            ("internal error: entered unreachable code",0x28,
             &PTR_s_src_uu_df_src_columns_rs_00202e80);
LAB_0016b1dd:
  uVar9 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209eb0)
                    (&PTR_s_src_uu_df_src_columns_rs_00202e20);
                    /* catch() { ... } // from try @ 0016b15c with catch @ 0016b1ea */
                    /* catch() { ... } // from try @ 0016b080 with catch @ 0016b1ec */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h4a907a8f82cf67deE
            (local_e0,uStack_d8);
  _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17hc3fe8674e0b3654cE
            (local_f8,local_f0);
  _Unwind_Resume(uVar9);
  return;
}