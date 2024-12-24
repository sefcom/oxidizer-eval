void __rustcall uu_test::parser::Parser::boolop(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined8 local_20;
  
                    /* try { // try from 001afa02 to 001afa18 has its CatchHandler @ 001afad0 */
  std::sys::os_str::bytes::Slice::to_owned(&local_30,"-a",2);
  uStack_40 = local_20;
  iStack_50 = local_30;
  iStack_4c = iStack_2c;
  iStack_48 = iStack_28;
  iStack_44 = iStack_24;
  local_58 = 2;
                    /* try { // try from 001afa35 to 001afa3f has its CatchHandler @ 001afac3 */
  cVar1 = _<uu_test::parser::Symbol_as_core::cmp::PartialEq>::eq(param_3,&local_58);
  if (cVar1 == '\0') {
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&local_58);
    expr(&local_58,param_2);
  }
  else {
                    /* try { // try from 001afa44 to 001afa6b has its CatchHandler @ 001afad0 */
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&local_58);
    term(&local_58,param_2);
  }
  if ((int)local_58 == 7) {
    local_38 = param_3[4];
    local_58 = *param_3;
    iStack_50 = *(int *)(param_3 + 1);
    iStack_4c = *(undefined4 *)((long)param_3 + 0xc);
    iStack_48 = *(int *)(param_3 + 2);
    iStack_44 = *(undefined4 *)((long)param_3 + 0x14);
    uStack_40 = param_3[3];
    ::alloc::vec::Vec<T,A>::push(param_2,&local_58);
    param_1[0] = 7;
    param_1[1] = 0;
  }
  else {
    param_1[4] = iStack_48;
    param_1[5] = iStack_44;
    param_1[6] = (int)uStack_40;
    param_1[7] = uStack_40._4_4_;
    *param_1 = (int)local_58;
    param_1[1] = local_58._4_4_;
    param_1[2] = iStack_50;
    param_1[3] = iStack_4c;
    core::ptr::drop_in_place<uu_test::parser::Symbol>(param_3);
  }
  return;
}