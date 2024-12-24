void __rustcall uu_test::parser::Parser::bang(int *param_1,long param_2)

{
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_110 [8];
  int *local_108;
  long local_100;
  long local_e8 [5];
  uint local_c0 [10];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  peek(local_e8);
  if ((local_e8[0] != 2) && ((int)local_e8[0] != 4)) {
    if ((int)local_e8[0] == 6) {
      local_148 = 1;
                    /* try { // try from 001af5eb to 001af615 has its CatchHandler @ 001af86c */
      Symbol::into_literal(local_110,&local_148);
      ::alloc::vec::Vec<T,A>::push(param_2,local_110);
      goto LAB_001af7cb;
    }
                    /* try { // try from 001af6a4 to 001af6fc has its CatchHandler @ 001af86c */
    _<core::iter::adapters::peekable::Peekable<I>as_core::clone::Clone>::clone
              (&local_148,param_2 + 0x18);
    local_48 = local_118;
    local_58 = local_128;
    uStack_54 = uStack_124;
    uStack_50 = uStack_120;
    uStack_4c = uStack_11c;
    local_68 = local_138;
    iStack_64 = iStack_134;
    iStack_60 = iStack_130;
    iStack_5c = iStack_12c;
    local_78 = (int)local_148;
    uStack_74 = local_148._4_4_;
    iStack_70 = iStack_140;
    iStack_6c = iStack_13c;
    local_40 = 4;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (local_110,&local_78);
    if ((((local_100 == 3) && (*local_108 == 3)) && (local_108[10] == 2)) && (local_108[0x14] == 3))
    {
                    /* try { // try from 001af71b to 001af76c has its CatchHandler @ 001af83e */
      expr(&local_148,param_2);
      if ((int)local_148 != 7) {
LAB_001af7e9:
        param_1[4] = local_138;
        param_1[5] = iStack_134;
        param_1[6] = iStack_130;
        param_1[7] = iStack_12c;
        *param_1 = (int)local_148;
        param_1[1] = local_148._4_4_;
        param_1[2] = iStack_140;
        param_1[3] = iStack_13c;
                    /* try { // try from 001af7f9 to 001af828 has its CatchHandler @ 001af86c */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(local_110);
        goto LAB_001af829;
      }
      local_148 = 1;
      ::alloc::vec::Vec<T,A>::push(param_2,&local_148);
    }
    else {
      term(&local_148,param_2);
      if ((int)local_148 != 7) goto LAB_001af7e9;
      local_148 = 1;
      ::alloc::vec::Vec<T,A>::push(param_2,&local_148);
    }
                    /* try { // try from 001af76d to 001af776 has its CatchHandler @ 001af86c */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_test::parser::Symbol>>(local_110);
    goto LAB_001af7cb;
  }
  _<core::iter::adapters::peekable::Peekable<I>as_core::clone::Clone>::clone
            (&local_148,param_2 + 0x18);
                    /* try { // try from 001af616 to 001af634 has its CatchHandler @ 001af84d */
  _<core::iter::adapters::peekable::Peekable<I>as_core::iter::traits::iterator::Iterator>::nth
            (local_110,&local_148);
  Symbol::new(local_c0,local_110);
                    /* try { // try from 001af635 to 001af69a has its CatchHandler @ 001af85a */
  core::ptr::
  drop_in_place<core::iter::adapters::peekable::Peekable<alloc::vec::into_iter::IntoIter<std::ffi::os_str::OsString>>>
            (&local_148);
  if ((local_c0[0] | 2) == 6) {
    next_token(&local_148,param_2);
    Symbol::into_literal(local_38,&local_148);
    literal(&local_148,param_2,local_38);
    if ((int)local_148 != 7) {
LAB_001af7de:
      local_98 = (int)local_148;
      iStack_94 = local_148._4_4_;
      iStack_90 = iStack_140;
      iStack_8c = iStack_13c;
      local_88 = local_138;
      iStack_84 = iStack_134;
      iStack_80 = iStack_130;
      iStack_7c = iStack_12c;
LAB_001af815:
      param_1[4] = local_88;
      param_1[5] = iStack_84;
      param_1[6] = iStack_80;
      param_1[7] = iStack_7c;
      *param_1 = local_98;
      param_1[1] = iStack_94;
      param_1[2] = iStack_90;
      param_1[3] = iStack_8c;
      core::ptr::drop_in_place<uu_test::parser::Symbol>(local_c0);
LAB_001af829:
      core::ptr::drop_in_place<uu_test::parser::Symbol>(local_e8);
      return;
    }
    local_148 = 1;
    ::alloc::vec::Vec<T,A>::push(param_2,&local_148);
  }
  else {
    local_148 = 1;
                    /* try { // try from 001af781 to 001af7b7 has its CatchHandler @ 001af85a */
    Symbol::into_literal(local_110,&local_148);
    literal(&local_98,param_2,local_110);
    if (local_98 != 7) goto LAB_001af815;
    maybe_boolop(&local_148,param_2);
    if ((int)local_148 != 7) goto LAB_001af7de;
  }
                    /* try { // try from 001af7be to 001af7ca has its CatchHandler @ 001af86c */
  core::ptr::drop_in_place<uu_test::parser::Symbol>(local_c0);
LAB_001af7cb:
  core::ptr::drop_in_place<uu_test::parser::Symbol>(local_e8);
  param_1[0] = 7;
  param_1[1] = 0;
  return;
}