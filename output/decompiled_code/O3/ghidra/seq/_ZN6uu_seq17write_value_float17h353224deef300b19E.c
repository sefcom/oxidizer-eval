undefined8 __rustcall
uu_seq::write_value_float
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  local_a0 = param_2;
  cVar1 = _<uu_seq::extendedbigdecimal::ExtendedBigDecimal_as_core::cmp::PartialEq>::eq
                    (param_2,&DAT_00123ff0);
  if (cVar1 == '\0') {
    cVar1 = _<uu_seq::extendedbigdecimal::ExtendedBigDecimal_as_core::cmp::PartialEq>::eq
                      (param_2,&DAT_00124018);
    if (cVar1 == '\0') {
      local_b0 = 0x800000020;
      goto LAB_001c8ddb;
    }
  }
  local_b0 = 0x20;
LAB_001c8ddb:
  local_98 = &local_a0;
  local_70 = 0;
  local_80 = 0;
  local_90 = _<&T_as_core::fmt::Display>::fmt;
  local_b8 = 0;
  local_c0 = 2;
  local_c8 = (undefined8 **)0x1;
  local_d0 = 1;
  local_d8 = (undefined *)0x1;
  local_a8 = 1;
  local_68 = &DAT_00117bc0;
  local_60 = 1;
  local_40 = 1;
  local_58 = &local_98;
  local_50 = 3;
  local_88 = param_4;
  local_78 = param_3;
  local_48 = (undefined *)&local_d8;
  core::option::Option<T>::map_or_else(local_38,&local_68);
  local_98 = local_38;
  local_90 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_d8 = &DAT_00117bc0;
  local_d0 = 1;
  local_b8 = 0;
  local_c8 = &local_98;
  local_c0 = 1;
                    /* try { // try from 001c8e80 to 001c8e8a has its CatchHandler @ 001c8ead */
  uVar2 = std::io::Write::write_fmt(param_1,&local_d8);
  core::ptr::drop_in_place<alloc::string::String>(local_38);
  return uVar2;
}