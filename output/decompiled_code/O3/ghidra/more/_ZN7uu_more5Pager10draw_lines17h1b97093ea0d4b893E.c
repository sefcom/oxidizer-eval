void __rustcall uu_more::Pager::draw_lines(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  long **local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *local_78;
  code *local_70;
  undefined local_68 [32];
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_b8 = param_2;
  lVar2 = crossterm::command::write_command_ansi(param_2,4);
  if (lVar2 == 0) {
    lVar2 = _<std::io::stdio::Stdout_as_std::io::Write>::flush(local_b8);
  }
  core::result::Result<T,E>::unwrap(lVar2,&PTR_DAT_00263988);
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
  local_d0 = *(long *)(param_1 + 8);
  local_c8 = local_d0 + *(long *)(param_1 + 0x10) * 0x18;
  lVar2 = *(long *)(param_1 + 0x18);
  uVar6 = (ulong)*(ushort *)(param_1 + 0x40);
  local_c0 = lVar2;
  if (uVar6 != 0) {
    if (*(char *)(param_1 + 0x43) == '\0') {
      do {
        if (local_c0 == 0) {
          lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_d0);
        }
        else {
          local_c0 = 0;
          lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::nth
                            (&local_d0);
        }
        if (lVar2 == 0) goto LAB_001dd991;
                    /* try { // try from 001dd97d to 001dd987 has its CatchHandler @ 001ddaab */
        ::alloc::vec::Vec<T,A>::push(&local_e8,lVar2);
      } while (local_d8 < uVar6);
    }
    else {
      bVar1 = false;
      lVar5 = 0;
      do {
        if (local_c0 == 0) {
          lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_d0);
        }
        else {
          local_c0 = 0;
          lVar3 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::nth
                            (&local_d0);
        }
        if (lVar3 == 0) goto LAB_001dd991;
        if (*(long *)(lVar3 + 0x10) == 0) {
          if (bVar1) {
            lVar5 = lVar5 + 1;
            *(long *)(param_1 + 0x38) = lVar5;
            lVar2 = lVar2 + 1;
            *(long *)(param_1 + 0x18) = lVar2;
          }
          else {
            bVar1 = true;
            ::alloc::vec::Vec<T,A>::push(&local_e8,lVar3);
          }
        }
        else {
          if (bVar1) {
            bVar1 = false;
          }
                    /* try { // try from 001dd8ac to 001dd92d has its CatchHandler @ 001ddaad */
          ::alloc::vec::Vec<T,A>::push(&local_e8,lVar3);
        }
      } while (local_d8 < uVar6);
    }
  }
LAB_001dd999:
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_68,&local_e8)
  ;
  lVar2 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (local_68);
  if (lVar2 != 0) {
    do {
      local_78 = &local_b0;
      local_70 = _<&T_as_core::fmt::Display>::fmt;
      local_a8 = &PTR_DAT_002639a0;
      uStack_a0 = 2;
      local_88 = 0;
      local_90 = 1;
      local_b0 = lVar2;
      local_98 = &local_78;
                    /* try { // try from 001dda37 to 001dda41 has its CatchHandler @ 001ddac9 */
      core::option::Option<T>::map_or_else(local_48,&local_a8);
      uStack_a0 = CONCAT44(uStack_3c,uStack_40);
      local_98 = (long **)local_38;
                    /* try { // try from 001dda61 to 001dda72 has its CatchHandler @ 001ddaba */
      uVar4 = _<std::io::stdio::Stdout_as_std::io::Write>::write_all(local_b8,uStack_a0);
      core::result::Result<T,E>::unwrap(uVar4,&PTR_DAT_002639c0);
                    /* try { // try from 001dda73 to 001dda7a has its CatchHandler @ 001ddac9 */
      core::ptr::drop_in_place<alloc::string::String>(&local_a8);
      lVar2 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (local_68);
    } while (lVar2 != 0);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(local_68);
  return;
LAB_001dd991:
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  goto LAB_001dd999;
}