/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined  [16] __rustcall
uu_ls::display_grid(undefined8 *param_1,ushort param_2,undefined param_3,undefined8 param_4,
                   char param_5)

{
  long lVar1;
  undefined8 **ppuVar2;
  char acVar3 [4];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  long local_140;
  undefined8 *local_138;
  code *pcStack_130;
  long local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 ***local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 **local_60;
  code *local_58;
  undefined local_50 [32];
  
  if (param_2 == 0) {
    ppuVar2 = (undefined8 **)0x8000000000000000;
    local_118 = (undefined *)*param_1;
    uStack_110 = param_1[1];
    local_108 = (undefined8 **)param_1[2];
    uStack_100 = param_1[3];
    _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
              (&local_150,&local_118);
    if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) {
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_118);
    }
    else {
      local_128 = local_140;
      ppuVar2 = &local_138;
      while( true ) {
        local_58 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_e8 = (undefined **)&DAT_00123c10;
        uStack_e0 = 1;
        uStack_c8 = 0;
        local_d0 = 1;
        local_d8 = &local_60;
        local_60 = ppuVar2;
                    /* try { // try from 0022a37c to 0022a386 has its CatchHandler @ 0022a4d6 */
        lVar1 = std::io::Write::write_fmt(param_4,&local_e8);
        if (lVar1 != 0) {
          auVar7 = uucore::mods::error::
                   _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                   ::from(lVar1);
          goto LAB_0022a420;
        }
                    /* try { // try from 0022a390 to 0022a397 has its CatchHandler @ 0022a4d1 */
        core::ptr::drop_in_place<alloc::string::String>(ppuVar2);
        _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                  (&local_150,&local_118);
        if (CONCAT44(uStack_14c,local_150) == -0x8000000000000000) break;
        local_128 = local_140;
        local_e8 = &PTR_DAT_00312688;
        uStack_e0 = 1;
        local_d8 = (undefined8 ***)&DAT_00000008;
        local_d0 = 0;
        uStack_c8 = 0;
                    /* try { // try from 0022a3f8 to 0022a402 has its CatchHandler @ 0022a4d6 */
        lVar1 = std::io::Write::write_fmt(param_4,&local_e8);
        if (lVar1 != 0) {
                    /* try { // try from 0022a40c to 0022a41f has its CatchHandler @ 0022a4b1 */
          auVar7 = uucore::mods::error::
                   _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                   ::from(lVar1);
LAB_0022a420:
                    /* try { // try from 0022a426 to 0022a42f has its CatchHandler @ 0022a4af */
          core::ptr::drop_in_place<alloc::string::String>(&local_138);
          core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>
                    (&local_118);
          return auVar7;
        }
      }
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&local_118);
      local_e8 = &PTR_DAT_003125b8;
      uStack_e0 = 1;
      local_d8 = (undefined8 ***)0x8;
      local_d0 = 0;
      uStack_c8 = 0;
      lVar1 = std::io::Write::write_fmt(param_4,&local_e8);
      if (lVar1 != 0) {
        auVar7 = uucore::mods::error::
                 _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(lVar1);
        return auVar7;
      }
    }
  }
  else {
    if (param_5 == '\0') {
      core::iter::traits::iterator::Iterator::collect(&local_150);
    }
    else {
      core::iter::traits::iterator::Iterator::map(local_50);
      ::alloc::vec::in_place_collect::
      _<impl_alloc::vec::spec_from_iter::SpecFromIter<T,I>for_alloc::vec::Vec<T>>::from_iter
                (&local_150,local_50);
    }
    local_e8 = (undefined **)CONCAT44(uStack_144,uStack_148);
    uStack_e0 = (long)local_e8 + local_140 * 0x18;
                    /* try { // try from 0022a200 to 0022a226 has its CatchHandler @ 0022a4b3 */
    local_108 = (undefined8 **)
                _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                          (&local_e8);
    acVar3 = s__00123ae0;
    uVar4 = _UNK_00123ae4;
    uVar5 = _UNK_00123ae8;
    uVar6 = _UNK_00123aec;
    if ((char)local_108 != '\0') {
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_e8,&DAT_00136242,1);
      local_108 = local_d8;
      acVar3 = local_e8._0_4_;
      uVar4 = local_e8._4_4_;
      uVar5 = (undefined4)uStack_e0;
      uVar6 = uStack_e0._4_4_;
    }
    local_128 = local_140;
    uStack_100 = (ulong)param_2;
    local_f8 = CONCAT71(local_f8._1_7_,param_3);
    local_118 = (undefined *)CONCAT44(uVar4,acVar3);
    uStack_110 = CONCAT44(uVar6,uVar5);
    ppuVar2 = &local_138;
    term_grid::Grid<T>::new(&local_e8,ppuVar2,&local_118);
    pcStack_130 = _<term_grid::Grid<T>as_core::fmt::Display>::fmt;
    local_118 = &DAT_00123c10;
    uStack_110 = 1;
    local_f8 = 0;
    uStack_100 = 1;
                    /* try { // try from 0022a2bb to 0022a2d5 has its CatchHandler @ 0022a4c2 */
    local_138 = &local_e8;
    local_108 = ppuVar2;
    lVar1 = std::io::Write::write_fmt(param_4,&local_118);
    if (lVar1 != 0) {
      auVar7 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(lVar1);
      core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&local_e8);
      return auVar7;
    }
    core::ptr::drop_in_place<term_grid::Grid<alloc::string::String>>(&local_e8);
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = ppuVar2;
  return auVar7 << 0x40;
}