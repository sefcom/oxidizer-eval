void __rustcall
uu_numfmt::format::format_and_print_whitespace
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined4 *puVar6;
  ulong uVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  undefined **local_150;
  undefined8 local_148;
  long **local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  code *local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  long *local_d0;
  code *local_c8;
  undefined4 *puStack_c0;
  code *local_b8;
  long *local_b0;
  code *local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined local_60 [48];
  
  local_120 = param_1;
  core::iter::traits::iterator::Iterator::zip(local_60);
  _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::next
            (&local_a0,local_60);
  if (local_98 != 0) {
    uVar9 = *(undefined8 *)(param_4 + 0x60);
    uVar11 = *(undefined8 *)(param_4 + 0x68);
    lVar1 = *(long *)(param_4 + 0xb8);
    local_e8 = uVar11;
    do {
      uVar7 = local_a0;
      local_118 = local_98;
      local_110 = local_90;
      local_e0 = local_88;
      uStack_dc = uStack_84;
      uStack_d8 = uStack_80;
      uStack_d4 = uStack_7c;
      cVar8 = uucore::features::ranges::contain(uVar9,uVar11,local_a0);
      lVar3 = local_110;
      if (cVar8 == '\0') {
        local_d0 = &local_118;
        local_c8 = _<&T_as_core::fmt::Display>::fmt;
        puStack_c0 = &local_e0;
        local_b8 = _<&T_as_core::fmt::Display>::fmt;
        local_150 = (undefined **)&DAT_0011a370;
        local_148 = 2;
        uStack_130 = 0;
        local_140 = &local_d0;
        local_138 = 2;
        std::io::stdio::_print(&local_150);
      }
      else {
        lVar10 = local_110;
        if (1 < uVar7) {
          local_150 = &PTR_s_KMGTPEZY_00235bc8;
          local_148 = 1;
          local_140 = (long **)&DAT_00000008;
          local_138 = 0;
          uStack_130 = 0;
          std::io::stdio::_print(&local_150);
          lVar4 = local_110;
          lVar2 = local_118;
          auVar12 = core::str::traits::
                    _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                    ::get(1,local_118,local_110);
          lVar10 = auVar12._8_8_;
          uVar11 = local_e8;
          if (auVar12._0_8_ == 0) {
            uVar9 = core::str::slice_error_fail
                              (lVar2,lVar4,1,lVar4,&PTR_s_src_uu_numfmt_src_format_rs_00235bd8);
                    /* catch() { ... } // from try @ 001c4f54 with catch @ 001c4ffb */
                    /* try { // try from 001c4ffe to 001c500a has its CatchHandler @ 001c5013 */
            core::ptr::drop_in_place<alloc::string::String>(&local_78);
            _Unwind_Resume(uVar9);
            return;
          }
        }
        format_string(&local_d0,CONCAT44(uStack_dc,local_e0),CONCAT44(uStack_d4,uStack_d8),param_4,
                      lVar1 == 0 && lVar3 != 0,lVar10 + CONCAT44(uStack_d4,uStack_d8));
        local_108 = local_c8;
        pcVar5 = local_108;
        uStack_100 = puStack_c0;
        puVar6 = uStack_100;
        local_f8 = local_b8;
        if (local_d0 != (long *)0x0) {
          local_120[2] = local_b8;
          *local_120 = local_c8;
          local_120[1] = puStack_c0;
          return;
        }
        local_68 = local_b8;
        local_108._0_4_ = SUB84(local_c8,0);
        local_108._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
        uStack_100._0_4_ = SUB84(puStack_c0,0);
        uStack_100._4_4_ = (undefined4)((ulong)puStack_c0 >> 0x20);
        local_78._0_4_ = (undefined4)local_108;
        local_78._4_4_ = local_108._4_4_;
        uStack_70 = (undefined4)uStack_100;
        uStack_6c = uStack_100._4_4_;
        local_a8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_150 = (undefined **)&DAT_00116000;
        local_148 = 1;
        uStack_130 = 0;
        local_140 = &local_b0;
        local_138 = 1;
                    /* try { // try from 001c4f54 to 001c4f5e has its CatchHandler @ 001c4ffb */
        local_108 = pcVar5;
        uStack_100 = puVar6;
        local_b0 = &local_78;
        std::io::stdio::_print(&local_150);
        core::ptr::drop_in_place<alloc::string::String>(&local_78);
      }
      _<core::iter::adapters::zip::Zip<A,B>as_core::iter::adapters::zip::ZipImpl<A,B>>::next
                (&local_a0,local_60);
    } while (local_98 != 0);
  }
  local_150 = &PTR_DAT_00235ba0;
  local_148 = 1;
  local_140 = (long **)0x8;
  local_138 = 0;
  uStack_130 = 0;
  std::io::stdio::_print(&local_150);
  *local_120 = 0x8000000000000000;
  return;
}