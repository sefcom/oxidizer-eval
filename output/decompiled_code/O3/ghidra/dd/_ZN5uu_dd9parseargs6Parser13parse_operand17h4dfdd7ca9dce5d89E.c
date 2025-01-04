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
LAB_001d3483:
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1 + 1,param_3,param_4);
    *param_1 = 0;
    return;
  }
  local_68 = param_2;
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cb3,2);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,local_40,local_38);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) {
LAB_001d329b:
      param_1[2] = CONCAT71(uStack_77,uStack_78);
      param_1[3] = CONCAT71(uStack_6f,uStack_70);
      *param_1 = local_88;
      param_1[1] = lVar3;
      return;
    }
    *local_68 = 1;
    local_68[1] = lVar3;
    goto LAB_001d3200;
  }
  local_58 = local_40;
  local_60 = local_38;
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cb5,3);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,local_58,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d329b;
    local_68[6] = 1;
    local_68[7] = lVar3;
    goto LAB_001d3200;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00118ed4,4);
  uVar1 = local_58;
  if (cVar2 != '\0') {
    *(undefined *)(local_68 + 0x18) = 1;
    parse_conv_flags(&local_88,local_68,local_58,local_60);
    goto LAB_001d30d6;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cb8,5);
  if (cVar2 != '\0') {
    parse_n(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    lVar4 = CONCAT71(uStack_77,uStack_78);
    if (local_88 != 0xe) goto LAB_001d3414;
    local_68[0xc] = lVar3;
    local_68[0xd] = lVar4;
    goto LAB_001d3200;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cbd,3);
  if (cVar2 != '\0') {
    parse_bytes(&local_88,uVar1,local_60);
    lVar3 = CONCAT71(uStack_7f,uStack_80);
    if (local_88 != 0xe) goto LAB_001d329b;
    local_68[2] = 1;
    local_68[3] = lVar3;
    goto LAB_001d3200;
  }
  cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cc0,2);
  if (cVar2 == '\0') {
    cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cc2,5);
    if (cVar2 == '\0') {
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cc7,3)
      ;
      if (cVar2 != '\0') {
        parse_bytes(&local_88,uVar1,local_60);
        lVar3 = CONCAT71(uStack_7f,uStack_80);
        if (local_88 != 0xe) goto LAB_001d329b;
        local_68[4] = 1;
        local_68[5] = lVar3;
        goto LAB_001d3200;
      }
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122cca,2)
      ;
      if (cVar2 != '\0') {
        _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_88,uVar1,local_60);
        plVar5 = local_68 + 0x11;
                    /* try { // try from 001d32ee to 001d32f5 has its CatchHandler @ 001d34c7 */
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar5);
        goto LAB_001d31ee;
      }
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(local_50,local_48,&DAT_00122ccc,5)
      ;
      if (cVar2 == '\0') {
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (local_50,local_48,&DAT_00118ec0,4);
        if ((cVar2 == '\0') &&
           (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_50,local_48,&DAT_00122cd1,5), cVar2 == '\0')) {
          cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                            (local_50,local_48,&DAT_00118e98,4);
          if ((cVar2 == '\0') &&
             (cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                                (local_50,local_48,&DAT_00122cd6,5), cVar2 == '\0')) {
            cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                              (local_50,local_48,&DAT_00122cdb,6);
            if (cVar2 == '\0') goto LAB_001d3483;
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
            if (local_88 != 0xe) goto LAB_001d3414;
            local_68[8] = lVar3;
            local_68[9] = lVar4;
          }
        }
        else {
          parse_n(&local_88,uVar1,local_60);
          lVar3 = CONCAT71(uStack_7f,uStack_80);
          lVar4 = CONCAT71(uStack_77,uStack_78);
          if (local_88 != 0xe) {
LAB_001d3414:
            *param_1 = local_88;
            param_1[1] = lVar3;
            param_1[2] = lVar4;
            param_1[3] = CONCAT71(uStack_6f,uStack_70);
            return;
          }
          local_68[10] = lVar3;
          local_68[0xb] = lVar4;
        }
        goto LAB_001d3200;
      }
      parse_output_flags(&local_88,local_68,uVar1,local_60);
    }
    else {
      parse_input_flags(&local_88,local_68,uVar1,local_60);
    }
LAB_001d30d6:
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
                    /* try { // try from 001d31e6 to 001d31ed has its CatchHandler @ 001d34c9 */
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(plVar5);
LAB_001d31ee:
    plVar5[2] = CONCAT71(uStack_77,uStack_78);
    *plVar5 = local_88;
    plVar5[1] = CONCAT71(uStack_7f,uStack_80);
  }
LAB_001d3200:
  *param_1 = 0xe;
  return;
}