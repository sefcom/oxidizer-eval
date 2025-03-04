void _ZN8uu_touch10parse_date17h59fdcf28d83a7f45E
               (undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  ulong uVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64 [3];
  int local_58 [3];
  undefined4 local_4c;
  undefined8 local_48;
  undefined local_40 [16];
  
  _ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hd1f2c37615fc2a8cE
            (local_64,param_3,param_4,&DAT_001752c8,0x14);
  if (local_64[0] == 0) {
    local_c0 = &DAT_001752dc;
    local_b8 = (undefined *)0x11;
    local_b0 = &DAT_001752ed;
    local_a8 = 0x14;
    local_a0 = &DAT_00175301;
    local_98 = 0xe;
    local_90 = &DAT_0017530f;
    local_88 = 0x11;
    local_80 = 0;
    local_78 = 4;
    local_70 = param_2;
    do {
                    /* try { // try from 002c3460 to 002c347e has its CatchHandler @ 002c3644 */
      auVar5 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h72940ebfc6d6072eE
                         (&local_c0);
      if (auVar5._0_8_ == 0) {
        _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_4_usize_GT__GT_17he66c702aa3ce8ef4E
                  (&local_c0);
        uVar1 = _ZN6chrono5naive4date9NaiveDate14parse_from_str17hb11b16b6a593980dE
                          (param_3,param_4,&DAT_00166f40,8);
        if ((uVar1 & 1) == 0) {
          local_4c = (undefined4)(uVar1 >> 0x20);
          local_48 = 0;
          _ZN73__LT_chrono__offset__local__Local_u20_as_u20_chrono__offset__TimeZone_GT_26offset_from_local_datetime17h0fa0613822fc0925E
                    (local_40,1,&local_4c);
          _ZN6chrono6offset20LocalResult_LT_T_GT_8and_then17h38ad213f398289fdE
                    (&local_c0,local_40,&local_4c);
          _ZN6chrono6offset20LocalResult_LT_T_GT_6unwrap17h8b21848d5a0bbe28E
                    (local_40,&local_c0,&PTR_DAT_00410ee8);
          auVar6 = _ZN8uu_touch20datetime_to_filetime17hee2fe932dd2f3a25E(local_40);
          goto LAB_002c33bc;
        }
        local_b8 = param_3 + param_4;
        local_c0 = param_3;
        pcVar2 = (char *)_ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3fb6acca9c1eba45E
                                   (&local_c0);
        if ((pcVar2 != (char *)0x0) && (*pcVar2 == '@')) {
          lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                            (1,param_3,param_4);
          if (lVar3 == 0) {
            uVar4 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                              (param_3,param_4,1,param_4,&PTR_DAT_00410f00);
                    /* catch() { ... } // from try @ 002c3460 with catch @ 002c3644 */
                    /* try { // try from 002c3647 to 002c3650 has its CatchHandler @ 002c3659 */
            _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_4_usize_GT__GT_17he66c702aa3ce8ef4E
                      (&local_c0);
            _Unwind_Resume(uVar4);
            return;
          }
          _ZN4core3num60__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_i64_GT_8from_str17hb0cdd6b069f41ab1E
                    (&local_c0,lVar3);
          if ((char)local_c0 == '\0') {
            param_1[1] = local_b8;
            *(undefined4 *)(param_1 + 2) = 0;
            goto LAB_002c33c3;
          }
        }
        _ZN14parse_datetime22parse_datetime_at_date17h00767a45bcedb78eE
                  (&local_c0,local_70,param_3,param_4);
        if (local_c0 == (undefined *)0x8000000000000002) {
          auVar6 = _ZN8uu_touch20datetime_to_filetime17h45fb62f820aa2d2dE(&local_b8);
          *(undefined (*) [12])(param_1 + 1) = auVar6;
          *param_1 = 0x8000000000000004;
          _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17h4dc4571e2e7b5171E
                    (&local_c0);
          return;
        }
        _ZN4core3ptr154drop_in_place_LT_core__result__Result_LT_chrono__datetime__DateTime_LT_chrono__offset__fixed__FixedOffset_GT__C_parse_datetime__ParseDateTimeError_GT__GT_17h4dc4571e2e7b5171E
                  (&local_c0);
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he7405723912f7c0bE
                  (param_1 + 1,param_3,param_4);
        *param_1 = 0x8000000000000000;
        return;
      }
      _ZN6chrono5naive8datetime13NaiveDateTime14parse_from_str17hd1f2c37615fc2a8cE
                (local_58,param_3,param_4,auVar5._0_8_,auVar5._8_8_);
    } while (local_58[0] == 0);
    auVar6 = _ZN8uu_touch20datetime_to_filetime17h06ea8034382622dbE(local_58);
    *(undefined (*) [12])(param_1 + 1) = auVar6;
    *param_1 = 0x8000000000000004;
    _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_4_usize_GT__GT_17he66c702aa3ce8ef4E
              (&local_c0);
  }
  else {
    auVar6 = _ZN8uu_touch20datetime_to_filetime17h06ea8034382622dbE(local_64);
LAB_002c33bc:
    *(undefined (*) [12])(param_1 + 1) = auVar6;
LAB_002c33c3:
    *param_1 = 0x8000000000000004;
  }
  return;
}