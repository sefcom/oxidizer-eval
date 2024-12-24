undefined * __rustcall uu_fold::fold_file(undefined8 *param_1,uint param_2,code *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong extraout_RDX;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  code *pcVar8;
  code *unaff_R13;
  code *pcVar9;
  code *pcVar10;
  undefined8 *local_e0;
  undefined8 **local_d8;
  code *local_d0;
  undefined8 **local_c8;
  code *local_c0;
  undefined8 **local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined **local_78;
  undefined8 *local_70;
  uint local_64;
  undefined8 local_60;
  long local_58;
  long local_50;
  ulong local_48;
  long local_40;
  long local_38;
  
  local_60 = 0;
  local_58 = 1;
  local_50 = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 **)&DAT_00000001;
  local_d0 = (code *)0x0;
  local_48 = (ulong)param_2;
  uVar5 = 0;
  local_78 = &PTR_s_src_uu_fold_src_fold_rs_0021bc78;
  pcVar10 = (code *)0x0;
  local_70 = param_1;
  local_64 = param_2;
  do {
    uVar3 = std::io::append_to_string(&local_60,local_70);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_a8,uVar3);
    puVar4 = local_a8;
    if (local_a8 != (undefined *)0x0) {
                    /* try { // try from 001b2666 to 001b266f has its CatchHandler @ 001b26e3 */
      core::ptr::drop_in_place<alloc::string::String>(&local_e0);
                    /* try { // try from 001b2670 to 001b267c has its CatchHandler @ 001b26de */
      core::ptr::drop_in_place<alloc::string::String>(&local_60);
LAB_001b2696:
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                (*local_70,local_70[1]);
      return puVar4;
    }
    if (local_a0 == 0) {
                    /* try { // try from 001b267f to 001b2688 has its CatchHandler @ 001b26e3 */
      core::ptr::drop_in_place<alloc::string::String>(&local_e0);
                    /* try { // try from 001b2689 to 001b2695 has its CatchHandler @ 001b26de */
      core::ptr::drop_in_place<alloc::string::String>(&local_60);
      goto LAB_001b2696;
    }
    local_38 = local_50 + local_58;
    local_40 = local_58;
    while( true ) {
      iVar2 = core::str::validations::next_code_point(&local_40);
      pcVar8 = local_d0;
      puVar4 = (undefined *)(extraout_RDX & 0xffffffff);
      if (iVar2 == 0) {
        puVar4 = &DAT_00110000;
      }
      uVar7 = (uint)puVar4;
      if (uVar7 == 10) {
        local_c8 = local_d8;
        local_c0 = local_d0;
        local_b8 = &local_c8;
        local_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_a8 = &DAT_0021bc58;
        local_a0 = 2;
        local_88 = 0;
        local_98 = &local_b8;
        local_90 = 1;
                    /* try { // try from 001b25cb to 001b2660 has its CatchHandler @ 001b26e8 */
        std::io::stdio::_print(&local_a8);
        ::alloc::string::String::replace_range(&local_e0,pcVar8,1,0);
        uVar5 = 0;
        pcVar10 = local_d0;
        if (local_d0 == (code *)0x0) goto LAB_001b2280;
        goto LAB_001b2605;
      }
      if (uVar7 == 0x110000) break;
      pcVar8 = pcVar10;
      if (param_3 <= pcVar10) {
        pcVar8 = unaff_R13 + 1;
        if (uVar5 == 0) {
          pcVar8 = local_d0;
        }
        if (pcVar8 != (code *)0x0) {
          if (pcVar8 < local_d0) {
            if ((char)*(code *)((long)local_d8 + (long)pcVar8) < -0x40) goto LAB_001b26ce;
          }
          else if (pcVar8 != local_d0) goto LAB_001b26ce;
        }
        local_c8 = local_d8;
        local_b8 = &local_c8;
        local_b0 = _<&T_as_core::fmt::Display>::fmt;
        local_a8 = &DAT_0021bc58;
        local_a0 = 2;
        local_88 = 0;
        local_98 = &local_b8;
        local_90 = 1;
        local_c0 = pcVar8;
        std::io::stdio::_print(&local_a8);
        ::alloc::string::String::replace_range(&local_e0,pcVar8,1,0);
        uVar5 = 0;
        pcVar8 = local_d0;
      }
      uVar6 = uVar5;
      pcVar9 = unaff_R13;
      if (uVar7 == 8) {
        pcVar10 = pcVar8 + -1;
        if (pcVar8 == (code *)0x0) {
          pcVar10 = (code *)0x0;
        }
      }
      else if (uVar7 == 9) {
        pcVar10 = (code *)(((ulong)pcVar8 & 0xfffffffffffffff8) + 8);
        uVar6 = local_48;
        pcVar9 = local_d0;
        if ((param_3 < pcVar10) && (local_d0 != (code *)0x0)) {
          pcVar8 = unaff_R13 + 1;
          if (uVar5 == 0) {
            pcVar8 = local_d0;
          }
          if (pcVar8 != (code *)0x0) {
            if (pcVar8 < local_d0) {
              if ((char)*(code *)((long)local_d8 + (long)pcVar8) < -0x40) {
LAB_001b26bf:
                local_78 = &PTR_s_src_uu_fold_src_fold_rs_0021bc90;
LAB_001b26ce:
                    /* try { // try from 001b26ce to 001b26dd has its CatchHandler @ 001b26ea */
                uVar3 = core::str::slice_error_fail(local_d8,local_d0,0,pcVar8,local_78);
                    /* catch() { ... } // from try @ 001b2670 with catch @ 001b26de
                       catch() { ... } // from try @ 001b2689 with catch @ 001b26de */
                core::ptr::
                drop_in_place<std::io::buffered::bufreader::BufReader<&mut_dyn_std::io::Read>>
                          (*local_70,local_70[1]);
                puVar4 = (undefined *)_Unwind_Resume(uVar3);
                return puVar4;
              }
            }
            else if (pcVar8 != local_d0) goto LAB_001b26bf;
          }
          local_c8 = local_d8;
          local_b8 = &local_c8;
          local_b0 = _<&T_as_core::fmt::Display>::fmt;
          local_a8 = &DAT_0021bc58;
          local_a0 = 2;
          local_88 = 0;
          local_98 = &local_b8;
          local_90 = 1;
          local_c0 = pcVar8;
          std::io::stdio::_print(&local_a8);
          ::alloc::string::String::replace_range(&local_e0,pcVar8,1,0);
          uVar6 = local_48;
          pcVar9 = local_d0;
        }
      }
      else if (uVar7 == 0xd) {
        pcVar10 = (code *)0x0;
      }
      else if (((char)local_64 == '\0') ||
              (((0x20 < uVar7 || ((0x100003800U >> ((ulong)puVar4 & 0x3f) & 1) == 0)) &&
               ((uVar7 < 0x80 ||
                (cVar1 = core::unicode::unicode_data::white_space::lookup(puVar4), cVar1 == '\0'))))
              )) {
        pcVar10 = pcVar8 + 1;
      }
      else {
        pcVar10 = pcVar8 + 1;
        uVar6 = 1;
        pcVar9 = local_d0;
      }
                    /* try { // try from 001b22fd to 001b2514 has its CatchHandler @ 001b26ec */
      ::alloc::string::String::push(&local_e0,puVar4);
      uVar5 = uVar6;
      unaff_R13 = pcVar9;
    }
    if (local_d0 != (code *)0x0) {
LAB_001b2605:
      local_c8 = &local_e0;
      local_c0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_a8 = &DAT_00114850;
      local_a0 = 1;
      local_88 = 0;
      local_98 = &local_c8;
      local_90 = 1;
      std::io::stdio::_print(&local_a8);
      ::alloc::string::String::truncate(&local_e0);
    }
LAB_001b2280:
                    /* try { // try from 001b2280 to 001b22a1 has its CatchHandler @ 001b26e8 */
    ::alloc::string::String::truncate(&local_60);
  } while( true );
}