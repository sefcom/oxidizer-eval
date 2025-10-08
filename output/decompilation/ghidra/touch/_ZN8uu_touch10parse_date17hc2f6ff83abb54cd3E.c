void _ZN8uu_touch10parse_date17hc2f6ff83abb54cd3E
               (undefined8 *param_1,undefined8 param_2,char *param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  int *piVar7;
  char *pcVar8;
  undefined auVar9 [16];
  undefined auVar10 [12];
  int iStack_144;
  long lStack_140;
  undefined8 uStack_138;
  int *piStack_130;
  undefined *puStack_128;
  long *plStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  int **ppiStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64 [3];
  int local_58 [3];
  undefined4 local_4c;
  undefined8 local_48;
  undefined local_40 [16];
  
  pcStack_d0 = (code *)0x23aafb;
  (*(code *)
    PTR__ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hdc760f858f0e9f44E_003aa0d8)
            (local_64,param_3,param_4,
             "%a %b %e %H:%M:%S %Y%Y-%m-%d %H:%M:%SZ%Y-%m-%dT%H:%M:%SZ%Y-%m-%dT%H:%M:%S",0x14);
  if (local_64[0] == 0) {
    local_c0 = 0;
    local_b8 = 4;
    local_b0 = "%Y-%m-%d %H:%M:%S";
    local_a8 = 0x11;
    local_a0 = "%Y-%m-%d %H:%M:%S.%f";
    local_98 = 0x14;
    local_90 = "%Y-%m-%d %H:%M";
    local_88 = 0xe;
    local_80 = "%Y-%m-%d %H:%M %z%Y%m%d%H%MUTC%z%Y%m%d%H%M %z%Y%m%d%H%MZ%z";
    local_78 = 0x11;
    pcStack_d0 = (code *)0x23abac;
    local_70 = param_2;
    auVar9 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h699246570341f61aE
                       (&local_c0,4);
    puVar2 = 
    PTR__ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hdc760f858f0e9f44E_003aa0d8;
    if (auVar9._0_8_ != 0) {
      do {
        pcStack_d0 = (code *)0x23abdf;
        (*(code *)puVar2)(local_58,param_3,param_4,auVar9._0_8_,auVar9._8_8_);
        if (local_58[0] != 0) {
          piVar7 = local_58;
          goto LAB_0023ab07;
        }
        pcStack_d0 = (code *)0x23abf7;
        auVar9 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h699246570341f61aE
                           (&local_c0,4);
      } while (auVar9._0_8_ != 0);
    }
    pcStack_d0 = (code *)0x23ac17;
    uVar3 = (*(code *)
              PTR__ZN6chrono5naive4date9NaiveDate14parse_from_str17hf55d55429065828fE_003aa0f8)
                      (param_3,param_4,&DAT_00152190,8);
    if ((uVar3 & 1) != 0) {
      if ((param_4 == 0) || (*param_3 != '@')) {
LAB_0023ac5b:
        pcStack_d0 = (code *)0x23ac7a;
        _ZN14parse_datetime22parse_datetime_at_date17hce30a59dcd90fe25E
                  (&local_c0,local_70,param_3,param_4);
        if (local_c0 == -0x7ffffffffffffffe) {
          pcStack_d0 = (code *)0x23ac93;
          auVar10 = _ZN8uu_touch20datetime_to_filetime17h5b8a0eb5c393ab6aE(&local_b8);
          *(undefined (*) [12])(param_1 + 1) = auVar10;
          *param_1 = 0x8000000000000004;
          pcStack_d0 = (code *)0x23aca7;
          _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17h7c96216ea4c4b575E
                    (&local_c0);
          return;
        }
        pcStack_d0 = (code *)0x23ad25;
        _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17h7c96216ea4c4b575E
                  (&local_c0);
        pcStack_d0 = (code *)0x23ad34;
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h443e6c10e45cdc42E
                  (param_1 + 1,param_3,param_4);
        *param_1 = 0x8000000000000000;
        return;
      }
      pcStack_d0 = (code *)0x23ac3a;
      lVar4 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                        (1,param_3,param_4);
      if (lVar4 == 0) {
        pcStack_d0 = _ZN8uu_touch15prepend_century17h599b7f098e7e4682E;
        lVar4 = param_4;
        pcVar8 = param_3;
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_003aa0b8)
                  (param_3,param_4,1,param_4,&PTR_s_src_uu_touch_src_touch_rs_00379ec0);
        lStack_140 = lVar4;
        uStack_138 = extraout_RDX;
        puStack_e0 = param_1;
        lStack_d8 = param_4;
        pcStack_d0 = (code *)param_3;
        lVar5 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                          (lVar4,extraout_RDX);
        if (lVar5 == 0) {
          (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_003aa0b8)
                    (lVar4,extraout_RDX,0,2,&PTR_s_src_uu_touch_src_touch_rs_00379ed8);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E(lVar5);
        if ((uVar3 & 1) == 0) {
          iStack_144 = ((uint)(uVar3 >> 0x20) < 0x45) + 0x13;
          piStack_130 = &iStack_144;
          puStack_128 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_003a9e88
          ;
          plStack_120 = &lStack_140;
          pcStack_118 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h18af96482be5ae0fE;
          puStack_110 = &DAT_001574b0;
          uStack_108 = 2;
          uStack_f0 = 0;
          ppiStack_100 = &piStack_130;
          uStack_f8 = 2;
          _ZN4core6option15Option_LT_T_GT_11map_or_else17h42b45f6f6f73b099E(pcVar8,&puStack_110);
        }
        else {
          uVar6 = _ZN8uu_touch15prepend_century28__u7b__u7b_closure_u7d__u7d_17hf8149f90ade8620dE
                            (lVar4,extraout_RDX);
          *(undefined8 *)(pcVar8 + 8) = uVar6;
          *(undefined ***)(pcVar8 + 0x10) =
               &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h05d1e2d078ddfe04E_00379e10
          ;
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8[4] = '\0';
          pcVar8[5] = '\0';
          pcVar8[6] = '\0';
          pcVar8[7] = -0x80;
        }
        return;
      }
      pcStack_d0 = (code *)0x23ac50;
      _ZN4core3num21__LT_impl_u20_i64_GT_16from_ascii_radix17h7589f30fc8392b2aE(&local_c0,lVar4);
      if ((char)local_c0 != '\0') goto LAB_0023ac5b;
      param_1[1] = local_b8;
      *(undefined4 *)(param_1 + 2) = 0;
      goto LAB_0023ab13;
    }
    local_4c = (undefined4)(uVar3 >> 0x20);
    local_48 = 0;
    pcStack_d0 = (code *)0x23acde;
    (*(code *)
      PTR__ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17hccb4fb7298479e9dE_003aa248
    )(local_40,1,&local_4c);
    pcStack_d0 = (code *)0x23acf1;
    _ZN6chrono6offset20LocalResult_LT_T_GT_8and_then17h5026d116032789f9E
              (&local_c0,local_40,&local_4c);
    pcStack_d0 = (code *)0x23ad04;
    _ZN6chrono6offset20LocalResult_LT_T_GT_6unwrap17h26556c708ce8fc3fE(local_40,&local_c0);
    pcStack_d0 = (code *)0x23ad0c;
    auVar10 = _ZN8uu_touch20datetime_to_filetime17h5b8a0eb5c393ab6aE(local_40);
  }
  else {
    piVar7 = local_64;
LAB_0023ab07:
    pcStack_d0 = (code *)0x23ab0c;
    auVar10 = _ZN8uu_touch20datetime_to_filetime17hd1f2dbebee5994f4E(piVar7);
  }
  *(undefined (*) [12])(param_1 + 1) = auVar10;
LAB_0023ab13:
  *param_1 = 0x8000000000000004;
  return;
}