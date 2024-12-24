void __rustcall uu_test::parser::Parser::uop(undefined8 param_1,undefined4 *param_2)

{
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_40 [40];
  
                    /* try { // try from 001afb04 to 001afb10 has its CatchHandler @ 001afbd5 */
  next_token(&local_90,param_1);
  if (local_90 == 6) {
    local_98 = *(undefined8 *)(param_2 + 8);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
                    /* try { // try from 001afb31 to 001afb4a has its CatchHandler @ 001afbc4 */
    Symbol::into_literal(local_40,&local_b8);
    ::alloc::vec::Vec<T,A>::push(param_1,local_40);
                    /* try { // try from 001afb4d to 001afb56 has its CatchHandler @ 001afbd5 */
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&local_90);
  }
  else {
    local_48 = local_70;
    local_58 = local_80;
    uStack_54 = uStack_7c;
    uStack_50 = uStack_78;
    uStack_4c = uStack_74;
    local_68 = local_90;
    uStack_64 = uStack_8c;
    uStack_60 = uStack_88;
    uStack_5c = uStack_84;
                    /* try { // try from 001afb7a to 001afbb7 has its CatchHandler @ 001afbd3 */
    Symbol::into_literal(&local_b8,&local_68);
    ::alloc::vec::Vec<T,A>::push(param_1,&local_b8);
    local_98 = *(undefined8 *)(param_2 + 8);
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    local_a8 = param_2[4];
    uStack_a4 = param_2[5];
    uStack_a0 = param_2[6];
    uStack_9c = param_2[7];
    ::alloc::vec::Vec<T,A>::push(param_1,&local_b8);
  }
  return;
}