void _ZN11uu_truncate19parse_mode_and_size17h9caa4c91beef10d4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  long local_68;
  long local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h16e7859628600181E(param_2,param_3);
  lVar3 = auVar4._8_8_;
  lVar1 = auVar4._0_8_;
  local_60 = lVar3 + lVar1;
  local_68 = lVar1;
  auVar5 = _ZN4core3str11validations15next_code_point17h3ece29adbd85c47aE(&local_68);
  if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hc324d0392f7be5deE
              (&local_38,lVar1,lVar3);
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    param_1[3] = local_28;
  }
  else {
    if (((auVar5._8_4_ < 0x3f) && ((0x5000a82000000000U >> (auVar5._8_8_ & 0x3f) & 1) != 0)) &&
       (auVar4 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                           (lVar1,lVar3), auVar4._0_8_ == 0)) {
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001ea1d8)
                (lVar1,lVar3,1,lVar3,&PTR_s_src_uu_truncate_src_truncate_rs_001e4130);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (*(code *)
      PTR__ZN6uucore8features6parser10parse_size14parse_size_u6417hcabf5090504a6d94E_001ea1d0)
              (&local_58,auVar4._0_8_,auVar4._8_8_);
    pcVar2 = _ZN11uu_truncate12TruncateMode8Absolute17haa52d8e79eacf4d9E;
    switch(auVar5._8_4_) {
    case 0x25:
      pcVar2 = _ZN11uu_truncate12TruncateMode7RoundUp17h3665611802199c24E;
      break;
    case 0x2b:
      pcVar2 = _ZN11uu_truncate12TruncateMode6Extend17h02181f0372cbefa4E;
      break;
    case 0x2d:
      pcVar2 = _ZN11uu_truncate12TruncateMode6Reduce17ha51feeb989b1f368E;
      break;
    case 0x2f:
      pcVar2 = _ZN11uu_truncate12TruncateMode9RoundDown17h60d8b907aa2e6a29E;
    default:
      break;
    case 0x3c:
      pcVar2 = _ZN11uu_truncate12TruncateMode6AtMost17hf86653d9dfa9ec56E;
      break;
    case 0x3e:
      pcVar2 = _ZN11uu_truncate12TruncateMode7AtLeast17hdca70991c1d34f87E;
    }
    if (local_58 == 4) {
      auVar4 = (*pcVar2)(uStack_50);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 4;
    }
    else {
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      *param_1 = CONCAT44(uStack_54,local_58);
      param_1[1] = uStack_50;
    }
  }
  return;
}