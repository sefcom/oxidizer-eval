long * _ZN7uu_join14parse_settings17ha7f529424dcbcc67E(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined uVar5;
  long lVar6;
  long local_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long local_120;
  long local_118;
  long lStack_110;
  long local_108;
  long lStack_100;
  long lStack_f8;
  byte local_f0;
  byte bStack_ef;
  byte bStack_ee;
  undefined uStack_ed;
  undefined uStack_ec;
  undefined uStack_eb;
  undefined uStack_ea;
  undefined local_e9;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0 [7];
  undefined2 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  long local_40;
  long local_38;
  
  _ZN7uu_join26get_and_parse_field_number17hff9b1fd9eb95d74dE(&local_148,param_2,&DAT_0011b034);
  lVar3 = lStack_138;
  lVar6 = lStack_140;
  if ((int)local_148 == 1) {
LAB_0016da18:
    param_1[1] = lStack_140;
    param_1[2] = lStack_138;
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  _ZN7uu_join26get_and_parse_field_number17hff9b1fd9eb95d74dE(&local_148,param_2,&DAT_0011b035);
  local_68 = lStack_138;
  local_60 = lStack_140;
  if ((int)local_148 == 1) goto LAB_0016da18;
  _ZN7uu_join26get_and_parse_field_number17hff9b1fd9eb95d74dE(&local_148,param_2,&DAT_0011b036);
  local_78 = lStack_140;
  if ((int)local_148 == 1) {
    param_1[1] = lStack_140;
    param_1[2] = lStack_138;
LAB_0016da8e:
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  _ZN7uu_join20parse_print_settings17h08c07f537be3ed8cE(&local_148,param_2);
  lVar2 = lStack_140;
  if (local_148 != 0) {
    param_1[1] = local_148;
    param_1[2] = lStack_140;
    goto LAB_0016da8e;
  }
  local_70 = lStack_138;
  lStack_100 = 0;
  lStack_f8 = 0;
  local_e9 = 10;
  local_80 = 0x8000000000000003;
  local_118 = -0x7ffffffffffffffd;
  local_148 = 0;
  lStack_140 = 8;
  lStack_138 = 0;
  lStack_130 = 0;
  lStack_128 = 1;
  local_120 = 0;
  uStack_ed = 0;
  uStack_ec = 0;
  uStack_eb = 0;
  uStack_ea = 0;
  bStack_ee = (byte)lVar2 & 1;
  local_f0 = (byte)((ulong)lVar2 >> 8) & 1;
  bStack_ef = (byte)((ulong)lVar2 >> 0x10) & 1;
                    /* try { // try from 0016db36 to 0016dc87 has its CatchHandler @ 0016df38 */
  uStack_ed = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205108
              )(param_2,&DAT_0011b037,1);
  _ZN7uu_join16get_field_number17ha34d3b07c5e6ef90E(&local_d0,lVar6,lVar3,local_60,local_68);
  if (local_d0 == 0) {
    lStack_100 = lStack_c8;
    _ZN7uu_join16get_field_number17ha34d3b07c5e6ef90E(&local_d0,lVar6,lVar3,local_78,local_70);
    if (local_d0 == 0) {
      lStack_f8 = lStack_c8;
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h1403207e762e04afE
                (&local_d0,param_2);
      lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h6f546fe316e19f69E(&local_d0);
      if (lVar6 == 0) {
LAB_0016dc63:
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3493742de87d61ebE
                  (&local_d0,param_2,&DAT_0011b039);
        lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17haf5154e9dc375d47E
                          (&DAT_0011b039,&local_d0);
        if (lVar6 != 0) {
          uVar1 = *(undefined8 *)(lVar6 + 8);
          lVar6 = *(long *)(lVar6 + 0x10);
          cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h40620c7a8dc116e5E
                            (uVar1,lVar6,"autoBool");
          if (cVar4 == '\0') {
            local_e8 = 0;
            lStack_e0 = 8;
            local_d8 = 0;
            local_58 = 0x2c00000020;
            local_50 = 9;
            _ZN95__LT_core__str__pattern__MultiCharEqPattern_LT_C_GT__u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17hb973757f36a46f42E
                      (local_c0,&local_58,uVar1);
            local_d0 = 0;
            local_88 = 1;
            lStack_c8 = lVar6;
            while (lVar6 = _ZN4core3str4iter22SplitInternal_LT_P_GT_4next17h69235149bd53211fE
                                     (&local_d0), lVar6 != 0) {
                    /* try { // try from 0016dd4e to 0016dd91 has its CatchHandler @ 0016df16 */
              _ZN7uu_join4Spec5parse17hcfd2d4b38d6b0e96E(&local_58,lVar6);
              if ((int)local_58 == 1) {
                param_1[1] = CONCAT44(uStack_4c,local_50);
                param_1[2] = local_48;
                *param_1 = -0x8000000000000000;
                _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_join__Spec_GT__GT_17h4b770b22231041b0E
                          (local_e8,lStack_e0);
                goto LAB_0016dbcd;
              }
              local_38 = local_48;
              local_40 = CONCAT44(uStack_4c,local_50);
              _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hb860e44e68a88600E(&local_e8,&local_40);
            }
            local_148 = local_e8;
            lStack_140 = lStack_e0;
            lStack_138 = local_d8;
            _ZN4core3ptr57drop_in_place_LT_alloc__vec__Vec_LT_uu_join__Spec_GT__GT_17h4b770b22231041b0E
                      (0,8);
          }
          else {
            uStack_ec = 1;
          }
        }
                    /* try { // try from 0016ddb3 to 0016de83 has its CatchHandler @ 0016df38 */
        _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h3493742de87d61ebE
                  (&local_d0,param_2,&DAT_0011b03a);
        lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17haf5154e9dc375d47E
                          (&DAT_0011b03a,&local_d0);
        if (lVar6 != 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9c1c5d77c0020408E
                    (&local_d0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h3be9f3f5d0a417d3E(0,1);
          local_120 = local_c0[0];
          lStack_130 = local_d0;
          lStack_128 = lStack_c8;
        }
        cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205108
                )(param_2,&DAT_0011b03b,0xd);
        if (cVar4 != '\0') {
          uStack_ea = 1;
        }
        cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205108
                )(param_2,&DAT_0011b048,0xb);
        if (cVar4 != '\0') {
          uStack_ea = 2;
        }
        cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205108
                )(param_2,&DAT_0011b053,6);
        if (cVar4 != '\0') {
          uStack_eb = 1;
        }
        cVar4 = (*(code *)
                  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_00205108
                )(param_2,&DAT_0011b059,1);
        uVar5 = 10;
        if (cVar4 != '\0') {
          uVar5 = 0;
        }
        param_1[8] = local_108;
        param_1[9] = lStack_100;
        param_1[6] = local_118;
        param_1[7] = lStack_110;
        param_1[4] = lStack_128;
        param_1[5] = local_120;
        param_1[2] = lStack_138;
        param_1[3] = lStack_130;
        *param_1 = local_148;
        param_1[1] = lStack_140;
        param_1[10] = lStack_f8;
        *(uint *)(param_1 + 0xb) =
             CONCAT13(uStack_ed,CONCAT12(bStack_ee,CONCAT11(bStack_ef,local_f0)));
        *(ushort *)((long)param_1 + 0x5c) = CONCAT11(uStack_eb,uStack_ec);
        *(undefined *)((long)param_1 + 0x5e) = uStack_ea;
        *(undefined *)((long)param_1 + 0x5f) = uVar5;
        return param_1;
      }
      _ZN7uu_join15parse_separator17hf124353ffbd88396E
                (&local_d0,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
      lVar2 = local_c0[0];
      lVar3 = lStack_c8;
      lVar6 = local_d0;
      if (local_d0 != -0x7ffffffffffffffc) {
        _ZN4core3ptr40drop_in_place_LT_uu_join__SepSetting_GT_17hf227694797c64f57E
                  (local_80,lStack_110);
        local_118 = lVar6;
        lStack_110 = lVar3;
        local_108 = lVar2;
        goto LAB_0016dc63;
      }
      param_1[1] = lStack_c8;
      param_1[2] = local_c0[0];
      *param_1 = -0x8000000000000000;
      goto LAB_0016dbcd;
    }
  }
  param_1[1] = local_d0;
  param_1[2] = lStack_c8;
  *param_1 = -0x8000000000000000;
LAB_0016dbcd:
  _ZN4core3ptr38drop_in_place_LT_uu_join__Settings_GT_17hb8da50140634f9f1E(&local_148);
  return param_1;
}