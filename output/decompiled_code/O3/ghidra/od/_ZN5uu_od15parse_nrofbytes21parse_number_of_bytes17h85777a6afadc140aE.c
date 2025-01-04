undefined8 * __rustcall
uu_od::parse_nrofbytes::parse_number_of_bytes(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined auVar11 [16];
  undefined local_61;
  undefined8 *local_60;
  undefined4 local_54;
  undefined4 local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  uVar9 = 2;
  cVar4 = core::slice::_<impl[T]>::starts_with(param_2,param_3,"0x",2);
  uVar8 = 0x10;
  bVar3 = true;
  if (cVar4 == '\0') {
    uVar9 = 2;
    cVar4 = core::slice::_<impl[T]>::starts_with(param_2,param_3,"0X",2);
    if (cVar4 == '\0') {
      local_50 = 0;
      auVar11 = core::char::methods::encode_utf8_raw(0x30,&local_50);
      cVar4 = core::slice::_<impl[T]>::starts_with(param_2,param_3,auVar11._0_8_,auVar11._8_8_);
      if (cVar4 == '\0') {
        lVar6 = core::str::traits::
                _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
                get(param_2,param_3);
        if (lVar6 != 0) {
          uucore::parser::parse_size::parse_size_u64(param_1,lVar6);
          return param_1;
        }
        goto LAB_001d7c39;
      }
      uVar8 = 8;
      uVar9 = 0;
      bVar3 = false;
    }
  }
  local_38 = param_2 + param_3;
  local_60 = param_1;
  local_40 = param_2;
  iVar5 = core::str::validations::next_code_point_reverse(&local_40);
  uVar10 = 1;
  lVar6 = param_3;
  local_54 = uVar8;
  if (iVar5 == 0) {
switchD_001d7a17_caseD_43:
  }
  else {
    switch(extraout_EDX) {
    case 0x42:
      if (!bVar3) {
        iVar5 = core::str::validations::next_code_point_reverse(&local_40);
        puVar7 = local_60;
        if ((iVar5 == 0) || (0x28 < extraout_EDX_00 - 0x45U)) {
switchD_001d7ac1_caseD_46:
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_60 + 1,param_2,param_3);
          *puVar7 = 1;
          return puVar7;
        }
        lVar6 = param_3 + -2;
        switch(extraout_EDX_00) {
        case 0x45:
          uVar10 = 1000000000000000000;
          break;
        default:
          goto switchD_001d7ac1_caseD_46;
        case 0x47:
          uVar10 = 1000000000;
          break;
        case 0x4b:
        case 0x6b:
          uVar10 = 1000;
          break;
        case 0x4d:
        case 0x6d:
          uVar10 = 1000000;
          break;
        case 0x50:
          uVar10 = 1000000000000000;
          break;
        case 0x54:
          uVar10 = 1000000000000;
        }
      }
      break;
    default:
      goto switchD_001d7a17_caseD_43;
    case 0x45:
      lVar6 = param_3 - (ulong)(bVar3 ^ 1);
      uVar10 = 0x1000000000000000;
      if (bVar3 != false) {
        uVar10 = 1;
      }
      break;
    case 0x47:
      uVar10 = 0x40000000;
      lVar6 = param_3 + -1;
      break;
    case 0x4b:
    case 0x6b:
      uVar10 = 0x400;
      lVar6 = param_3 + -1;
      break;
    case 0x4d:
    case 0x6d:
      uVar10 = 0x100000;
      lVar6 = param_3 + -1;
      break;
    case 0x50:
      uVar10 = 0x4000000000000;
      lVar6 = param_3 + -1;
      break;
    case 0x54:
      uVar10 = 0x10000000000;
      lVar6 = param_3 + -1;
      break;
    case 0x62:
      lVar6 = param_3 - (ulong)(bVar3 ^ 1);
      uVar10 = 0x200;
      if (bVar3 != false) {
        uVar10 = 1;
      }
    }
  }
  auVar11 = core::str::traits::
            _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                      (uVar9,lVar6,param_2,param_3);
  if (auVar11._0_8_ != 0) {
    core::num::_<impl_u64>::from_str_radix(&local_50,auVar11._0_8_,auVar11._8_8_,local_54);
    puVar7 = local_60;
    if ((char)local_50 == '\0') {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar10;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_48;
      if (SUB168(auVar11 * auVar2,8) == 0) {
        local_60[1] = SUB168(auVar11 * auVar2,0);
        uVar9 = 3;
      }
      else {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_60 + 1,param_2,param_3);
        uVar9 = 2;
      }
      *puVar7 = uVar9;
    }
    else {
      local_61 = local_50._1_1_;
      _<T_as_alloc::string::ToString>::to_string(local_60 + 1,&local_61);
      *puVar7 = 1;
    }
    return puVar7;
  }
  core::str::slice_error_fail
            (param_2,param_3,uVar9,lVar6,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_00243340);
LAB_001d7c39:
  core::str::slice_error_fail
            (param_2,param_3,0,param_3,&PTR_s_src_uu_od_src_parse_nrofbytes_rs_00243328);
  pcVar1 = (code *)swi(3);
  puVar7 = (undefined8 *)(*pcVar1)();
  return puVar7;
}