void __rustcall uu_test::parser::Parser::lparen(int *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined local_128 [8];
  long *local_120;
  undefined8 local_118;
  undefined8 *local_110;
  code *local_108;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined local_d0 [40];
  undefined local_a8 [40];
  undefined local_80 [40];
  undefined local_58 [56];
  undefined8 local_20;
  
  _<core::iter::adapters::peekable::Peekable<I>as_core::clone::Clone>::clone
            (local_58,param_2 + 0x18);
  local_20 = 3;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (local_128,local_58);
  switch(local_118) {
  case 0:
    local_178 = (long *)0x0;
                    /* try { // try from 001af26b to 001af548 has its CatchHandler @ 001af588 */
    Symbol::into_literal(&local_110,&local_178);
    literal(&local_148,param_2,&local_110);
    if ((int)local_148 != 7) {
      iVar3 = (int)local_148;
      iVar4 = local_148._4_4_;
LAB_001af29f:
      param_1[4] = iStack_138;
      param_1[5] = iStack_134;
      param_1[6] = iStack_130;
      param_1[7] = iStack_12c;
      *param_1 = iVar3;
      param_1[1] = iVar4;
      param_1[2] = iStack_140;
      param_1[3] = iStack_13c;
      goto LAB_001af571;
    }
    goto LAB_001af553;
  case 1:
    local_148 = local_120;
    local_110 = &local_148;
    local_108 = _<&T_as_core::fmt::Display>::fmt;
    local_178 = (long *)&DAT_00113ec0;
    uStack_170 = 1;
    local_158 = 0;
    uStack_168 = &local_110;
    uStack_160 = 1;
    core::option::Option<T>::map_or_else(&local_e8,&local_178);
    *(undefined8 *)(param_1 + 6) = local_d8;
    param_1[2] = local_e8;
    param_1[3] = iStack_e4;
    param_1[4] = iStack_e0;
    param_1[5] = iStack_dc;
    param_1[0] = 3;
    param_1[1] = 0;
    goto LAB_001af571;
  case 2:
    if (((*(int *)local_120 != 4) || (*(int *)(local_120 + 5) != 3)) ||
       (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                          (local_120[7],local_120[8]), cVar1 == '\0')) {
      if ((*(int *)(local_120 + 5) != 3) ||
         (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                            (local_120[7],local_120[8]), cVar1 == '\0')) {
        if (*(int *)local_120 != 4) break;
        goto LAB_001af4e7;
      }
LAB_001af4a3:
      next_token(local_a8,param_2);
      literal(&local_178,param_2,local_a8);
      if (local_178 == (long *)&DAT_00000007) {
        expect(&local_178,param_2);
        goto LAB_001af549;
      }
      goto LAB_001af55c;
    }
LAB_001af408:
    local_178 = (long *)0x0;
    Symbol::into_literal(&local_110,&local_178);
    literal(&local_148,param_2,&local_110);
LAB_001af50e:
    if (local_148 == (long *)&DAT_00000007) goto LAB_001af553;
    *(ulong *)(param_1 + 6) = CONCAT44(iStack_12c,iStack_130);
    plVar2 = local_148;
    goto LAB_001af56a;
  case 3:
    if (*local_120 == 4) {
      if ((*(int *)(local_120 + 5) == 3) &&
         (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                            (local_120[7],local_120[8]), cVar1 != '\0')) goto LAB_001af408;
    }
    else if (((int)*local_120 == 5) &&
            ((*(int *)(local_120 + 10) == 3 &&
             (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                                (local_120[0xc],local_120[0xd]), cVar1 != '\0')))) {
      next_token(local_d0,param_2);
      uop(param_2,local_d0);
      expect(&local_178,param_2);
      if ((int)local_178 != 7) {
        iVar3 = (int)local_178;
        iVar4 = local_178._4_4_;
        iStack_140 = (int)uStack_170;
        iStack_13c = uStack_170._4_4_;
        iStack_138 = (int)uStack_168;
        iStack_134 = uStack_168._4_4_;
        iStack_130 = (int)uStack_160;
        iStack_12c = uStack_160._4_4_;
        goto LAB_001af29f;
      }
      goto LAB_001af553;
    }
    if (local_120[5] == 3) {
      cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                        (local_120[7],local_120[8]);
      if (cVar1 != '\0') goto LAB_001af4a3;
    }
    else if ((int)local_120[5] == 4) {
      if (*(int *)local_120 == 4) {
        next_token(local_80,param_2);
        literal(&local_178,param_2,local_80);
        if (local_178 == (long *)&DAT_00000007) {
          expect(&local_178,param_2);
          goto LAB_001af549;
        }
        goto LAB_001af55c;
      }
      break;
    }
    if (*local_120 == 4) {
LAB_001af4e7:
      local_178 = (long *)0x0;
      Symbol::into_literal(&local_110,&local_178);
      literal(&local_148,param_2,&local_110);
      goto LAB_001af50e;
    }
  }
  expr(&local_178,param_2);
  if (local_178 == (long *)&DAT_00000007) {
    expect(&local_178,param_2);
LAB_001af549:
    if (local_178 == (long *)&DAT_00000007) {
LAB_001af553:
      param_1[0] = 7;
      param_1[1] = 0;
      goto LAB_001af571;
    }
  }
LAB_001af55c:
  *(undefined8 *)(param_1 + 6) = uStack_160;
  plVar2 = local_178;
  iStack_140 = (int)uStack_170;
  iStack_13c = uStack_170._4_4_;
  iStack_138 = (int)uStack_168;
  iStack_134 = uStack_168._4_4_;
LAB_001af56a:
  param_1[2] = iStack_140;
  param_1[3] = iStack_13c;
  param_1[4] = iStack_138;
  param_1[5] = iStack_134;
  *(long **)param_1 = plVar2;
LAB_001af571:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(local_128);
  return;
}