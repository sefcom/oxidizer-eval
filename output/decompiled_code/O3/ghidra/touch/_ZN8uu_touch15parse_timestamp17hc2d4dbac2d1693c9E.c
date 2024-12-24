undefined8 * __rustcall uu_touch::parse_timestamp(undefined8 *param_1,code *param_2,code **param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
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
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code **local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
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
  uVar5 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::count
                    (param_2,param_2 + (long)param_3);
  switch(uVar5) {
  case 8:
    chrono::offset::local::Local::now(&local_148);
    chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_118,&local_148,uStack_13c)
    ;
    local_b8 = (code *)CONCAT44(local_b8._4_4_,(int)local_118 >> 0xd);
    local_118 = &local_b8;
    uStack_110 = core::fmt::num::imp::_<impl_core::fmt::Display_for_i32>::fmt;
    ppcStack_108 = &local_80;
    local_100 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x16c850;
    uStack_140 = 2;
    local_130 = 2;
    break;
  default:
    local_b8 = (code *)0x0;
    local_a0 = 1;
    local_d8 = &local_b8;
    pcStack_d0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_148 = 0x411200;
    uStack_144 = 0;
    uStack_140 = 1;
    uStack_13c = 0;
    local_128 = 0;
    local_138 = &local_d8;
    local_130 = 1;
    local_b0 = param_2;
    ppcStack_a8 = param_3;
    core::option::Option<T>::map_or_else(&local_118,&local_148);
    local_100 = (code *)CONCAT44(local_100._4_4_,1);
    uVar5 = ::alloc::boxed::Box<T>::new(&local_118);
    param_1[1] = uVar5;
    param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00411120;
    *param_1 = 1;
    return param_1;
  case 10:
    local_118 = &local_80;
    uStack_110 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x4111c0;
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
    local_148 = 0x16c850;
    uStack_140 = 2;
    local_130 = 2;
    goto LAB_002c3117;
  case 0xc:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_98,param_2,param_3);
    goto LAB_002c30bf;
  case 0xd:
    local_118 = &local_80;
    uStack_110 = _<&T_as_core::fmt::Display>::fmt;
    local_148 = 0x4111c0;
    uStack_140 = 1;
    local_130 = 1;
LAB_002c3117:
    local_138 = (code ***)&local_118;
    uStack_13c = 0;
    uStack_144 = 0;
    local_128 = 0;
    core::option::Option<T>::map_or_else(&local_98,&local_148);
LAB_002c3127:
    uVar5 = 0xd;
    puVar7 = &DAT_00175489;
    goto LAB_002c3134;
  case 0xf:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_98,param_2,param_3);
    goto LAB_002c3127;
  }
  local_138 = (code ***)&local_118;
  uStack_13c = 0;
  uStack_144 = 0;
  local_128 = 0;
  core::option::Option<T>::map_or_else(&local_98,&local_148);
LAB_002c30bf:
  uVar5 = 10;
  puVar7 = &DAT_00175496;
LAB_002c3134:
  local_c8 = local_88;
  pcStack_d0 = pcStack_90;
                    /* try { // try from 002c3156 to 002c3454 has its CatchHandler @ 002c34af */
  chrono::naive::datetime::NaiveDateTime::parse_from_str
            (&local_148,pcStack_90,local_88,puVar7,uVar5);
  if (local_148 == 0) {
    uVar5 = parse_timestamp::___closure__(pcStack_d0,local_c8);
  }
  else {
    local_68 = CONCAT44(uStack_140,uStack_144);
    local_6c = local_148;
    _<chrono::offset::local::Local_as_chrono::offset::TimeZone>::offset_from_local_datetime
              (&local_148,1,&local_6c);
    chrono::offset::LocalResult<T>::and_then(&local_118,&local_148,&local_6c);
    if ((int)local_118 == 0) {
      local_e8 = local_118._4_4_;
      uStack_e4 = (uint)uStack_110;
      uStack_e0 = uStack_110._4_4_;
      uStack_dc = ppcStack_108._0_4_;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset
                (&local_148,&local_e8,(ulong)ppcStack_108 & 0xffffffff);
      uVar3 = uStack_144 * -0x11111111 + 0xeeeeeeeb;
      if (((uVar3 >> 2 | uVar3 * 0x40000000) < 0x4444444) &&
         (cVar2 = core::slice::_<impl[T]>::ends_with(pcStack_d0,local_c8,&DAT_001754a2,3),
         cVar2 != '\0')) {
        _<chrono::datetime::DateTime<Tz>as_core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>
        ::add_assign(&local_e8);
      }
      chrono::datetime::DateTime<Tz>::checked_add_signed(&local_148,&local_e8);
      if (local_148 == 0) {
        ppuVar8 = &PTR_DAT_004111d0;
        puVar7 = &DAT_00174f5c;
LAB_002c34a4:
                    /* try { // try from 002c34a4 to 002c34ae has its CatchHandler @ 002c34af */
        uVar5 = core::option::expect_failed(puVar7,0x21,ppuVar8);
                    /* catch() { ... } // from try @ 002c3156 with catch @ 002c34af
                       catch() { ... } // from try @ 002c34a4 with catch @ 002c34af */
                    /* try { // try from 002c34b2 to 002c34bb has its CatchHandler @ 002c34c4 */
        core::ptr::drop_in_place<alloc::string::String>(&local_d8);
        puVar6 = (undefined8 *)_Unwind_Resume(uVar5);
        return puVar6;
      }
      local_118 = (code **)CONCAT44(uStack_144,local_148);
      uStack_110 = (code *)CONCAT44(uStack_13c,uStack_140);
      chrono::datetime::DateTime<Tz>::checked_sub_signed(&local_148,&local_118);
      uVar1 = uStack_13c;
      if (local_148 == 0) {
        ppuVar8 = &PTR_DAT_004111e8;
        puVar7 = &DAT_001754a5;
        goto LAB_002c34a4;
      }
      local_58 = uStack_140;
      local_60 = CONCAT44(uStack_144,local_148);
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_148,&local_e8,uStack_dc)
      ;
      uVar3 = uStack_144;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(&local_148,&local_60,uVar1);
      if (uVar3 / 0xe10 == uStack_144 / 0xe10) {
        iVar4 = chrono::naive::date::NaiveDate::num_days_from_ce(local_e8);
        param_1[1] = ((ulong)uStack_e4 - 0xe77934880) + (long)iVar4 * 0x15180;
        *(undefined4 *)(param_1 + 2) = uStack_e0;
        *param_1 = 0;
        goto LAB_002c346b;
      }
      local_118 = (code **)0x0;
      uStack_110 = local_80;
      ppcStack_108 = ppcStack_78;
      local_100 = (code *)CONCAT71(local_100._1_7_,1);
      local_b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_148 = 0x411200;
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
      uVar5 = ::alloc::boxed::Box<T>::new(&local_148);
    }
    else {
      local_b8 = (code *)0x0;
      local_b0 = pcStack_d0;
      ppcStack_a8 = (code **)local_c8;
      local_a0 = 1;
      local_98 = &local_b8;
      pcStack_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_148 = 0x411210;
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
      uVar5 = ::alloc::boxed::Box<T>::new(&local_148);
    }
  }
  param_1[1] = uVar5;
  param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00411120;
  *param_1 = 1;
LAB_002c346b:
  core::ptr::drop_in_place<alloc::string::String>(&local_d8);
  return param_1;
}