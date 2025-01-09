void __rustcall
uu_split::strategy::NumberType::from(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined auVar6 [16];
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b0;
  ulong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined local_90 [8];
  undefined8 *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined local_68 [48];
  undefined2 local_38;
  
  _<char_as_core::str::pattern::Pattern>::into_searcher(local_68);
  local_78 = 0;
  local_38 = 1;
  local_70 = param_3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_90,&local_78);
  if (local_80 == 3) {
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                      (*local_88,local_88[1],&DAT_001220a0,1);
    if (cVar3 == '\0') {
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (*local_88,local_88[1],&DAT_0012209f,1);
      if (cVar3 == '\0') goto LAB_001d6a9c;
      uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[4],local_88[5]);
      if (local_e8 == 3) {
        uVar5 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88 + 4,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        uVar5 = local_a8;
        if (local_b0 != 2) goto LAB_001d6cf0;
      }
      uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[2],local_88[3]);
      if (local_e8 == 3) {
        local_a8 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88 + 2,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        if (local_b0 != 2) goto LAB_001d6e29;
      }
      if (local_a8 - 1 < uVar5) {
        param_1[1] = 5;
        goto LAB_001d6dfd;
      }
      _<T_as_alloc::string::ToString>::to_string(&local_108,local_88 + 2);
    }
    else {
      uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[4],local_88[5]);
      if (local_e8 == 3) {
        uVar5 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88 + 4,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        uVar5 = local_a8;
        if (local_b0 != 2) {
LAB_001d6cf0:
          *(undefined4 *)(param_1 + 2) = local_c8;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
          *(undefined4 *)(param_1 + 3) = uStack_c0;
          *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
          *param_1 = local_b0;
          param_1[1] = local_a8;
          goto LAB_001d6e0d;
        }
      }
      uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[2],local_88[3]);
      if (local_e8 != 3) {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88 + 2,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        if (local_b0 == 2) goto LAB_001d6bf7;
        goto LAB_001d6e29;
      }
      local_a8 = CONCAT44(uStack_dc,uStack_e0);
LAB_001d6bf7:
      if (local_a8 - 1 < uVar5) {
        param_1[1] = 3;
        goto LAB_001d6dfd;
      }
      _<T_as_alloc::string::ToString>::to_string(&local_108,local_88 + 2);
    }
LAB_001d6e53:
    param_1[3] = CONCAT44(uStack_f4,local_f8);
    *(int *)(param_1 + 1) = local_108;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
    *(undefined4 *)(param_1 + 2) = uStack_100;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
    *param_1 = 1;
    goto LAB_001d6e0d;
  }
  if (local_80 == 2) {
    uVar1 = *local_88;
    uVar2 = local_88[1];
    local_108 = 0;
    auVar6 = core::char::methods::encode_utf8_raw(0x6c,&local_108);
    cVar3 = core::slice::_<impl[T]>::starts_with(uVar1,uVar2,auVar6._0_8_,auVar6._8_8_);
    if (cVar3 == '\0') {
      uVar1 = *local_88;
      uVar2 = local_88[1];
      local_108 = 0;
      auVar6 = core::char::methods::encode_utf8_raw(0x72,&local_108);
      cVar3 = core::slice::_<impl[T]>::starts_with(uVar1,uVar2,auVar6._0_8_,auVar6._8_8_);
      if (cVar3 != '\0') goto LAB_001d691c;
      uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[2],local_88[3]);
      if (local_e8 == 3) {
        uVar5 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88 + 2,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        uVar5 = local_a8;
        if (local_b0 != 2) goto LAB_001d6cf0;
      }
      uucore::parser::parse_size::parse_size_u64(&local_e8,*local_88,local_88[1]);
      if (local_e8 == 3) {
        local_a8 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        if (local_b0 != 2) goto LAB_001d6e29;
      }
      if (uVar5 <= local_a8 - 1) {
                    /* try { // try from 001d6e3b to 001d6e52 has its CatchHandler @ 001d6e6d */
        _<T_as_alloc::string::ToString>::to_string(&local_108,local_88);
        goto LAB_001d6e53;
      }
      param_1[1] = 1;
LAB_001d6dfd:
      param_1[2] = local_a8;
      param_1[3] = uVar5;
    }
    else {
LAB_001d691c:
      cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (*local_88,local_88[1],&DAT_001220a0,1);
      if (cVar3 == '\0') {
        cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (*local_88,local_88[1],&DAT_0012209f,1);
        if (cVar3 == '\0') goto LAB_001d6a9c;
        uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[2],local_88[3]);
        if (local_e8 == 3) {
          local_a8 = CONCAT44(uStack_dc,uStack_e0);
          param_1[1] = 4;
        }
        else {
          local_f8 = local_d8;
          uStack_f4 = uStack_d4;
          uStack_f0 = uStack_d0;
          uStack_ec = uStack_cc;
          local_108 = local_e8;
          uStack_104 = uStack_e4;
          uStack_100 = uStack_e0;
          uStack_fc = uStack_dc;
          from::___closure__(&local_b0,local_88 + 2,&local_108);
          local_c8 = local_a0;
          uStack_c4 = uStack_9c;
          uStack_c0 = uStack_98;
          uStack_bc = uStack_94;
          if (local_b0 != 2) goto LAB_001d6e29;
          param_1[1] = 4;
        }
      }
      else {
        uucore::parser::parse_size::parse_size_u64(&local_e8,local_88[2],local_88[3]);
        if (local_e8 == 3) {
          local_a8 = CONCAT44(uStack_dc,uStack_e0);
          param_1[1] = 2;
        }
        else {
          local_f8 = local_d8;
          uStack_f4 = uStack_d4;
          uStack_f0 = uStack_d0;
          uStack_ec = uStack_cc;
          local_108 = local_e8;
          uStack_104 = uStack_e4;
          uStack_100 = uStack_e0;
          uStack_fc = uStack_dc;
          from::___closure__(&local_b0,local_88 + 2,&local_108);
          local_c8 = local_a0;
          uStack_c4 = uStack_9c;
          uStack_c0 = uStack_98;
          uStack_bc = uStack_94;
          if (local_b0 != 2) {
LAB_001d6e29:
            *(undefined4 *)(param_1 + 2) = local_c8;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_c4;
            *(undefined4 *)(param_1 + 3) = uStack_c0;
            *(undefined4 *)((long)param_1 + 0x1c) = uStack_bc;
            *param_1 = local_b0;
            param_1[1] = local_a8;
            goto LAB_001d6e0d;
          }
          param_1[1] = 2;
        }
      }
LAB_001d6a4a:
      param_1[2] = local_a8;
    }
    lVar4 = 2;
  }
  else {
    if (local_80 == 1) {
                    /* try { // try from 001d6898 to 001d6dd1 has its CatchHandler @ 001d6e6d */
      uucore::parser::parse_size::parse_size_u64(&local_e8,*local_88,local_88[1]);
      if (local_e8 == 3) {
        local_a8 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        local_f8 = local_d8;
        uStack_f4 = uStack_d4;
        uStack_f0 = uStack_d0;
        uStack_ec = uStack_cc;
        local_108 = local_e8;
        uStack_104 = uStack_e4;
        uStack_100 = uStack_e0;
        uStack_fc = uStack_dc;
        from::___closure__(&local_b0,local_88,&local_108);
        local_c8 = local_a0;
        uStack_c4 = uStack_9c;
        uStack_c0 = uStack_98;
        uStack_bc = uStack_94;
        if (local_b0 != 2) goto LAB_001d6e29;
      }
      if (local_a8 != 0) {
        param_1[1] = 0;
        goto LAB_001d6a4a;
      }
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,param_2,param_3);
    }
    else {
LAB_001d6a9c:
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_108,param_2,param_3);
    }
    param_1[3] = CONCAT44(uStack_f4,local_f8);
    *(int *)(param_1 + 1) = local_108;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
    *(undefined4 *)(param_1 + 2) = uStack_100;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
    lVar4 = 0;
  }
  *param_1 = lVar4;
LAB_001d6e0d:
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(local_90);
  return;
}