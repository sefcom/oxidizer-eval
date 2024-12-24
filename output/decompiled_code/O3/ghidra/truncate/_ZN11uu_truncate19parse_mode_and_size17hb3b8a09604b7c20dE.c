void __rustcall
uu_truncate::parse_mode_and_size(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  
  auVar5 = core::str::_<impl_str>::trim_matches(param_2,param_3);
  lVar3 = auVar5._8_8_;
  lVar2 = auVar5._0_8_;
  local_60 = lVar3 + lVar2;
  local_68 = lVar2;
  iVar1 = core::str::validations::next_code_point(&local_68);
  if (iVar1 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_38,lVar2,lVar3);
    *param_1 = 1;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    param_1[3] = local_28;
  }
  else {
    if ((((uint)extraout_RDX < 0x3f) && ((0x5000a82000000000U >> (extraout_RDX & 0x3f) & 1) != 0))
       && (auVar5 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                    ::get(lVar2,lVar3), auVar5._0_8_ == 0)) {
      core::str::slice_error_fail
                (lVar2,lVar3,1,lVar3,&PTR_s_src_uu_truncate_src_truncate_rs_00216d88);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uucore::parser::parse_size::parse_size_u64(&local_58,auVar5._0_8_,auVar5._8_8_);
    pcVar4 = TruncateMode::Absolute;
    switch((uint)extraout_RDX) {
    case 0x25:
      pcVar4 = TruncateMode::RoundUp;
      break;
    case 0x2b:
      pcVar4 = TruncateMode::Extend;
      break;
    case 0x2d:
      pcVar4 = TruncateMode::Reduce;
      break;
    case 0x2f:
      pcVar4 = TruncateMode::RoundDown;
    default:
      break;
    case 0x3c:
      pcVar4 = TruncateMode::AtMost;
      break;
    case 0x3e:
      pcVar4 = TruncateMode::AtLeast;
    }
    if (local_58 == 3) {
      auVar5 = core::ops::function::FnOnce::call_once(pcVar4,uStack_50);
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