void __rustcall
uu_cp::print_paths(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 **local_100;
  code *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  code *local_88;
  undefined4 *local_80;
  code *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined local_60 [32];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 != 0) {
    local_b0 = param_5;
    local_a8 = param_4;
    local_a0 = param_3;
    local_98 = param_2;
    aligned_ancestors(&local_e0);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_60,&local_e0);
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (&local_100,local_60);
    if (local_100 != (undefined8 **)0x0) {
      do {
        local_70 = local_100;
        local_68 = local_f8;
        local_40 = local_f0;
        uStack_3c = uStack_ec;
        uStack_38 = uStack_e8;
        uStack_34 = uStack_e4;
        local_90 = (long *)&local_70;
        local_88 = _<std::path::Display_as_core::fmt::Display>::fmt;
        local_80 = &local_40;
        local_78 = _<std::path::Display_as_core::fmt::Display>::fmt;
        local_e0 = &DAT_002b5878;
        local_d8 = 3;
        local_c0 = 0;
        local_c8 = 2;
        local_d0 = &local_90;
                    /* try { // try from 00205c7b to 00205c80 has its CatchHandler @ 00205d40 */
        std::io::stdio::_print(&local_e0);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_100,local_60);
      } while (local_100 != (undefined8 **)0x0);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&std::path::Path,&std::path::Path)>>
              (local_60);
    param_4 = local_a8;
    param_3 = local_a0;
    param_2 = local_98;
    param_5 = local_b0;
  }
  context_for(&local_90,param_2,param_3,param_4,param_5);
  local_f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
  local_e0 = &DAT_002b5618;
  local_d8 = 2;
  local_c0 = 0;
  local_d0 = &local_100;
  local_c8 = 1;
                    /* try { // try from 00205d0a to 00205d14 has its CatchHandler @ 00205d31 */
  local_100 = &local_90;
  std::io::stdio::_print(&local_e0);
  core::ptr::drop_in_place<alloc::string::String>(&local_90);
  return;
}