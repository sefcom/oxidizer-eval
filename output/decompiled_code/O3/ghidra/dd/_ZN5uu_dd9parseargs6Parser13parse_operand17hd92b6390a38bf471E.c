void __rustcall
uu_dd::parseargs::Parser::parse_operand
          (long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long local_88;
  undefined uStack_80;
  undefined7 uStack_7f;
  undefined uStack_78;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  core::str::_<impl_str>::split_once(&local_50,param_3,param_4);
  if (local_50 == 0) {
LAB_001d35f3:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_3,param_4);
    *param_1 = 0;
    return;
  }
  local_68 = param_2;
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dab,2);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,local_40,local_38);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) {
LAB_001d340b:
      param_1[2] = CONCAT71(uStack_77,uStack_78);
      param_1[3] = CONCAT71(uStack_6f,uStack_70);
      *param_1 = local_88;
      param_1[1] = lVar3;
      return;
    }
    *local_68 = 1;
    local_68[1] = lVar3;
    goto LAB_001d3370;
  }
  local_58 = local_40;
  local_60 = local_38;
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dad,3);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,local_58,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d340b;
    local_68[6] = 1;
    local_68[7] = lVar3;
    goto LAB_001d3370;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00118fd4,4);
  uVar1 = local_58;
  if (cVar2 != '\0') {
    *(undefined *)(local_68 + 0x18) = 1;
    parse_conv_flags(&local_88,local_68,local_58,local_60);
    goto LAB_001d3246;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122db0,5);
  if (cVar2 != '\0') {
    parse_n(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    lVar4 = CONCAT71(uStack_77,uStack_78);
    if (local_88 != 0xe) goto LAB_001d3584;
    local_68[0xc] = lVar3;
    local_68[0xd] = lVar4;
    goto LAB_001d3370;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122db5,3);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d340b;
    local_68[2] = 1;
    local_68[3] = lVar3;
    goto LAB_001d3370;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122db8,2);
  if (cVar2 == '\0') {
    cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dba,5);
    if (cVar2 == '\0') {
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dbf,3)
      ;
      if (cVar2 != '\0') {
        parse_bytes(&local_88,uVar1,local_60);
        lVar3 = CONCAT71(uStack_7f,uStack_80);
        if (local_88 != 0xe) goto LAB_001d340b;
        local_68[4] = 1;
        local_68[5] = lVar3;
        goto LAB_001d3370;
      }
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dc2,2)
      ;
      if (cVar2 != '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_88,uVar1,local_60);
        plVar5 = local_68 + 0x11;
                    /* try { // try from 001d345e to 001d3465 has its CatchHandler @ 001d3637 */
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar5);
        goto LAB_001d335e;
      }
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122dc4,5)
      ;
      if (cVar2 == '\0') {
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (local_50,local_48,&DAT_00118fc0,4);
        if ((cVar2 == '\0') &&
           (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_50,local_48,&DAT_00122dc9,5), cVar2 == '\0')) {
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (local_50,local_48,&DAT_00118f98,4);
          if ((cVar2 == '\0') &&
             (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (local_50,local_48,&DAT_00122dce,5), cVar2 == '\0')) {
            cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_50,local_48,&DAT_00122dd3,6);
            if (cVar2 == '\0') goto LAB_001d35f3;
            parse_status_level(&local_88,local_58,local_60);
            if (local_88 != 0xe) {
              param_1[3] = CONCAT71(uStack_6f,uStack_70);
              *(ulong *)((long)param_1 + 9) = CONCAT17(uStack_78,uStack_7f);
              *(ulong *)((long)param_1 + 0x11) = CONCAT17(uStack_70,uStack_77);
              *param_1 = local_88;
              *(undefined *)(param_1 + 1) = uStack_80;
              return;
            }
            *(undefined *)(local_68 + 0x1a) = uStack_80;
          }
          else {
            parse_n(&local_88,uVar1,local_60);
            lVar3 = CONCAT71(uStack_7f,uStack_80);
            lVar4 = CONCAT71(uStack_77,uStack_78);
            if (local_88 != 0xe) goto LAB_001d3584;
            local_68[8] = lVar3;
            local_68[9] = lVar4;
          }
        }
        else {
          parse_n(&local_88,uVar1,local_60);
          lVar3 = CONCAT71(uStack_7f,uStack_80);
          lVar4 = CONCAT71(uStack_77,uStack_78);
          if (local_88 != 0xe) {
LAB_001d3584:
            *param_1 = local_88;
            param_1[1] = lVar3;
            param_1[2] = lVar4;
            param_1[3] = CONCAT71(uStack_6f,uStack_70);
            return;
          }
          local_68[10] = lVar3;
          local_68[0xb] = lVar4;
        }
        goto LAB_001d3370;
      }
      parse_output_flags(&local_88,local_68,uVar1,local_60);
    }
    else {
      parse_input_flags(&local_88,local_68,uVar1,local_60);
    }
LAB_001d3246:
    if (local_88 != 0xe) {
      param_1[3] = CONCAT71(uStack_6f,uStack_70);
      param_1[1] = CONCAT71(uStack_7f,uStack_80);
      param_1[2] = CONCAT71(uStack_77,uStack_78);
      *param_1 = local_88;
      return;
    }
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_88,uVar1,local_60);
    plVar5 = local_68 + 0xe;
                    /* try { // try from 001d3356 to 001d335d has its CatchHandler @ 001d3639 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar5);
LAB_001d335e:
    plVar5[2] = CONCAT71(uStack_77,uStack_78);
    *plVar5 = local_88;
    plVar5[1] = CONCAT71(uStack_7f,uStack_80);
  }
LAB_001d3370:
  *param_1 = 0xe;
  return;
}