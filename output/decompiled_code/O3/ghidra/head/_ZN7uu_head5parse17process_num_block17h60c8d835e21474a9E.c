void __rustcall
uu_head::parse::process_num_block
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  bool bVar4;
  ulong *local_108;
  code *pcStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  char local_70 [8];
  ulong local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str(local_70);
  if (local_70[0] == '\0') {
    local_88 = local_68;
    local_80 = local_68;
    local_d0 = 0;
    local_90 = 0;
    bVar4 = false;
    bVar3 = false;
LAB_001be5dc:
    if (0x18 < param_4 - 0x62U) {
      if (param_4 != 0) goto switchD_001be5ee_caseD_64;
      goto LAB_001be673;
    }
    switch(param_4) {
    case 0x62:
      local_d0 = 1;
      local_98 = 0x200;
      break;
    case 99:
      local_98 = 1;
      local_d0 = 1;
      break;
    default:
switchD_001be5ee_caseD_64:
      param_1[1] = 0;
      *(undefined *)(param_1 + 2) = 0;
      goto LAB_001be977;
    case 0x6b:
      local_d0 = 1;
      local_98 = 0x400;
      break;
    case 0x6d:
      local_d0 = 1;
      local_98 = 0x100000;
      break;
    case 0x71:
      _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(param_5);
      bVar3 = true;
      bVar4 = false;
      param_4 = extraout_EDX_00;
      if (extraout_EDX_00 == 0x110000) {
        bVar4 = false;
        goto LAB_001be6fb;
      }
      goto LAB_001be5dc;
    case 0x76:
      goto switchD_001be5ee_caseD_76;
    case 0x7a:
      local_90 = CONCAT71((int7)((ulong)((long)&switchD_001be5ee::switchdataD_0011e090 +
                                        (long)(int)(&switchD_001be5ee::switchdataD_0011e090)
                                                   [param_4 - 0x62U]) >> 8),1);
    }
LAB_001be673:
    _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(param_5);
    param_4 = extraout_EDX_01;
    if (extraout_EDX_01 == 0x110000) {
      local_e8 = 0;
      local_e0 = 8;
      local_d8 = 0;
      if (bVar3) {
LAB_001be6fb:
        local_d8 = 0;
        local_e0 = 8;
                    /* try { // try from 001be6fb to 001be7ee has its CatchHandler @ 001be990 */
        local_e8 = 0;
        std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-q",2);
        local_f8 = local_b8;
        ::alloc::vec::Vec<T,A>::push(&local_e8,&local_108);
      }
      if (bVar4) goto LAB_001be738;
      goto LAB_001be76f;
    }
    goto LAB_001be5dc;
  }
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 1;
LAB_001be977:
  *param_1 = 1;
  return;
switchD_001be5ee_caseD_76:
  _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(param_5);
  bVar4 = true;
  bVar3 = false;
  param_4 = extraout_EDX;
  if (extraout_EDX == 0x110000) goto LAB_001be6c0;
  goto LAB_001be5dc;
LAB_001be6c0:
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
LAB_001be738:
  std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-v",2);
  local_f8 = local_b8;
  ::alloc::vec::Vec<T,A>::push(&local_e8,&local_108);
LAB_001be76f:
  if ((local_90 & 1) != 0) {
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-z",2);
    local_f8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e8,&local_108);
  }
  if (local_d0 == 1) {
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-c",2);
    local_f8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e8,&local_108);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_88;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_98;
    local_78 = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      param_1[1] = 0;
      *(undefined *)(param_1 + 2) = 1;
      *param_1 = 1;
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_e8);
      return;
    }
    local_108 = &local_78;
    pcStack_100 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_c8 = &DAT_00115330;
    uStack_c0 = 1;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = (undefined *)&local_108;
    core::option::Option<T>::map_or_else(local_60,&local_c8);
    local_b8 = (undefined *)local_50;
    ::alloc::vec::Vec<T,A>::push(&local_e8,&local_c8);
  }
  else {
                    /* try { // try from 001be824 to 001be968 has its CatchHandler @ 001be990 */
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-n",2);
    local_f8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e8,&local_108);
    local_108 = &local_80;
    pcStack_100 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_c8 = &DAT_00115330;
    uStack_c0 = 1;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = (undefined *)&local_108;
    core::option::Option<T>::map_or_else(local_48,&local_c8);
    local_b8 = (undefined *)local_38;
    ::alloc::vec::Vec<T,A>::push(&local_e8,&local_c8);
  }
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (param_1 + 1,&local_e8);
  goto LAB_001be977;
}