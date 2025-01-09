undefined8 * __rustcall
uu_du::read_files_from(undefined8 *param_1,undefined8 **param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 **local_168;
  code *pcStack_160;
  undefined8 ***local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined local_138 [16];
  undefined8 **local_128;
  code *local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 **local_100;
  undefined local_f8;
  undefined8 local_f0;
  undefined8 **local_e8;
  code *pcStack_e0;
  undefined8 **local_d8;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  code *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 *local_80;
  code *local_78;
  undefined8 local_70;
  long local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_c8 = param_2;
  local_c0 = param_3;
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_2,param_3,&DAT_0011cf46,1);
  local_110 = param_1;
  if (cVar2 == '\0') {
    std::sys::os_str::bytes::Slice::to_owned(&local_168,param_2,param_3);
    local_128 = local_158;
    local_138._0_8_ = local_168;
    local_138._8_8_ = pcStack_160;
                    /* try { // try from 001f3be3 to 001f3c64 has its CatchHandler @ 001f3e34 */
    cVar2 = std::path::Path::is_dir(pcStack_160);
    if (cVar2 == '\0') {
                    /* try { // try from 001f3ce3 to 001f3cec has its CatchHandler @ 001f3e34 */
      std::fs::File::open(&local_108,local_c8,local_c0);
      if ((int)local_108 == 0) {
                    /* try { // try from 001f3d39 to 001f3d4d has its CatchHandler @ 001f3e20 */
        std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_168,0x2000,local_108._4_4_)
        ;
        uVar3 = ::alloc::boxed::Box<T>::new(&local_168);
        core::ptr::drop_in_place<std::path::PathBuf>(local_138);
        local_100 = (undefined8 **)
                    &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_fs_File>>_00284728;
        goto LAB_001f3966;
      }
      cVar2 = std::io::error::Error::kind(local_100);
      if (cVar2 != '\0') {
        param_1[1] = local_100;
        goto LAB_001f3d09;
      }
      local_e8 = local_100;
      local_a0 = &local_c8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_168 = (undefined8 **)&PTR_DAT_002846b8;
      pcStack_160 = (code *)0x2;
      local_148 = 0;
      local_158 = &local_a0;
      local_150 = 1;
                    /* try { // try from 001f3dc9 to 001f3dea has its CatchHandler @ 001f3e0e */
      core::option::Option<T>::map_or_else(local_48,&local_168);
      uVar3 = std::io::error::Error::new(0x27,local_48);
      param_1[1] = uVar3;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001f3dfc to 001f3e08 has its CatchHandler @ 001f3e20 */
      core::ptr::drop_in_place<std::io::error::Error>(&local_e8);
    }
    else {
      local_a0 = &local_c8;
      local_98 = _<&T_as_core::fmt::Display>::fmt;
      local_168 = (undefined8 **)&DAT_00284698;
      pcStack_160 = (code *)0x2;
      local_148 = 0;
      local_158 = &local_a0;
      local_150 = 1;
      core::option::Option<T>::map_or_else(local_60,&local_168);
      uVar3 = std::io::error::Error::new(0x27,local_60);
      param_1[1] = uVar3;
LAB_001f3d09:
      *param_1 = 0x8000000000000000;
    }
    core::ptr::drop_in_place<std::path::PathBuf>(local_138);
  }
  else {
    uVar3 = std::io::stdio::stdin();
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&local_168,0x2000,uVar3);
    uVar3 = ::alloc::boxed::Box<T>::new(&local_168);
    local_100 = (undefined8 **)
                &PTR_drop_in_place<std_io_buffered_bufreader_BufReader<std_io_stdio_Stdin>>_002847b0
    ;
LAB_001f3966:
    local_b8 = 0;
    uStack_b0 = 8;
    local_a8 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = uVar3;
    while (_<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
           ::next(&local_a0,&local_108), puVar1 = local_110, local_98 != (code *)0x8000000000000001)
    {
      if (local_98 == (code *)0x8000000000000000) {
        local_110[1] = local_90;
        *local_110 = 0x8000000000000000;
        core::ptr::
        drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn_std::io::BufRead>>>>
                  (local_108,local_100);
        core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&local_b8);
        return puVar1;
      }
      local_78 = local_98;
      local_70 = local_90;
      local_68 = local_88;
      if (local_88 == 0) {
        local_80 = (undefined8 *)((long)local_a0 + 1);
                    /* try { // try from 001f3aeb to 001f3bb6 has its CatchHandler @ 001f3e69 */
        local_138 = uucore::util_name();
        pcStack_e0 = _<&T_as_core::fmt::Display>::fmt;
        local_168 = (undefined8 **)&DAT_002846d8;
        pcStack_160 = (code *)0x2;
        local_148 = 0;
        local_150 = 1;
        local_158 = &local_e8;
        local_e8 = (undefined8 **)local_138;
        std::io::stdio::_eprint(&local_168);
        local_138._0_8_ = &local_c8;
        local_138._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_128 = &local_80;
        local_120 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
        local_168 = (undefined8 **)&DAT_002846f8;
        pcStack_160 = (code *)0x3;
        local_148 = 0;
        local_150 = 2;
        local_158 = (undefined8 ***)local_138;
        std::io::stdio::_eprint(&local_168);
        uucore::mods::error::set_exit_code(1);
      }
      else {
                    /* try { // try from 001f3a4d to 001f3a55 has its CatchHandler @ 001f3e69 */
        ::alloc::string::String::from_utf8_lossy(&local_168);
                    /* try { // try from 001f3a60 to 001f3a67 has its CatchHandler @ 001f3e45 */
        _<alloc::borrow::Cow<str>as_alloc::string::ToString>::to_string
                  (local_138,pcStack_160,local_158);
        local_d8 = local_128;
        local_e8 = (undefined8 **)local_138._0_8_;
        pcStack_e0 = (code *)local_138._8_8_;
                    /* try { // try from 001f3a82 to 001f3aa1 has its CatchHandler @ 001f3e52 */
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_168);
        cVar2 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                          (&local_e8,uStack_b0,local_a8);
        if (cVar2 == '\0') {
          local_158 = (undefined8 ***)local_d8;
          local_168 = local_e8;
          pcStack_160 = pcStack_e0;
                    /* try { // try from 001f3ac3 to 001f3ad2 has its CatchHandler @ 001f3e43 */
          ::alloc::vec::Vec<T,A>::push(&local_b8,&local_168);
        }
        else {
                    /* try { // try from 001f39d0 to 001f39d7 has its CatchHandler @ 001f3e69 */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_e8);
        }
      }
                    /* try { // try from 001f39d8 to 001f39ef has its CatchHandler @ 001f3e64 */
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_78);
    }
                    /* try { // try from 001f3c78 to 001f3cc3 has its CatchHandler @ 001f3e2f */
    core::ptr::
    drop_in_place<core::iter::adapters::enumerate::Enumerate<std::io::Split<alloc::boxed::Box<dyn_std::io::BufRead>>>>
              (local_108,local_100);
    local_110[2] = local_a8;
    *local_110 = local_b8;
    local_110[1] = uStack_b0;
  }
  return local_110;
}