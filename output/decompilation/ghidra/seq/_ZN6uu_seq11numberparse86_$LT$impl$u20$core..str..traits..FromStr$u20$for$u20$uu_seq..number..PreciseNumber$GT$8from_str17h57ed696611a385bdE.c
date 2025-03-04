undefined8 *
_ZN6uu_seq11numberparse86__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_uu_seq__number__PreciseNumber_GT_8from_str17h57ed696611a385bdE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_18trim_start_matches17hfd19a60dd809a602E
                     (param_2,param_3);
  uVar5 = auVar7._8_8_;
  uVar3 = auVar7._0_8_;
  local_40[0] = 0;
  uVar2 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(0x2b,local_40);
  cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h9cb9db4a84f1050bE
                    (uVar3,uVar5,uVar2,1);
  if ((cVar1 != '\0') &&
     (auVar7 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                         (1,uVar3,uVar5), auVar7._0_8_ == 0)) {
    uVar3 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                      (uVar3,uVar5,1,uVar5,&PTR_s_src_uu_seq_src_numberparse_rs_00243e10);
                    /* catch() { ... } // from try @ 001cc709 with catch @ 001cc801 */
                    /* try { // try from 001cc804 to 001cc80d has its CatchHandler @ 001cc816 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbf11645ab5eda60bE(local_40);
    puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
    return puVar4;
  }
  uVar3 = auVar7._8_8_;
  uVar2 = auVar7._0_8_;
  _ZN5alloc3str21__LT_impl_u20_str_GT_12to_lowercase17h8673807247540a26E(local_40,uVar2,uVar3);
                    /* try { // try from 001cc709 to 001cc727 has its CatchHandler @ 001cc801 */
  auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h1e180eda41b3ee27E(local_38,local_30);
  if ((auVar7._0_8_ == 1) && (auVar7._8_8_ < 2)) {
    _ZN6uu_seq11numberparse17parse_hexadecimal17ha820262dcdf3b692E(param_1,uVar2,uVar3);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbf11645ab5eda60bE(local_40);
  }
  else {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hbf11645ab5eda60bE(local_40);
    auVar7 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h90335edd368651cbE(uVar2,uVar3,0x2e);
    uVar6 = auVar7._8_8_;
    auVar8 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h90335edd368651cbE(uVar2,uVar3,0x65);
    if (auVar7._0_8_ == 0) {
      if (auVar8._0_8_ == 0) {
        _ZN6uu_seq11numberparse28parse_no_decimal_no_exponent17h94839c74700e929cE
                  (param_1,uVar2,uVar3);
      }
      else {
        _ZN6uu_seq11numberparse25parse_exponent_no_decimal17hd2950fa793267dc0E();
      }
    }
    else if (auVar8._0_8_ == 0) {
      _ZN6uu_seq11numberparse25parse_decimal_no_exponent17hf3af1526d793a9d8E
                (param_1,uVar2,uVar3,uVar6);
    }
    else if (uVar6 < auVar8._8_8_) {
      _ZN6uu_seq11numberparse26parse_decimal_and_exponent17hfdc1c6342c162095E
                (param_1,uVar2,uVar3,uVar6);
    }
    else {
      *(undefined *)(param_1 + 1) = 0;
      *param_1 = 0x8000000000000004;
    }
  }
  return param_1;
}