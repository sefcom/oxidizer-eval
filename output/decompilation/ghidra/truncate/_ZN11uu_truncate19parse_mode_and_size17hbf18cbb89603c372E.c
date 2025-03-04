void _ZN11uu_truncate19parse_mode_and_size17hbf18cbb89603c372E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong extraout_RDX;
  code *pcVar4;
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
  
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17ha02f30b080304904E(param_2,param_3);
  lVar3 = auVar5._8_8_;
  lVar2 = auVar5._0_8_;
  local_60 = lVar3 + lVar2;
  local_68 = lVar2;
  iVar1 = _ZN4core3str11validations15next_code_point17h369b2919962b1982E(&local_68);
  if (iVar1 == 0) {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h40f585cb9c895814E
              (&local_38,lVar2,lVar3);
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    param_1[3] = local_28;
  }
  else {
    if ((((uint)extraout_RDX < 0x3f) && ((0x5000a82000000000U >> (extraout_RDX & 0x3f) & 1) != 0))
       && (auVar5 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                              (lVar2,lVar3), auVar5._0_8_ == 0)) {
      _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                (lVar2,lVar3,1,lVar3,&PTR_s_src_uu_truncate_src_truncate_rs_00216758);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    _ZN6uucore6parser10parse_size14parse_size_u6417h6825c2c9656edafaE
              (&local_58,auVar5._0_8_,auVar5._8_8_);
    pcVar4 = _ZN11uu_truncate12TruncateMode8Absolute17h347de2dbbee0cf00E;
    switch((uint)extraout_RDX) {
    case 0x25:
      pcVar4 = _ZN11uu_truncate12TruncateMode7RoundUp17h3f2c9049b3c57539E;
      break;
    case 0x2b:
      pcVar4 = _ZN11uu_truncate12TruncateMode6Extend17h27ea7d0ae1c2c8a5E;
      break;
    case 0x2d:
      pcVar4 = _ZN11uu_truncate12TruncateMode6Reduce17h771393dc84ef47d0E;
      break;
    case 0x2f:
      pcVar4 = _ZN11uu_truncate12TruncateMode9RoundDown17h0cc310891f82e44aE;
    default:
      break;
    case 0x3c:
      pcVar4 = _ZN11uu_truncate12TruncateMode6AtMost17hdf07773400549dc0E;
      break;
    case 0x3e:
      pcVar4 = _ZN11uu_truncate12TruncateMode7AtLeast17h331a3778f5ffdb1cE;
    }
    if (local_58 == 3) {
      auVar5 = _ZN4core3ops8function6FnOnce9call_once17h6b1857dc3b9e4b9aE(pcVar4,uStack_50);
      *(undefined (*) [16])(param_1 + 1) = auVar5;
      *param_1 = 3;
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