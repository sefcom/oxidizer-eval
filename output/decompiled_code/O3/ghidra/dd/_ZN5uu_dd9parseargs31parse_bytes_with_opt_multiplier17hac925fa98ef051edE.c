void __rustcall
uu_dd::parseargs::parse_bytes_with_opt_multiplier
          (ulong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined local_d0 [8];
  undefined8 *local_c8;
  long local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined local_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68,0x78,param_2,param_3);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_d0,&local_78);
  if (local_c0 == 1) {
                    /* try { // try from 001d4a1a to 001d4a27 has its CatchHandler @ 001d4b52 */
    parse_bytes_no_x(param_1,param_2,param_3,*local_c8,local_c8[1]);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_d0);
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_98,local_d0);
    auVar5 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                       (local_98);
    if (auVar5._0_8_ == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      do {
                    /* try { // try from 001d4a70 to 001d4aa3 has its CatchHandler @ 001d4b61 */
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(auVar5._0_8_,auVar5._8_8_,"0",1)
        ;
        if (cVar2 != '\0') {
          show_zero_multiplier_warning();
        }
        parse_bytes_no_x(&local_b8,param_2,param_3,auVar5._0_8_,auVar5._8_8_);
        uVar3 = CONCAT44(uStack_ac,local_b0);
        if (local_b8 != 0xe) {
          *(undefined4 *)(param_1 + 2) = uStack_a8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_a4;
          *(undefined4 *)(param_1 + 3) = uStack_a0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_9c;
          uVar4 = local_b8;
LAB_001d4b2d:
          *param_1 = uVar4;
          param_1[1] = uVar3;
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(local_98);
          return;
        }
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar4;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar4 = SUB168(auVar5 * auVar1,0);
        if (SUB168(auVar5 * auVar1,8) != 0) {
                    /* try { // try from 001d4b06 to 001d4b15 has its CatchHandler @ 001d4b50 */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_b8,param_2,param_3);
          *(undefined4 *)(param_1 + 2) = local_b0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_ac;
          *(undefined4 *)(param_1 + 3) = uStack_a8;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_a4;
          uVar4 = 0xd;
          uVar3 = local_b8;
          goto LAB_001d4b2d;
        }
        auVar5 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::
                 next(local_98);
      } while (auVar5._0_8_ != 0);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(local_98);
    param_1[1] = uVar4;
    *param_1 = 0xe;
  }
  return;
}