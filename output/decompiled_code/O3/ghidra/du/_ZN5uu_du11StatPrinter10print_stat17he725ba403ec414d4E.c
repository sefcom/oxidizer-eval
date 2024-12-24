undefined8 __rustcall uu_du::StatPrinter::print_stat(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_e0;
  code *pcStack_d8;
  undefined8 *local_d0;
  code *pcStack_c8;
  undefined8 **local_c0;
  code *local_b8;
  undefined8 **local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 **local_70;
  code *local_68;
  undefined8 *local_58 [3];
  undefined local_40 [16];
  
  if (*(char *)(param_1 + 0x4c) == '\x03') {
    convert_size(&local_e0,param_1,param_3);
    local_68 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = (undefined8 **)&DAT_00284100;
    local_b8 = (code *)0x2;
    local_a0 = 0;
    local_b0 = &local_70;
    uStack_a8 = 1;
                    /* try { // try from 001f330a to 001f3314 has its CatchHandler @ 001f34e6 */
    local_70 = &local_e0;
    std::io::stdio::_print(&local_c0);
    pppuVar2 = &local_e0;
  }
  else {
    get_time_secs(&local_e0,*(char *)(param_1 + 0x4c),param_2);
    if (local_e0 != (undefined8 **)&DAT_00000005) {
      local_c0 = local_e0;
      local_b8 = pcStack_d8;
      uVar1 = ::alloc::boxed::Box<T>::new(&local_c0);
      return uVar1;
    }
    uVar1 = _<std::time::SystemTime_as_core::ops::arith::Add<core::time::Duration>>::add
                      (0,0,pcStack_d8,0);
    _<chrono::datetime::DateTime<chrono::offset::local::Local>as_core::convert::From<std::time::SystemTime>>
    ::from(local_40,uVar1);
    local_e0 = *(undefined8 ***)(param_1 + 0x38);
    pcStack_d8 = *(code **)(param_1 + 0x40);
    local_d0 = (undefined8 *)0x8;
    pcStack_c8 = (code *)0x0;
    chrono::datetime::DateTime<Tz>::format_with_items(&local_c0,local_40,&local_e0);
                    /* try { // try from 001f3396 to 001f33a8 has its CatchHandler @ 001f34d7 */
    _<T_as_alloc::string::ToString>::to_string(local_58,&local_c0);
                    /* try { // try from 001f33a9 to 001f33c5 has its CatchHandler @ 001f34f5 */
    core::ptr::
    drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>
              (&local_c0);
    convert_size(&local_70,param_1,param_3);
    pcStack_d8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_c8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_c0 = (undefined8 **)&DAT_002840d0;
    local_b8 = (code *)0x3;
    local_a0 = 0;
    uStack_a8 = 2;
                    /* try { // try from 001f340d to 001f3417 has its CatchHandler @ 001f34c8 */
    local_e0 = &local_70;
    local_d0 = local_58;
    local_b0 = &local_e0;
    std::io::stdio::_print(&local_c0);
                    /* try { // try from 001f3418 to 001f3421 has its CatchHandler @ 001f34f5 */
    core::ptr::drop_in_place<alloc::string::String>(&local_70);
    pppuVar2 = (undefined8 ***)local_58;
  }
  core::ptr::drop_in_place<alloc::string::String>(pppuVar2);
  uVar1 = uucore::mods::display::print_verbatim(param_2 + 0x40);
  core::result::Result<T,E>::unwrap(uVar1);
  local_e0 = (undefined8 **)(param_1 + 0x4d);
  pcStack_d8 = _<uucore::mods::line_ending::LineEnding_as_core::fmt::Display>::fmt;
  local_c0 = (undefined8 **)&DAT_0010ee80;
  local_b8 = (code *)0x1;
  local_a0 = 0;
  local_b0 = &local_e0;
  uStack_a8 = 1;
  std::io::stdio::_print(&local_c0);
  return 0;
}