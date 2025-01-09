undefined8 * __rustcall uu_touch::parse_timestamp(undefined8 *param_1,code *param_2,code **param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined auVar8 [12];
  int local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  code ***local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  code **ppcStack_108;
  code *local_100;
  code **local_e8;
  code *pcStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  code *local_b8;
  code *local_b0;
  code **ppcStack_a8;
  undefined local_a0;
  code **local_98;
  code *pcStack_90;
  undefined8 local_88;
  code *local_80;
  code **ppcStack_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_50;
  uint uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 *local_40;
  int local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  
  local_80 = param_2;
  ppcStack_78 = param_3;
  uVar4 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                    (param_2,param_2 + (long)param_3);
  switch(uVar4) {
  case 8:
    chrono::offset::local::Local::now(&local_148);
    chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_118,&local_148,uStack_13c)
    ;
    local_b8 = (code *)CONCAT44(local_b8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_b8;
    uStack_110 = core::fmt::num::imp::_<impl_core::fmt::Display_for_i32>::fmt;
    ppcStack_108 = &local_80;
    local_100 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x16c700;
    uStack_140 = 2;
    local_130 = 2;
    break;
  default:
    local_b8 = (code *)0x0;
    local_a0 = 1;
    local_e8 = &local_b8;
    pcStack_e0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_148 = 0x410f28;
    uStack_144 = 0;
    uStack_140 = 1;
    uStack_13c = 0;
    local_128 = 0;
    local_138 = &local_e8;
    local_130 = 1;
    local_b0 = param_2;
    ppcStack_a8 = param_3;
    core::option::Option<T>::map_or_else(&local_118,&local_148);
    local_100 = (code *)CONCAT44(local_100._4_4_,1);
    uVar4 = ::alloc::boxed::Box<T>::new(&local_118);
    param_1[1] = uVar4;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00410e78;
    *param_1 = 1;
    return param_1;
  case 10:
    local_118 = &local_80;
    uStack_110 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x410f18;
    uStack_140 = 1;
    local_130 = 1;
    break;
  case 0xb:
    chrono::offset::local::Local::now(&local_148);
    chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_118,&local_148,uStack_13c)
    ;
    local_b8 = (code *)CONCAT44(local_b8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_b8;
    uStack_110 = core::fmt::num::imp::_<impl_core::fmt::Display_for_i32>::fmt;
    ppcStack_108 = &local_80;
    local_100 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x16c700;
    uStack_140 = 2;
    local_130 = 2;
    goto LAB_002c3957;
  case 0xc:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_98,param_2,param_3);
    goto LAB_002c38ff;
  case 0xd:
    local_118 = &local_80;
    uStack_110 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x410f18;
    uStack_140 = 1;
    local_130 = 1;
LAB_002c3957:
    local_138 = (code ***)&local_118;
    uStack_13c = 0;
    uStack_144 = 0;
    local_128 = 0;
    core::option::Option<T>::map_or_else(&local_98,&local_148);
LAB_002c3967:
    uVar4 = 0xd;
    puVar6 = &DAT_0017538a;
    goto LAB_002c3974;
  case 0xf:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_98,param_2,param_3);
    goto LAB_002c3967;
  }
  local_138 = (code ***)&local_118;
  uStack_13c = 0;
  uStack_144 = 0;
  local_128 = 0;
  core::option::Option<T>::map_or_else(&local_98,&local_148);
LAB_002c38ff:
  uVar4 = 10;
  puVar6 = &DAT_00175397;
LAB_002c3974:
  local_d8 = local_88;
  pcStack_e0 = pcStack_90;
                    /* try { // try from 002c3993 to 002c3c83 has its CatchHandler @ 002c3cde */
  chrono::naive::datetime::NaiveDateTime::parse_from_str
            (&local_148,pcStack_90,local_88,puVar6,uVar4);
  if (local_148 == 0) {
    uVar4 = parse_timestamp::___closure__(pcStack_e0,local_d8);
  }
  else {
    local_68 = CONCAT44(uStack_140,uStack_144);
    local_6c = local_148;
    _<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime
              (&local_148,1,&local_6c);
    chrono::offset::LocalResult<T>::and_then(&local_118,&local_148,&local_6c);
    if ((int)local_118 == 0) {
      local_c8 = local_118._4_4_;
      uStack_c4 = (undefined4)uStack_110;
      uStack_c0 = uStack_110._4_4_;
      uStack_bc = ppcStack_108._0_4_;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset
                (&local_148,&local_c8,(ulong)ppcStack_108 & 0xffffffff);
      uVar3 = uStack_144 * -0x11111111 + 0xeeeeeeeb;
      if (((uVar3 >> 2 | uVar3 * 0x40000000) < 0x4444444) &&
         (cVar2 = core::slice::_<impl[T]>::ends_with(pcStack_e0,local_d8,&DAT_00175366,3),
         cVar2 != '\0')) {
        _<chrono::datetime::DateTime<Tz>as_core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>
        ::add_assign(&local_c8);
      }
      chrono::datetime::DateTime<Tz>::checked_add_signed(&local_148,&local_c8);
      if (local_148 == 0) {
        ppuVar7 = &PTR_DAT_00410f48;
        puVar6 = &DAT_00174e0c;
LAB_002c3cd3:
                    /* try { // try from 002c3cd3 to 002c3cdd has its CatchHandler @ 002c3cde */
        uVar4 = core::option::expect_failed(puVar6,0x21,ppuVar7);
                    /* catch() { ... } // from try @ 002c3993 with catch @ 002c3cde
                       catch() { ... } // from try @ 002c3cd3 with catch @ 002c3cde */
                    /* try { // try from 002c3ce1 to 002c3cea has its CatchHandler @ 002c3cf3 */
        core::ptr::drop_in_place<alloc::string::String>(&local_e8);
        puVar5 = (undefined8 *)_Unwind_Resume(uVar4);
        return puVar5;
      }
      local_118 = (code **)CONCAT44(uStack_144,local_148);
      uStack_110 = (code *)CONCAT44(uStack_13c,uStack_140);
      chrono::datetime::DateTime<Tz>::checked_sub_signed(&local_148,&local_118);
      uVar1 = uStack_13c;
      if (local_148 == 0) {
        ppuVar7 = &PTR_DAT_00410f60;
        puVar6 = &DAT_00175369;
        goto LAB_002c3cd3;
      }
      local_58 = uStack_140;
      local_60 = CONCAT44(uStack_144,local_148);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_148,&local_c8,uStack_bc)
      ;
      uVar3 = uStack_144;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_148,&local_60,uVar1);
      if (uVar3 / 0xe10 == uStack_144 / 0xe10) {
        auVar8 = datetime_to_filetime(&local_c8);
        *(undefined (*) [12])(param_1 + 1) = auVar8;
        *param_1 = 0;
        goto LAB_002c3c9a;
      }
      local_118 = (code **)0x0;
      uStack_110 = local_80;
      ppcStack_108 = ppcStack_78;
      local_100 = (code *)CONCAT71(local_100._1_7_,1);
      local_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_148 = 0x410f28;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = (code ***)&local_b8;
      local_130 = 1;
      local_b8 = (code *)&local_118;
      core::option::Option<T>::map_or_else(&local_38,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_38;
      uStack_144 = uStack_34;
      uStack_140 = uStack_30;
      uStack_13c = uStack_2c;
      local_138 = (code ***)local_28;
      uVar4 = ::alloc::boxed::Box<T>::new(&local_148);
    }
    else {
      local_b8 = (code *)0x0;
      local_b0 = pcStack_e0;
      ppcStack_a8 = (code **)local_d8;
      local_a0 = 1;
      local_98 = &local_b8;
      pcStack_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_148 = 0x410f38;
      uStack_144 = 0;
      uStack_140 = 1;
      uStack_13c = 0;
      local_128 = 0;
      local_138 = &local_98;
      local_130 = 1;
      core::option::Option<T>::map_or_else(&local_50,&local_148);
      local_130 = CONCAT44(local_130._4_4_,1);
      local_148 = local_50;
      uStack_144 = uStack_4c;
      uStack_140 = uStack_48;
      uStack_13c = uStack_44;
      local_138 = (code ***)local_40;
      uVar4 = ::alloc::boxed::Box<T>::new(&local_148);
    }
  }
  param_1[1] = uVar4;
  param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00410e78;
  *param_1 = 1;
LAB_002c3c9a:
  core::ptr::drop_in_place<alloc::string::String>(&local_e8);
  return param_1;
}