void __rustcall uu_test::parser::Parser::lparen(int *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  long *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 uStack_130;
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
                    /* try { // try from 001af0db to 001af3a5 has its CatchHandler @ 001af3e5 */
    Symbol::into_literal(&local_110,&local_178);
    literal(&local_148,param_2,&local_110);
    if ((int)local_148 != 7) {
      *(ulong *)(param_1 + 4) = CONCAT44(iStack_134,iStack_138);
      *(undefined8 *)(param_1 + 6) = uStack_130;
      *param_1 = (int)local_148;
      param_1[1] = local_148._4_4_;
      param_1[2] = iStack_140;
      param_1[3] = iStack_13c;
      goto LAB_001af3ce;
    }
    break;
  case 1:
    local_148 = local_120;
    local_110 = &local_148;
    local_108 = _<&T_as_core::fmt::Display>::fmt;
    local_178 = (long *)&DAT_00113dc0;
    local_170 = 1;
    local_158 = 0;
    uStack_168 = &local_110;
    local_160 = 1;
    core::option::Option<T>::map_or_else(&local_e8,&local_178);
    *(undefined8 *)(param_1 + 6) = local_d8;
    param_1[2] = local_e8;
    param_1[3] = iStack_e4;
    param_1[4] = iStack_e0;
    param_1[5] = iStack_dc;
    param_1[0] = 3;
    param_1[1] = 0;
    goto LAB_001af3ce;
  case 2:
    if (((*(int *)local_120 != 4) || (*(int *)(local_120 + 5) != 3)) ||
       (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                          (local_120[7],local_120[8]), cVar1 == '\0')) {
      if ((*(int *)(local_120 + 5) != 3) ||
         (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                            (local_120[7],local_120[8]), cVar1 == '\0')) {
        if (*(int *)local_120 != 4) goto switchD_001af0d1_caseD_4;
LAB_001af344:
        local_178 = (long *)0x0;
        Symbol::into_literal(&local_110,&local_178);
        literal(&local_148,param_2,&local_110);
        goto LAB_001af36b;
      }
LAB_001af300:
      next_token(local_a8,param_2);
      literal(&local_178,param_2,local_a8);
      if (local_178 == (long *)&DAT_00000007) {
        expect(&local_178,param_2);
        goto LAB_001af3a6;
      }
      goto LAB_001af3b9;
    }
LAB_001af265:
    local_178 = (long *)0x0;
    Symbol::into_literal(&local_110,&local_178);
    literal(&local_148,param_2,&local_110);
LAB_001af36b:
    if (local_148 == (long *)&DAT_00000007) break;
    *(undefined8 *)(param_1 + 6) = uStack_130;
    plVar2 = local_148;
    goto LAB_001af3c7;
  case 3:
    if (*local_120 == 4) {
      if ((*(int *)(local_120 + 5) == 3) &&
         (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                            (local_120[7],local_120[8]), cVar1 != '\0')) goto LAB_001af265;
LAB_001af291:
      if (local_120[5] == 3) {
        cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                          (local_120[7],local_120[8]);
        if (cVar1 != '\0') goto LAB_001af300;
      }
      else if ((int)local_120[5] == 4) {
        if (*(int *)local_120 != 4) goto switchD_001af0d1_caseD_4;
        next_token(local_80,param_2);
        literal(&local_178,param_2,local_80);
        if (local_178 != (long *)&DAT_00000007) goto LAB_001af3b9;
        expect(&local_178,param_2);
        goto LAB_001af3a6;
      }
      if (*local_120 == 4) goto LAB_001af344;
      goto switchD_001af0d1_caseD_4;
    }
    if ((((int)*local_120 != 5) || (*(int *)(local_120 + 10) != 3)) ||
       (cVar1 = _<std::ffi::os_str::OsString_as_core::cmp::PartialEq<str>>::eq
                          (local_120[0xc],local_120[0xd]), cVar1 == '\0')) goto LAB_001af291;
    next_token(local_d0,param_2);
    uop(param_2,local_d0);
    expect(&local_178,param_2);
LAB_001af3a6:
    if (local_178 != (long *)&DAT_00000007) goto LAB_001af3b9;
    break;
  default:
switchD_001af0d1_caseD_4:
    expr(&local_178,param_2);
    if (local_178 == (long *)&DAT_00000007) {
      expect(&local_178,param_2);
      goto LAB_001af3a6;
    }
LAB_001af3b9:
    *(undefined8 *)(param_1 + 6) = local_160;
    plVar2 = local_178;
    iStack_140 = (int)local_170;
    iStack_13c = local_170._4_4_;
    iStack_138 = (int)uStack_168;
    iStack_134 = uStack_168._4_4_;
LAB_001af3c7:
    param_1[2] = iStack_140;
    param_1[3] = iStack_13c;
    param_1[4] = iStack_138;
    param_1[5] = iStack_134;
    *(long **)param_1 = plVar2;
    goto LAB_001af3ce;
  }
  param_1[0] = 7;
  param_1[1] = 0;
LAB_001af3ce:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(local_128);
  return;
}