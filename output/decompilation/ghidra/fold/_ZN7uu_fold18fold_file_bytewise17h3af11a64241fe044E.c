undefined ** __rustcall
uu_fold::fold_file_bytewise(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined **local_98;
  long local_90;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  undefined local_60 [16];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  code *local_38;
  
  local_b0 = 0;
  local_a8 = 1;
  local_a0 = (undefined8 *)0x0;
  local_64 = param_2;
  local_50 = param_3;
  do {
    uVar2 = std::io::append_to_string(&local_b0,param_1);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_98,uVar2);
    ppuVar3 = local_98;
    if (local_98 != (undefined **)0x0) {
                    /* try { // try from 001b1c9a to 001b1caf has its CatchHandler @ 001b1cf5 */
      core::ptr::drop_in_place<alloc::string::String>(&local_b0);
LAB_001b1cb0:
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                (*param_1,param_1[1]);
      return ppuVar3;
    }
    if (local_90 == 0) {
      core::ptr::drop_in_place<alloc::string::String>(&local_b0);
      goto LAB_001b1cb0;
    }
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_a8,local_a0,"\n",1);
    uVar2 = local_a8;
    if (cVar1 == '\0') {
      if (local_a0 != (undefined8 *)0x0) {
        puVar4 = local_50;
        if (local_a0 < local_50) {
          puVar4 = local_a0;
        }
        local_48 = local_a0;
        auVar7 = core::str::traits::
                 _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                           (0,puVar4,local_a8);
        if (auVar7._0_8_ == 0) {
          puVar6 = (undefined8 *)0x0;
          puVar5 = local_48;
LAB_001b1cdc:
                    /* try { // try from 001b1cdc to 001b1cf4 has its CatchHandler @ 001b1d01 */
          uVar2 = core::str::slice_error_fail
                            (uVar2,puVar5,puVar6,puVar4,&PTR_s_src_uu_fold_src_fold_rs_0021a988);
                    /* catch() { ... } // from try @ 001b1c9a with catch @ 001b1cf5 */
          core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                    (*puVar6,puVar6[1]);
          ppuVar3 = (undefined **)_Unwind_Resume(uVar2);
          return ppuVar3;
        }
        puVar6 = (undefined8 *)0x0;
        while( true ) {
          puVar5 = local_48;
          if ((puVar4 < local_48) && ((char)local_64 != '\0')) {
            auVar8 = core::str::_<impl_str>::rfind(auVar7._0_8_,auVar7._8_8_);
            if (auVar8._0_8_ != 0) {
              local_98 = (undefined **)0x0;
              local_88 = (undefined8 **)((ulong)local_88 & 0xffffffffffffff00);
                    /* try { // try from 001b1b54 to 001b1bf8 has its CatchHandler @ 001b1d03 */
              local_90 = auVar8._8_8_;
              auVar7 = core::str::traits::
                       _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeInclusive<usize>>
                       ::index(&local_98,auVar7._0_8_,auVar7._8_8_);
            }
          }
          local_60 = auVar7;
          cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (auVar7._0_8_,auVar7._8_8_,"\n",1);
          if (cVar1 != '\0') goto LAB_001b1a81;
          puVar6 = (undefined8 *)((long)puVar6 + local_60._8_8_);
          local_40 = (undefined8 *)local_60;
          puVar4 = (undefined8 *)((long)puVar5 - (long)puVar6);
          if (puVar5 < puVar6 || puVar4 == (undefined8 *)0x0) break;
          local_38 = _<&T_as_core::fmt::Display>::fmt;
          local_98 = (undefined **)&DAT_0021a968;
          local_90 = 2;
          uStack_78 = 0;
          local_88 = &local_40;
          local_80 = 1;
          std::io::stdio::_print(&local_98);
          puVar5 = local_a0;
          uVar2 = local_a8;
          if (local_50 <= puVar4) {
            puVar4 = local_50;
          }
          puVar4 = (undefined8 *)((long)puVar4 + (long)puVar6);
          auVar7 = core::str::traits::
                   _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::
                   get(puVar6,puVar4,local_a8,local_a0);
          if (auVar7._0_8_ == 0) goto LAB_001b1cdc;
        }
        local_38 = _<&T_as_core::fmt::Display>::fmt;
        local_98 = (undefined **)&DAT_00114600;
        local_90 = 1;
        uStack_78 = 0;
        local_88 = &local_40;
        local_80 = 1;
                    /* try { // try from 001b1c7c to 001b1c86 has its CatchHandler @ 001b1cfa */
        std::io::stdio::_print(&local_98);
      }
    }
    else {
      local_98 = &PTR_s__0021a958;
      local_90 = 1;
      local_88 = (undefined8 **)&DAT_00000008;
      local_80 = 0;
      uStack_78 = 0;
                    /* try { // try from 001b1a76 to 001b1ad5 has its CatchHandler @ 001b1cfc */
      std::io::stdio::_print(&local_98);
    }
LAB_001b1a81:
    ::alloc::string::String::truncate(&local_b0);
  } while( true );
}