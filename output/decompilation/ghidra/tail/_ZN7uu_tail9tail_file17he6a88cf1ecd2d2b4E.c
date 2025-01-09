long __rustcall
uu_tail::tail_file(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined **ppuVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined local_168 [16];
  char **local_158;
  code *pcStack_150;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [24];
  undefined8 local_120;
  undefined **local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_88;
  long local_38;
  
  local_110 = param_1;
  local_f8 = param_2;
  std::fs::metadata(&local_e8,param_4,param_5);
  iVar1 = (int)local_e8;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&local_e8)
  ;
  if (iVar1 == 2) {
    uucore::mods::error::set_exit_code(1);
    local_168 = uucore::util_name();
    local_138._0_8_ = local_168;
    local_138._8_8_ = _<&T_as_core::fmt::Display>::fmt;
    local_e8 = (undefined **)&DAT_002bb798;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_138;
    uStack_d0 = 1;
    std::io::stdio::_eprint(&local_e8);
    local_168._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_158 = &PTR_s_No_such_file_or_directory_002bb9c0;
    pcStack_150 = _<&T_as_core::fmt::Display>::fmt;
    local_e8 = &PTR_s_cannot_open____for_reading__002bb7b8;
    uStack_e0 = 3;
    local_c8 = 0;
    local_d8 = (undefined8 *)local_168;
    uStack_d0 = 2;
    local_168._0_8_ = param_3;
    std::io::stdio::_eprint(&local_e8);
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
LAB_00200295:
    lVar4 = follow::watch::Observer::add_bad_path(param_6,param_4,param_5,uVar6,uVar8,0);
    return lVar4;
  }
  cVar3 = std::path::Path::is_dir(param_4,param_5);
  if (cVar3 != '\0') {
    uucore::mods::error::set_exit_code(1);
    paths::HeaderPrinter::print_input(local_f8,param_3);
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_138);
                    /* try { // try from 002002ec to 0020050a has its CatchHandler @ 002008cb */
    local_168 = uucore::util_name();
    local_118 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
    local_e8 = (undefined **)&DAT_002bb798;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_120;
    uStack_d0 = 1;
    local_120 = local_168;
    std::io::stdio::_eprint(&local_e8);
    local_168._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
    pcStack_150 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_e8 = &PTR_s_error_reading_______cannot_follo_002bb7e8;
    uStack_e0 = 3;
    local_c8 = 0;
    uStack_d0 = 2;
    local_168._0_8_ = param_3;
    local_158 = (char **)local_138;
    local_d8 = (undefined8 *)local_168;
    std::io::stdio::_eprint(&local_e8);
    if (*(char *)(local_110 + 0x4c) != '\x02') {
      bVar9 = *(char *)(local_110 + 0x48) == '\0';
      local_108 = (char *)0x1;
      if (bVar9) {
        local_108 = "; giving up on this name";
      }
      local_100 = 0x18;
      if (!bVar9) {
        local_100 = 0;
      }
      local_168 = uucore::util_name();
      local_118 = (undefined **)_<&T_as_core::fmt::Display>::fmt;
      local_e8 = (undefined **)&DAT_002bb798;
      uStack_e0 = 2;
      local_c8 = 0;
      local_d8 = &local_120;
      uStack_d0 = 1;
      local_120 = local_168;
      std::io::stdio::_eprint(&local_e8);
      local_168._8_8_ = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_158 = &local_108;
      pcStack_150 = _<&T_as_core::fmt::Display>::fmt;
      local_e8 = (undefined **)&DAT_002bb818;
      uStack_e0 = 3;
      local_c8 = 0;
      uStack_d0 = 2;
      local_168._0_8_ = param_3;
      local_d8 = (undefined8 *)local_168;
      std::io::stdio::_eprint(&local_e8);
    }
    lVar4 = 0;
    if ((((*(byte *)(param_6 + 0x8e) & 1) != 0) && (*(char *)(param_6 + 0x8c) != '\0')) &&
       (lVar4 = follow::watch::Observer::add_bad_path
                          (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                           *(undefined8 *)(param_3 + 0x10),0), lVar4 == 0)) {
      core::ptr::drop_in_place<alloc::string::String>(local_138);
      return 0;
    }
    core::ptr::drop_in_place<alloc::string::String>(local_138);
    return lVar4;
  }
  cVar3 = paths::Input::is_tailable(param_3);
  if (cVar3 == '\0') {
    uVar6 = *(undefined8 *)(param_3 + 8);
    uVar8 = *(undefined8 *)(param_3 + 0x10);
    goto LAB_00200295;
  }
  std::fs::metadata(&local_e8,param_4,param_5);
  ppuVar2 = local_e8;
  if (local_e8 == (undefined **)0x2) {
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (&local_e8);
  }
  else {
    local_38 = local_88;
  }
  lVar4 = local_110;
  std::fs::File::open(&local_120,param_4,param_5);
  if ((int)local_120 != 0) {
    cVar3 = std::io::error::Error::kind(local_118);
    if (cVar3 == '\x01') {
      local_f0 = local_118;
                    /* try { // try from 002005bf to 002005d1 has its CatchHandler @ 00200883 */
      lVar4 = follow::watch::Observer::add_bad_path
                        (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                         *(undefined8 *)(param_3 + 0x10),0);
      if (lVar4 == 0) {
        local_108 = (char *)_<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                            ::map_err_context(local_118,param_3);
                    /* try { // try from 00200794 to 00200828 has its CatchHandler @ 002008aa */
        uucore::mods::error::set_exit_code(1);
        local_138._0_16_ = uucore::util_name();
        local_168._0_8_ = local_138;
        local_168._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_158 = &local_108;
        pcStack_150 = _<alloc::boxed::Box<T,A>as_core::fmt::Display>::fmt;
        local_e8 = (undefined **)&DAT_002bb848;
        uStack_e0 = 3;
        local_c8 = 0;
        local_d8 = (undefined8 *)local_168;
        uStack_d0 = 2;
        std::io::stdio::_eprint(&local_e8);
        core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_108);
        return 0;
      }
      pppuVar7 = &local_f0;
    }
    else {
      local_e8 = local_118;
                    /* try { // try from 002006d8 to 002006ea has its CatchHandler @ 00200871 */
      lVar4 = follow::watch::Observer::add_bad_path
                        (param_6,param_4,param_5,*(undefined8 *)(param_3 + 8),
                         *(undefined8 *)(param_3 + 0x10),0);
      if (lVar4 == 0) {
        lVar4 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                ::map_err_context(local_118,param_3);
        return lVar4;
      }
      pppuVar7 = &local_e8;
    }
    core::ptr::drop_in_place<std::io::error::Error>(pppuVar7);
    return lVar4;
  }
  local_138._0_4_ = local_120._4_4_;
                    /* try { // try from 00200608 to 00200617 has its CatchHandler @ 002008b9 */
  paths::HeaderPrinter::print_input(local_f8,param_3);
  if (*(char *)(lVar4 + 0x4b) == '\0') {
    uVar6 = 0;
    if (*(long *)(param_3 + 0x18) == -0x8000000000000000) {
      uVar6 = param_7;
    }
                    /* try { // try from 00200638 to 00200668 has its CatchHandler @ 00200868 */
    cVar3 = _<std::fs::File_as_uu_tail::paths::FileExtTail>::is_seekable(local_138,uVar6);
    if (cVar3 != '\0') {
      if ((int)ppuVar2 == 2) {
                    /* try { // try from 0020085b to 00200867 has its CatchHandler @ 00200868 */
        uVar6 = core::option::unwrap_failed(&PTR_s_src_uu_tail_src_tail_rs_002bb878);
                    /* catch() { ... } // from try @ 00200638 with catch @ 00200868
                       catch() { ... } // from try @ 0020085b with catch @ 00200868 */
        core::ptr::drop_in_place<std::fs::File>(local_138._0_8_ & 0xffffffff);
        lVar4 = _Unwind_Resume(uVar6);
        return lVar4;
      }
      if (local_38 != 0) {
        bounded_tail(local_138,lVar4);
        std::io::buffered::bufreader::BufReader<R>::with_capacity
                  (local_168,0x2000,local_138._0_8_ & 0xffffffff);
        goto LAB_00200712;
      }
    }
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity
            (local_168,0x2000,local_138._0_8_ & 0xffffffff);
                    /* try { // try from 002006a6 to 002006b0 has its CatchHandler @ 00200895 */
  lVar4 = unbounded_tail(local_168,lVar4);
  if (lVar4 != 0) {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<std::fs::File>>(local_168);
    return lVar4;
  }
LAB_00200712:
  uVar6 = *(undefined8 *)(param_3 + 8);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uStack_c0 = uStack_140;
  uStack_bc = uStack_13c;
  uVar5 = ::alloc::boxed::Box<T>::new(&local_e8);
  lVar4 = follow::watch::Observer::add_path
                    (param_6,param_4,param_5,uVar6,uVar8,uVar5,
                     &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_002bb890,1
                    );
  if (lVar4 == 0) {
    return 0;
  }
  return lVar4;
}