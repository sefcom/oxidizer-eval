undefined8 *
_ZN5uu_df7columns6Column12from_matches17h15f1a0d2790b5397E(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined local_f8 [16];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  cVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"print-type",10);
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"inodes",6);
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"output",6);
  if (cVar3 == '\x03') {
    if (cVar1 == '\0') {
      if (cVar2 == '\0') goto LAB_001d4fc6;
LAB_001d4e26:
      puVar5 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(6);
      if (puVar5 == (undefined4 *)0x0) goto LAB_001d507f;
      *puVar5 = 0x8070600;
      *(undefined2 *)(puVar5 + 1) = 0x509;
LAB_001d4fe5:
      uVar8 = 6;
      goto LAB_001d4fee;
    }
    if (cVar2 == '\0') goto LAB_001d4e52;
LAB_001d4dee:
    puVar5 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(7);
    if (puVar5 == (undefined4 *)0x0) goto LAB_001d506f;
    *puVar5 = 0x7060b00;
    *(undefined2 *)(puVar5 + 1) = 0x908;
  }
  else {
    if (cVar1 == '\0') {
      if (cVar2 != '\0') {
        if (cVar3 == '\x02') goto LAB_001d508f;
        goto LAB_001d4e26;
      }
      if (cVar3 == '\x02') {
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hb3fde72e0199aad2E
                  (&local_78,param_2,"output",6);
        _ZN12clap_builder6parser5error12MatchesError6unwrap17h25aaf5005aa7e09dE
                  (&local_b8,"output",6,&local_78);
        if (CONCAT44(uStack_b4,local_b8) == 0) {
          uVar8 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00241ef0);
                    /* catch() { ... } // from try @ 001d5059 with catch @ 001d50b5 */
          _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h8d7158ab7f6c77b2E
                    (&local_e8);
          puVar7 = (undefined8 *)_Unwind_Resume(uVar8);
          return puVar7;
        }
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
        local_e8 = 0;
        local_e0 = 8;
        local_d8 = 0;
        local_d0 = 0;
        uStack_c8 = 1;
        local_c0 = 0;
        do {
                    /* try { // try from 001d4f50 to 001d4fc3 has its CatchHandler @ 001d50bc */
          lVar6 = _ZN121__LT_clap_builder__parser__matches__arg_matches__ValuesRef_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he44065405483c9e6E
                            (&local_78);
          if (lVar6 == 0) {
            param_1[3] = local_c0;
            *(undefined4 *)(param_1 + 1) = (undefined4)local_d0;
            *(undefined4 *)((long)param_1 + 0xc) = local_d0._4_4_;
            *(undefined4 *)(param_1 + 2) = (undefined4)uStack_c8;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_c8._4_4_;
            *param_1 = 0;
LAB_001d5063:
            _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h8d7158ab7f6c77b2E
                      (&local_e8);
            return param_1;
          }
          auVar9 = _ZN4core3ops8function5impls80__LT_impl_u20_core__ops__function__FnOnce_LT_A_GT__u20_for_u20__RF_mut_u20_F_GT_9call_once17h1af83cdb9d95be3cE
                             (*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
          local_f8 = auVar9;
          cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17hf8f0d3232cc90c0dE
                            (local_f8,local_e0,local_d8);
          if (cVar1 != '\0') {
                    /* try { // try from 001d5036 to 001d503f has its CatchHandler @ 001d50ba */
            _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hed7ddb801416678dE
                      (&local_b8,local_f8._0_8_,local_f8._8_8_);
            param_1[3] = local_a8;
            *(undefined4 *)(param_1 + 1) = local_b8;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_b4;
            *(undefined4 *)(param_1 + 2) = uStack_b0;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_ac;
            *param_1 = 1;
                    /* try { // try from 001d5059 to 001d5062 has its CatchHandler @ 001d50b5 */
            _ZN4core3ptr66drop_in_place_LT_alloc__vec__Vec_LT_uu_df__columns__Column_GT__GT_17h28eca68a33c1715fE
                      (&local_d0);
            goto LAB_001d5063;
          }
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h328effd5a350cac1E
                    (&local_e8,local_f8._0_8_,local_f8._8_8_);
          uVar4 = _ZN5uu_df7columns6Column5parse17h6fa6943eaec20ad4E(local_f8._0_8_,local_f8._8_8_);
          _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h805b01653c809cdbE(uVar4);
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hf4b24cdd85525803E(&local_d0,uVar4);
        } while( true );
      }
LAB_001d4fc6:
      puVar5 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(6);
      if (puVar5 == (undefined4 *)0x0) {
LAB_001d507f:
                    /* WARNING: Subroutine does not return */
        _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(1,6);
      }
      *puVar5 = 0x3020100;
      *(undefined2 *)(puVar5 + 1) = 0x504;
      goto LAB_001d4fe5;
    }
    if (cVar2 != '\0') {
      if (cVar3 == '\x02') {
LAB_001d508f:
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking5panic17h8c3a660c3523e4a4E(&DAT_00116125,0x28,&PTR_DAT_00241f20);
      }
      goto LAB_001d4dee;
    }
    if (cVar3 == '\x02') goto LAB_001d508f;
LAB_001d4e52:
    puVar5 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(7);
    if (puVar5 == (undefined4 *)0x0) {
LAB_001d506f:
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(1,7);
    }
    *puVar5 = 0x2010b00;
    *(undefined2 *)(puVar5 + 1) = 0x403;
  }
  *(undefined *)((long)puVar5 + 6) = 5;
  uVar8 = 7;
LAB_001d4fee:
  _ZN5alloc5slice4hack8into_vec17h72287ac5f2b51bf0E(param_1 + 1,puVar5,uVar8);
  *param_1 = 0;
  return param_1;
}