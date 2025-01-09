void __rustcall
uu_numfmt::format::remove_suffix
          (undefined *param_1,undefined8 *param_2,byte param_3,byte param_4,byte param_5)

{
  byte bVar1;
  undefined ***pppuVar2;
  byte local_79;
  undefined *local_78;
  undefined **local_70;
  code *local_68;
  undefined ***local_60;
  code *local_58;
  undefined ***local_50;
  code *local_48;
  undefined **local_40;
  ulong local_38;
  undefined **local_30;
  code *local_28;
  undefined ***local_20;
  code *local_18;
  undefined8 local_10;
  
  bVar1 = param_5 - 2;
  local_78 = param_1;
  if (param_4 != 2) {
    switch(bVar1) {
    case 0:
      if ((param_4 & 1) != 0) goto LAB_001c38e8;
      break;
    case 1:
      if ((param_4 & 1) != 0) {
LAB_001c38d0:
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec
                  (param_2,"This suffix is unsupported for specified unit",0x2d);
        return;
      }
      break;
    default:
      if ((param_4 & 1) != 0) {
        if ((param_5 & 1) == 0) goto LAB_001c38d0;
LAB_001c38e8:
                    /* WARNING: Could not recover jumptable at 0x001c38fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00122e74 + *(int *)(&DAT_00122e74 + (ulong)param_3 * 4)))();
        return;
      }
      if ((param_5 & 1) == 0) goto LAB_001c38e8;
      local_40 = (undefined **)CONCAT71(local_40._1_7_,param_3);
      local_20 = &local_40;
      local_18 = _<uu_numfmt::units::RawSuffix_as_core::fmt::Debug>::fmt;
      local_70 = &PTR_s_missing__i__suffix_in_input____00235b18;
      local_68 = (code *)0x3;
      local_58 = (code *)0x2;
      goto LAB_001c3747;
    case 3:
      local_40 = (undefined **)0x1;
      if ((param_4 & 1) != 0) {
        local_40 = (undefined **)0x123024;
      }
      local_38 = (ulong)(param_4 & 1);
      local_70 = &local_78;
      local_68 = core::fmt::float::_<impl_core::fmt::Display_for_f64>::fmt;
      local_60 = (undefined ***)&local_79;
      local_58 = _<uu_numfmt::units::RawSuffix_as_core::fmt::Debug>::fmt;
      local_50 = &local_40;
      local_48 = _<&T_as_core::fmt::Display>::fmt;
      local_30 = &PTR_s_rejecting_suffix_in_input______c_00235b48;
      local_28 = (code *)0x4;
      local_10 = 0;
      local_20 = &local_70;
      local_18 = (code *)0x3;
      pppuVar2 = &local_30;
      local_79 = param_3;
      goto LAB_001c3898;
    }
                    /* WARNING: Could not recover jumptable at 0x001c38bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00122e94 + *(int *)(&DAT_00122e94 + (ulong)param_3 * 4)))();
    return;
  }
  if (((param_5 & 1) == 0) || (bVar1 < 4 && bVar1 != 2)) {
    param_2[1] = param_1;
    *param_2 = 0x8000000000000000;
    return;
  }
  local_70 = &PTR_s_missing__i__suffix_in_input____00235af8;
  local_68 = (code *)0x2;
  local_58 = (code *)0x1;
LAB_001c3747:
  local_30 = &local_78;
  local_60 = &local_30;
  local_28 = core::fmt::float::_<impl_core::fmt::Display_for_f64>::fmt;
  local_50 = (undefined ***)0x0;
  pppuVar2 = &local_70;
LAB_001c3898:
  core::option::Option<T>::map_or_else(param_2,pppuVar2);
  return;
}