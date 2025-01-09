void __rustcall
uu_head::parse::process_num_block
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  bool bVar3;
  undefined8 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  bool bVar5;
  ulong unaff_R13;
  bool bVar6;
  undefined auVar7 [12];
  ulong *local_f8;
  code *pcStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  ulong **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_98;
  ulong local_90;
  undefined8 local_88;
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
    local_90 = local_68;
    local_80 = local_68;
    bVar5 = false;
    bVar6 = false;
    bVar3 = false;
    local_88 = 0;
    local_98 = param_1;
    uVar4 = local_88;
LAB_001be44f:
    local_88 = uVar4;
    switch(param_4) {
    case 0x62:
      unaff_R13 = 0x200;
      goto LAB_001be433;
    case 99:
      bVar3 = true;
      unaff_R13 = 1;
      break;
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6c:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x77:
    case 0x78:
    case 0x79:
switchD_001be460_caseD_64:
      local_98[1] = 0;
      *(undefined *)(local_98 + 2) = 0;
      *local_98 = 1;
      return;
    case 0x6b:
      unaff_R13 = 0x400;
      goto LAB_001be433;
    case 0x6d:
      unaff_R13 = 0x100000;
LAB_001be433:
      bVar3 = true;
      break;
    case 0x71:
      auVar7 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                         (param_5);
      param_4 = auVar7._8_4_;
      bVar5 = false;
      uVar4 = CONCAT71(auVar7._1_7_,1);
      if (param_4 == 0x110000) {
        bVar5 = false;
        goto LAB_001be505;
      }
      goto LAB_001be44f;
    case 0x76:
      goto switchD_001be460_caseD_76;
    case 0x7a:
      bVar6 = true;
      break;
    default:
      if (param_4 != 0) goto switchD_001be460_caseD_64;
    }
    _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(param_5);
    param_4 = extraout_EDX;
    uVar4 = local_88;
    if (extraout_EDX == 0x110000) {
      local_e0 = 0;
      local_d8 = 8;
      local_d0 = 0;
      if ((char)local_88 != '\0') {
LAB_001be505:
                    /* try { // try from 001be505 to 001be600 has its CatchHandler @ 001be808 */
        local_d0 = 0;
        local_d8 = 8;
        local_e0 = 0;
        std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-q",2);
        local_e8 = local_b8;
        ::alloc::vec::Vec<T,A>::push(&local_e0,&local_f8);
      }
      if (bVar5) goto LAB_001be544;
      goto LAB_001be57e;
    }
    goto LAB_001be44f;
  }
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 1;
LAB_001be793:
  *param_1 = 1;
  return;
switchD_001be460_caseD_76:
  _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next(param_5);
  bVar5 = true;
  param_4 = extraout_EDX_00;
  uVar4 = 0;
  if (extraout_EDX_00 == 0x110000) goto LAB_001be7e8;
  goto LAB_001be44f;
LAB_001be7e8:
  local_e0 = 0;
  local_d8 = 8;
  local_d0 = 0;
LAB_001be544:
  std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-v",2);
  local_e8 = local_b8;
  ::alloc::vec::Vec<T,A>::push(&local_e0,&local_f8);
LAB_001be57e:
  if (bVar6) {
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-z",2);
    local_e8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e0,&local_f8);
  }
  if (bVar3) {
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-c",2);
    local_e8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e0,&local_f8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_90;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = unaff_R13;
    local_78 = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      local_98[1] = 0;
      *(undefined *)(local_98 + 2) = 1;
      *local_98 = 1;
      core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&local_e0);
      return;
    }
    local_f8 = &local_78;
    pcStack_f0 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_c8 = &DAT_00115290;
    uStack_c0 = 1;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_f8;
    core::option::Option<T>::map_or_else(local_60,&local_c8);
    local_b8 = (ulong **)local_50;
    ::alloc::vec::Vec<T,A>::push(&local_e0,&local_c8);
  }
  else {
                    /* try { // try from 001be636 to 001be77f has its CatchHandler @ 001be808 */
    std::sys::os_str::bytes::Slice::to_owned(&local_c8,"-n",2);
    local_e8 = local_b8;
    ::alloc::vec::Vec<T,A>::push(&local_e0,&local_f8);
    local_f8 = &local_80;
    pcStack_f0 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_c8 = &DAT_00115290;
    uStack_c0 = 1;
    local_a8 = 0;
    local_b0 = 1;
    local_b8 = &local_f8;
    core::option::Option<T>::map_or_else(local_48,&local_c8);
    local_b8 = (ulong **)local_38;
    ::alloc::vec::Vec<T,A>::push(&local_e0,&local_c8);
  }
  param_1 = local_98;
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
            (local_98 + 1,&local_e0);
  goto LAB_001be793;
}