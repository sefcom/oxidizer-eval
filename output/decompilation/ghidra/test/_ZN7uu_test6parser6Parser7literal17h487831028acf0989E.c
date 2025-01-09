void __rustcall
uu_test::parser::Parser::literal(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *local_e8;
  code *local_e0;
  int local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined local_b0 [32];
  undefined8 local_90;
  int local_88 [10];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  Symbol::into_literal(&local_118,param_3);
  ::alloc::vec::Vec<T,A>::push(param_2,&local_118);
  peek(local_88,param_2);
  if (local_88[0] == 4) {
                    /* try { // try from 001afa99 to 001afaa8 has its CatchHandler @ 001afc07 */
    next_token(local_b0,param_2);
                    /* try { // try from 001afaa9 to 001afab5 has its CatchHandler @ 001afbf8 */
    next_token(&local_d8,param_2);
    if (local_d8 == 6) {
      local_e0 = _<uu_test::parser::Symbol_as_core::fmt::Display>::fmt;
      local_118 = &DAT_00113dc0;
      uStack_110 = 1;
      local_f8 = 0;
      local_108 = &local_e8;
      uStack_100 = 1;
                    /* try { // try from 001afb02 to 001afb11 has its CatchHandler @ 001afbe7 */
      local_e8 = local_b0;
      core::option::Option<T>::map_or_else(&local_60,&local_118);
      param_1[3] = local_50;
      *(undefined4 *)(param_1 + 1) = local_60;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_5c;
      *(undefined4 *)(param_1 + 2) = uStack_58;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_54;
      *param_1 = 3;
                    /* try { // try from 001afb31 to 001afb3a has its CatchHandler @ 001afbf8 */
      core::ptr::drop_in_place<uu_test::parser::Symbol>(&local_d8);
                    /* try { // try from 001afb3b to 001afb44 has its CatchHandler @ 001afc07 */
      core::ptr::drop_in_place<uu_test::parser::Symbol>(local_b0);
      core::ptr::drop_in_place<uu_test::parser::Symbol>(local_88);
      return;
    }
    local_28 = local_b8;
    local_38 = local_c8;
    uStack_34 = uStack_c4;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
    local_48 = local_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
                    /* try { // try from 001afb7e to 001afb98 has its CatchHandler @ 001afbf6 */
    Symbol::into_literal(&local_118,&local_48);
    ::alloc::vec::Vec<T,A>::push(param_2,&local_118);
    local_f8 = local_90;
                    /* try { // try from 001afbb9 to 001afbc3 has its CatchHandler @ 001afbe5 */
    ::alloc::vec::Vec<T,A>::push(param_2,&local_118);
  }
  core::ptr::drop_in_place<uu_test::parser::Symbol>(local_88);
  *param_1 = 7;
  return;
}