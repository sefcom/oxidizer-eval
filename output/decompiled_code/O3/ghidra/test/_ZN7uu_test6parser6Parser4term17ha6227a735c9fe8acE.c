void __rustcall uu_test::parser::Parser::term(int *param_1,undefined8 param_2)

{
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  next_token(&local_60);
  switch(CONCAT44(uStack_5c,local_60)) {
  case 0:
                    /* try { // try from 001af0e6 to 001af0f0 has its CatchHandler @ 001af1e3 */
    lparen(&local_88,param_2);
    goto LAB_001af132;
  case 1:
                    /* try { // try from 001af127 to 001af131 has its CatchHandler @ 001af1e3 */
    bang(&local_88,param_2);
LAB_001af132:
    if (local_88 == 7) {
      param_1[0] = 7;
      param_1[1] = 0;
    }
    else {
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_74,local_78);
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_6c,uStack_70);
      *param_1 = local_88;
      param_1[1] = iStack_84;
      param_1[2] = iStack_80;
      param_1[3] = iStack_7c;
    }
    core::ptr::drop_in_place<uu_test::parser::Symbol>(&local_60);
    break;
  default:
    local_18 = local_40;
    local_28 = local_50;
    uStack_24 = uStack_4c;
    uStack_20 = uStack_48;
    uStack_1c = uStack_44;
    local_38 = local_60;
    uStack_34 = uStack_5c;
    uStack_30 = uStack_58;
    uStack_2c = uStack_54;
    literal(&local_88,param_2,&local_38);
    if (local_88 == 7) {
      param_1[0] = 7;
      param_1[1] = 0;
    }
    else {
      *(ulong *)(param_1 + 4) = CONCAT44(uStack_74,local_78);
      *(ulong *)(param_1 + 6) = CONCAT44(uStack_6c,uStack_70);
      *(ulong *)param_1 = CONCAT44(iStack_84,local_88);
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_7c,iStack_80);
    }
    break;
  case 5:
    local_68 = local_40;
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_88 = local_60;
    iStack_84 = uStack_5c;
    iStack_80 = uStack_58;
    iStack_7c = uStack_54;
    uop(param_2,&local_88);
    param_1[0] = 7;
    param_1[1] = 0;
    break;
  case 6:
    local_68 = local_40;
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    local_88 = local_60;
    iStack_84 = uStack_5c;
    iStack_80 = uStack_58;
    iStack_7c = uStack_54;
    ::alloc::vec::Vec<T,A>::push(param_2,&local_88);
    param_1[0] = 7;
    param_1[1] = 0;
  }
  return;
}