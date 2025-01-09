void __rustcall
uu_cp::OverwriteMode::verify
          (undefined8 *param_1,char param_2,undefined8 param_3,undefined8 ***param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 **local_130;
  code *local_128;
  undefined8 **local_120;
  code *local_118;
  undefined8 *puStack_110;
  code *local_108;
  undefined local_100 [8];
  undefined8 local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d0;
  code *local_c8;
  undefined ***local_c0;
  undefined local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_38;
  
  if (param_2 != '\0') {
    local_f0 = (undefined ***)param_4;
    if (param_2 != '\x01') {
      if (param_5 != '\0') {
        local_100 = (undefined  [8])0x1;
        local_e8 = CONCAT71(local_e8._1_7_,1);
        local_88 = (undefined8 *)local_100;
        pcStack_80 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_130 = (undefined8 **)&PTR_s_skipped_002b5dd8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_120 = &local_88;
        local_118 = (code *)0x1;
        local_f8 = (code *)param_3;
        std::io::stdio::_print(&local_130);
      }
      *param_1 = 8;
      *(undefined *)(param_1 + 1) = 0;
      return;
    }
    file_mode_for_interactive_overwrite(&local_88,param_3,param_4);
    if (local_88 == (undefined8 *)0x8000000000000000) {
                    /* try { // try from 002048ba to 002049d8 has its CatchHandler @ 00204c09 */
      _local_100 = uucore::util_name();
      local_c8 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = (undefined8 **)&DAT_002b5cc8;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      local_d0 = (undefined8 *)local_100;
      std::io::stdio::_eprint(&local_130);
      local_100 = (undefined  [8])0x1;
      local_e8 = CONCAT71(local_e8._1_7_,1);
      local_c8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_130 = (undefined8 **)&PTR_s_overwrite___002b5e48;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      local_f8 = (code *)param_3;
      local_d0 = (undefined8 *)local_100;
      std::io::stdio::_eprint(&local_130);
      local_130 = (undefined8 **)&PTR_s_specified_more_than_once_002b5e38;
      local_128 = (code *)0x1;
      local_120 = (undefined8 **)0x8;
      local_118 = (code *)0x0;
      puStack_110 = (undefined8 *)0x0;
      std::io::stdio::_eprint(&local_130);
      local_58 = (undefined8 *)std::io::stdio::stderr::INSTANCE;
      local_a8 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_58);
      if (local_a8 != 0) {
                    /* try { // try from 00204afc to 00204bae has its CatchHandler @ 00204bc6 */
        _local_100 = uucore::util_name();
        local_c8 = _<&T_as_core::fmt::Display>::fmt;
        local_130 = (undefined8 **)&DAT_002b5cc8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = &local_d0;
        local_d0 = (undefined8 *)local_100;
        std::io::stdio::_eprint(&local_130);
        local_100 = (undefined  [8])&local_a8;
        local_f8 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_130 = (undefined8 **)&DAT_002b5ce8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = (undefined8 **)local_100;
        std::io::stdio::_eprint(&local_130);
        uVar2 = std::process::exit(1);
        goto LAB_00204baf;
      }
      cVar1 = uucore::read_yes();
      if (local_88 != (undefined8 *)0x8000000000000000) {
                    /* try { // try from 002049ef to 002049fb has its CatchHandler @ 00204baf */
        core::ptr::drop_in_place<alloc::string::String>(&local_88);
        core::ptr::drop_in_place<alloc::string::String>(&local_70);
      }
    }
    else {
      local_48 = local_78;
      local_58 = local_88;
      uStack_50 = pcStack_80;
      local_98 = local_60;
      local_a8 = CONCAT44(uStack_6c,local_70);
      uStack_a0 = uStack_68;
      uStack_9c = uStack_64;
                    /* try { // try from 002046be to 00204810 has its CatchHandler @ 00204bea */
      _local_100 = uucore::util_name();
      local_d0 = (undefined8 *)local_100;
      local_c8 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = (undefined8 **)&DAT_002b5cc8;
      local_128 = (code *)0x2;
      puStack_110 = (undefined8 *)0x0;
      local_118 = (code *)0x1;
      local_120 = &local_d0;
      std::io::stdio::_eprint(&local_130);
      local_d0 = (undefined8 *)0x1;
      local_b8 = 1;
      local_128 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_120 = &local_58;
      local_118 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      puStack_110 = &local_a8;
      local_108 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_100 = (undefined  [8])&PTR_s_replace_002b5df8;
      local_f8 = (code *)0x4;
      local_e0 = 0;
      local_e8 = 3;
      local_130 = &local_d0;
      local_f0 = (undefined ***)&local_130;
      local_c8 = (code *)param_3;
      local_c0 = (undefined ***)param_4;
      std::io::stdio::_eprint(local_100);
      local_130 = (undefined8 **)&PTR_s_specified_more_than_once_002b5e38;
      local_128 = (code *)0x1;
      local_120 = (undefined8 **)0x8;
      local_118 = (code *)0x0;
      puStack_110 = (undefined8 *)0x0;
      std::io::stdio::_eprint(&local_130);
      local_38 = std::io::stdio::stderr::INSTANCE;
      local_b0 = _<std::io::stdio::Stderr_as_std::io::Write>::flush(&local_38);
      if (local_b0 != 0) {
                    /* try { // try from 00204a3c to 00204aee has its CatchHandler @ 00204bd8 */
        _local_100 = uucore::util_name();
        local_c8 = _<&T_as_core::fmt::Display>::fmt;
        local_130 = (undefined8 **)&DAT_002b5cc8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = &local_d0;
        local_d0 = (undefined8 *)local_100;
        std::io::stdio::_eprint(&local_130);
        local_100 = (undefined  [8])&local_b0;
        local_f8 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
        local_130 = (undefined8 **)&DAT_002b5ce8;
        local_128 = (code *)0x2;
        puStack_110 = (undefined8 *)0x0;
        local_118 = (code *)0x1;
        local_120 = (undefined8 **)local_100;
        std::io::stdio::_eprint(&local_130);
        uVar2 = std::process::exit(1);
LAB_00204baf:
                    /* catch() { ... } // from try @ 002049ef with catch @ 00204baf */
                    /* try { // try from 00204bba to 00204c3e has its CatchHandler @ 00204c47 */
        core::ptr::drop_in_place<alloc::string::String>(&local_70);
        _Unwind_Resume(uVar2);
        return;
      }
      cVar1 = uucore::read_yes();
                    /* try { // try from 00204811 to 0020481f has its CatchHandler @ 00204bc1 */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
                    /* try { // try from 00204820 to 0020482c has its CatchHandler @ 00204c09 */
      core::ptr::drop_in_place<alloc::string::String>(&local_58);
    }
    if (cVar1 == '\0') {
      *param_1 = 8;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
  }
  *param_1 = 0xd;
  return;
}