void __rustcall uu_od::multifilereader::MultifileReader::next_file(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined local_70 [16];
  undefined8 local_60;
  undefined local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 *local_40;
  code *local_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      ::alloc::vec::Vec<T,A>::remove
                (&local_98,param_1,0,&PTR_s_src_uu_od_src_multifilereader_rs_00242ce0);
      uVar1 = local_88;
      uVar2 = local_90;
      if (local_98 != 0) {
        if ((int)local_98 != 1) {
                    /* try { // try from 001d54f0 to 001d54f4 has its CatchHandler @ 001d555e */
          core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::Read>>>
                    (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
          *(undefined8 *)(param_1 + 0x18) = local_90;
          *(undefined8 *)(param_1 + 0x20) = local_88;
          return;
        }
        uVar2 = std::io::stdio::stdin();
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_c8,0x2000,uVar2);
        uVar2 = ::alloc::boxed::Box<T>::new(&local_c8);
                    /* try { // try from 001d54cc to 001d54d0 has its CatchHandler @ 001d556e */
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::Read>>>
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        ppuVar3 = &
                  PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_io_stdio_Stdin>>_00242da0
        ;
LAB_001d5538:
        *(undefined ***)(param_1 + 0x20) = ppuVar3;
        return;
      }
      std::fs::File::open(&local_80,local_90,local_88);
      if (local_80 == 0) {
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_c8,0x2000,local_7c);
        uVar2 = ::alloc::boxed::Box<T>::new(&local_c8);
                    /* try { // try from 001d5528 to 001d552c has its CatchHandler @ 001d554e */
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::Read>>>
                  (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        ppuVar3 = &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_00242cf8;
        goto LAB_001d5538;
      }
      local_d0 = local_78;
                    /* try { // try from 001d5383 to 001d5465 has its CatchHandler @ 001d559b */
      local_70 = uucore::util_name();
      local_50 = (undefined8 *)local_70;
      local_48 = _<&T_as_core::fmt::Display>::fmt;
      local_c8 = &DAT_00242d50;
      local_c0 = 2;
      local_a8 = 0;
      local_b0 = 1;
      local_b8 = &local_50;
      std::io::stdio::_eprint(&local_c8);
      local_70._0_8_ = 0;
      local_70._8_8_ = uVar2;
      local_60 = uVar1;
      local_58 = 0;
      local_50 = (undefined8 *)local_70;
      local_48 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_40 = &local_d0;
      local_38 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
      local_c8 = &DAT_00242d70;
      local_c0 = 3;
      local_a8 = 0;
      local_b0 = 2;
      local_b8 = &local_50;
      std::io::stdio::_eprint(&local_c8);
      *(undefined *)(param_1 + 0x28) = 1;
      core::ptr::drop_in_place<std::io::error::Error>(local_d0);
    } while (*(long *)(param_1 + 0x10) != 0);
  }
                    /* try { // try from 001d5487 to 001d548b has its CatchHandler @ 001d5588 */
  core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn_std::io::Read>>>
            (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}