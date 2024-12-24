void __rustcall uu_cp::Attributes::parse_iter(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_d0;
  undefined4 local_c8;
  long local_c0;
  undefined4 local_b8;
  long *local_b0;
  long local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_70;
  long local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  local_c8 = 0;
  local_d0 = 0;
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  uStack_8c = param_2[3];
  local_88 = param_2[4];
  uStack_84 = param_2[5];
  uStack_80 = param_2[6];
  uStack_7c = param_2[7];
  local_b0 = param_1;
  lVar1 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_98);
  if (lVar1 != 0) {
    do {
      uVar2 = _<&T_as_core::convert::AsRef<U>>::as_ref(lVar1);
                    /* try { // try from 00200e88 to 00200e92 has its CatchHandler @ 00200f57 */
      parse_single_string(&local_70,uVar2);
      local_c0 = local_68;
      local_b8 = local_60;
      if (local_70 != 0xd) {
        *(undefined4 *)(local_b0 + 6) = uStack_40;
        *(undefined4 *)((long)local_b0 + 0x34) = uStack_3c;
        *(undefined4 *)(local_b0 + 7) = uStack_38;
        *(undefined4 *)((long)local_b0 + 0x3c) = uStack_34;
        *(undefined4 *)((long)local_b0 + 0x24) = local_4c;
        *(undefined4 *)(local_b0 + 5) = uStack_48;
        *(undefined4 *)((long)local_b0 + 0x2c) = uStack_44;
        *(undefined4 *)(local_b0 + 6) = uStack_40;
        *(undefined4 *)((long)local_b0 + 0x14) = local_5c;
        *(undefined4 *)(local_b0 + 3) = uStack_58;
        *(undefined4 *)((long)local_b0 + 0x1c) = uStack_54;
        *(undefined4 *)(local_b0 + 4) = uStack_50;
        *(undefined4 *)(local_b0 + 2) = local_60;
        local_b0[1] = local_68;
        *local_b0 = local_70;
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&local_98)
        ;
        return;
      }
      union(&local_a4,&local_d0,&local_c0);
      local_c8 = local_9c;
      local_d0 = local_a4;
      lVar1 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (&local_98);
    } while (lVar1 != 0);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&alloc::string::String>>(&local_98);
  *(undefined4 *)(local_b0 + 2) = local_c8;
  local_b0[1] = local_d0;
  *local_b0 = 0xd;
  return;
}