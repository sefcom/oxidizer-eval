undefined8 * __rustcall uu_shuf::parse_head_count(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  char local_d8 [8];
  undefined8 local_d0;
  undefined8 *local_c8;
  code *local_c0;
  undefined local_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined local_38;
  
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(local_b8);
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (&local_f0,local_b8);
  uVar2 = 0xffffffffffffffff;
  if (CONCAT44(uStack_ec,local_f0) != -0x8000000000000000) {
    do {
      local_f8 = local_e0;
      local_108 = local_f0;
      uStack_104 = uStack_ec;
      uStack_100 = uStack_e8;
      uStack_fc = uStack_e4;
                    /* try { // try from 001c1f39 to 001c1f3e has its CatchHandler @ 001c2087 */
      core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
                (local_d8,CONCAT44(uStack_e4,uStack_e8));
      uVar1 = local_d0;
      if (local_d8[0] != '\0') {
        local_50 = 0;
        local_48 = uStack_100;
        uStack_44 = uStack_fc;
        uStack_40 = (undefined4)local_f8;
        uStack_3c = local_f8._4_4_;
        local_38 = 1;
        local_c8 = &local_50;
        local_c0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
        local_80 = &PTR_DAT_00237d48;
        local_78 = 1;
        local_60 = 0;
        local_70 = &local_c8;
        local_68 = 1;
                    /* try { // try from 001c201e to 001c2032 has its CatchHandler @ 001c2080 */
        core::option::Option<T>::map_or_else(&local_98,&local_80);
        param_1[2] = local_88;
        *(undefined4 *)param_1 = local_98;
        *(undefined4 *)((long)param_1 + 4) = uStack_94;
        *(undefined4 *)(param_1 + 1) = uStack_90;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
                    /* try { // try from 001c2052 to 001c205b has its CatchHandler @ 001c207b */
        core::ptr::drop_in_place<alloc::string::String>(&local_108);
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(local_b8);
        return param_1;
      }
                    /* try { // try from 001c1f4b to 001c1f54 has its CatchHandler @ 001c2082 */
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      uVar2 = core::cmp::min_by(uVar2,uVar1);
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (&local_f0,local_b8);
    } while (CONCAT44(uStack_ec,local_f0) != -0x8000000000000000);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(local_b8);
  param_1[1] = uVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}