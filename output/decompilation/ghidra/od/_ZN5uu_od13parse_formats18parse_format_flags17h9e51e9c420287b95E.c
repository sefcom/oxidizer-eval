undefined8 * __rustcall
uu_od::parse_formats::parse_format_flags(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong extraout_RDX;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined auVar14 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  ulong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  long local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulong local_148;
  undefined8 uStack_140;
  undefined local_138;
  ulong local_130;
  long local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong local_98;
  undefined local_90 [32];
  undefined local_70 [32];
  undefined local_50 [32];
  
  local_170 = 0;
  uStack_168 = 8;
  local_160 = 0;
  local_f8 = param_2 + param_3 * 0x18;
  bVar1 = false;
  local_100 = param_2;
LAB_001caee0:
  local_f0 = 0;
  lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::nth(&local_100);
joined_r0x001caefc:
  if (lVar7 == 0) {
    if (!bVar1) {
LAB_001cb2ec:
      if (local_160 == 0) {
        local_148 = prn_int::FORMAT_ITEM_OCT16._16_8_;
        uStack_140 = prn_int::FORMAT_ITEM_OCT16._24_8_;
        local_158 = CONCAT44(prn_int::FORMAT_ITEM_OCT16._4_4_,prn_int::FORMAT_ITEM_OCT16._0_4_);
        uStack_150 = CONCAT44(prn_int::FORMAT_ITEM_OCT16._12_4_,prn_int::FORMAT_ITEM_OCT16._8_4_);
        local_138 = 0;
                    /* try { // try from 001cb311 to 001cb34c has its CatchHandler @ 001cb3f8 */
        ::alloc::vec::Vec<T,A>::push(&local_170,&local_158);
      }
      param_1[3] = local_160;
      param_1[1] = local_170;
      param_1[2] = uStack_168;
      *param_1 = 0;
      return param_1;
    }
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_158);
    param_1[3] = local_148;
    uVar10 = (undefined4)local_158;
    uVar11 = local_158._4_4_;
    uVar12 = (undefined4)uStack_150;
    uVar13 = uStack_150._4_4_;
LAB_001cb375:
    *(undefined4 *)(param_1 + 1) = uVar10;
    *(undefined4 *)((long)param_1 + 0xc) = uVar11;
    *(undefined4 *)(param_1 + 2) = uVar12;
    *(undefined4 *)((long)param_1 + 0x14) = uVar13;
    *param_1 = 1;
    goto LAB_001cb380;
  }
  if (bVar1) {
    parse_type_string(&local_158,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
    local_198 = uStack_150;
    uVar9 = local_198;
    uStack_190 = local_148;
    uVar2 = uStack_190;
    local_188 = uStack_140;
    local_198._0_4_ = (int)uStack_150;
    local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
    uStack_190._0_4_ = (undefined4)local_148;
    uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
    local_198 = uVar9;
    uStack_190 = uVar2;
    if (local_158 != 0) {
      param_1[3] = uStack_140;
      uVar10 = (int)local_198;
      uVar11 = local_198._4_4_;
      uVar12 = (undefined4)uStack_190;
      uVar13 = uStack_190._4_4_;
      goto LAB_001cb375;
    }
    local_d8 = uStack_140;
    local_e8 = (int)local_198;
    uStack_e4 = local_198._4_4_;
    uStack_e0 = (undefined4)uStack_190;
    uStack_dc = uStack_190._4_4_;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_90,&local_e8);
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>
    ::spec_extend(&local_170,local_90);
    bVar1 = false;
  }
  else {
    uVar9 = *(ulong *)(lVar7 + 8);
    lVar7 = *(long *)(lVar7 + 0x10);
                    /* try { // try from 001caf38 to 001cafa6 has its CatchHandler @ 001cb41d */
    cVar5 = core::slice::_<impl[T]>::starts_with(uVar9,lVar7,"--",2);
    if (cVar5 == '\0') {
      local_158 = local_158 & 0xffffffff00000000;
      auVar14 = core::char::methods::encode_utf8_raw(0x2d,&local_158);
      cVar5 = core::slice::_<impl[T]>::starts_with(uVar9,lVar7,auVar14._0_8_,auVar14._8_8_);
      if (cVar5 != '\0') {
        local_128 = lVar7 + uVar9;
        local_118 = 0;
        local_110 = 1;
        local_108 = 0;
        local_120 = 1;
        local_130 = uVar9;
        bVar4 = bVar1;
LAB_001cb17d:
        do {
          bVar1 = bVar4;
          if (local_120 == 0) {
            uVar8 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::next
                              (&local_130);
            uVar9 = (ulong)uVar8;
          }
          else {
            local_120 = 0;
            lVar7 = _<core::str::iter::Chars_as_core::iter::traits::iterator::Iterator>::advance_by
                              (&local_130);
            if ((lVar7 != 0) ||
               (iVar6 = core::str::validations::next_code_point(&local_130), iVar6 == 0))
            goto LAB_001cb239;
            uVar8 = (uint)extraout_RDX;
            uVar9 = extraout_RDX;
          }
          if (uVar8 == 0x110000) goto LAB_001cb239;
          if (!bVar1) {
            uVar8 = (int)uVar9 - 0x41;
            if (uVar8 < 0x37) goto code_r0x001cb1e0;
            goto LAB_001cb1f8;
          }
                    /* try { // try from 001cb160 to 001cb230 has its CatchHandler @ 001cb40b */
          ::alloc::string::String::push(&local_118,uVar9 & 0xffffffff);
          bVar4 = bVar1;
        } while( true );
      }
    }
    else {
      if (lVar7 == 2) goto LAB_001cb2ec;
      cVar5 = core::slice::_<impl[T]>::starts_with(uVar9,lVar7,"--format=",9);
      if (cVar5 != '\0') {
        local_148 = uVar9 + lVar7;
        uStack_140 = uStack_140 & 0xffffffffffffff00;
        local_158 = 1;
        uStack_150 = uVar9;
        _<alloc::string::String_as_core::iter::traits::collect::FromIterator<char>>::from_iter
                  (&local_130,&local_158);
                    /* try { // try from 001cafb7 to 001cb02c has its CatchHandler @ 001cb3fc */
        parse_type_string(&local_158,local_128,local_120);
        local_198 = uStack_150;
        uVar2 = local_198;
        uStack_190 = local_148;
        uVar3 = uStack_190;
        local_188 = uStack_140;
        local_198._0_4_ = (int)uStack_150;
        local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
        uStack_190._0_4_ = (undefined4)local_148;
        uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
        local_198 = uVar2;
        uStack_190 = uVar3;
        if (local_158 != 0) {
          param_1[3] = uStack_140;
          *(int *)(param_1 + 1) = (int)local_198;
          *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
          *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
          *param_1 = 1;
                    /* try { // try from 001cb3bf to 001cb3f5 has its CatchHandler @ 001cb3f8 */
          core::ptr::drop_in_place<alloc::string::String>(&local_130);
          goto LAB_001cb380;
        }
        local_b8 = uStack_140;
        local_c8 = (int)local_198;
        uStack_c4 = local_198._4_4_;
        uStack_c0 = (undefined4)uStack_190;
        uStack_bc = uStack_190._4_4_;
        _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                  (local_70,&local_c8);
        _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>
        ::spec_extend(&local_170,local_70);
                    /* try { // try from 001cb02d to 001cb105 has its CatchHandler @ 001cb41d */
        core::ptr::drop_in_place<alloc::string::String>(&local_130);
      }
      cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(uVar9,lVar7,&DAT_0010e178,8);
      if (cVar5 != '\0') {
        bVar1 = true;
      }
    }
  }
  goto LAB_001cb2d0;
code_r0x001cb1e0:
  bVar4 = true;
  if ((ulong)uVar8 != 0x33) {
    if ((0x40020000042001U >> ((ulong)uVar8 & 0x3f) & 1) != 0) goto LAB_001cb239;
LAB_001cb1f8:
    od_argument_traditional_format(&local_198,uVar9 & 0xffffffff);
    bVar4 = bVar1;
    if ((int)local_198 != 3) {
      local_148 = local_188;
      uStack_140 = CONCAT44(uStack_17c,uStack_180);
      local_158 = local_198;
      uStack_150 = uStack_190;
      local_138 = 0;
      ::alloc::vec::Vec<T,A>::push(&local_170,&local_158);
    }
  }
  goto LAB_001cb17d;
LAB_001cb239:
  if (local_108 != 0) {
                    /* try { // try from 001cb24e to 001cb2b2 has its CatchHandler @ 001cb3fa */
    parse_type_string(&local_158,local_110);
    local_198 = uStack_150;
    uVar9 = local_198;
    uStack_190 = local_148;
    uVar2 = uStack_190;
    local_188 = uStack_140;
    local_198._0_4_ = (int)uStack_150;
    local_198._4_4_ = (undefined4)(uStack_150 >> 0x20);
    uStack_190._0_4_ = (undefined4)local_148;
    uStack_190._4_4_ = (undefined4)(local_148 >> 0x20);
    local_198 = uVar9;
    uStack_190 = uVar2;
    if (local_158 != 0) {
      param_1[3] = uStack_140;
      *(int *)(param_1 + 1) = (int)local_198;
      *(undefined4 *)((long)param_1 + 0xc) = local_198._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_190;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_190._4_4_;
      *param_1 = 1;
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
LAB_001cb380:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_od::parse_formats::ParsedFormatterItemInfo>>
                (&local_170);
      return param_1;
    }
    local_98 = uStack_140;
    local_a8 = (int)local_198;
    uStack_a4 = local_198._4_4_;
    uStack_a0 = (undefined4)uStack_190;
    uStack_9c = uStack_190._4_4_;
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (local_50,&local_a8);
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>
    ::spec_extend(&local_170,local_50);
    bVar1 = false;
  }
                    /* try { // try from 001cb2b6 to 001cb2c2 has its CatchHandler @ 001cb41d */
  core::ptr::drop_in_place<alloc::string::String>(&local_118);
LAB_001cb2d0:
  if (local_f0 != 0) goto LAB_001caee0;
  lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_100);
  goto joined_r0x001caefc;
}