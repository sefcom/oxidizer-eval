void __rustcall uu_expr::syntax_tree::Parser::parse(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2[1] == 0) {
    param_1[1] = 3;
  }
  else {
    parse_expression(&local_38);
    uStack_50 = uStack_28;
    uVar1 = uStack_50;
    local_48 = local_20;
    uVar2 = local_48;
    uStack_40 = uStack_18;
    uVar3 = uStack_40;
    if (CONCAT44(uStack_34,local_38) == 0) {
      uStack_50._0_4_ = (undefined4)uStack_28;
      uStack_50._4_4_ = (undefined4)((ulong)uStack_28 >> 0x20);
      local_48._0_4_ = (undefined4)local_20;
      local_48._4_4_ = (undefined4)((ulong)local_20 >> 0x20);
      uStack_40._0_4_ = (undefined4)uStack_18;
      uStack_40._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
      local_68 = (undefined4)local_48;
      uStack_64 = local_48._4_4_;
      uStack_60 = (undefined4)uStack_40;
      uStack_5c = uStack_40._4_4_;
      local_78 = uStack_30;
      uStack_74 = uStack_2c;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      if ((ulong)param_2[2] < (ulong)param_2[1]) {
                    /* try { // try from 00230189 to 00230192 has its CatchHandler @ 002301d8 */
        uStack_50 = uVar1;
        local_48 = uVar2;
        uStack_40 = uVar3;
        _<T_as_alloc::string::ToString>::to_string(&local_38,param_2[2] * 0x10 + *param_2);
        param_1[4] = uStack_28;
        *(undefined4 *)(param_1 + 2) = local_38;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_34;
        *(undefined4 *)(param_1 + 3) = uStack_30;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_2c;
        param_1[1] = 0;
        *param_1 = 1;
        core::ptr::drop_in_place<uu_expr::syntax_tree::AstNode>(&local_78);
        return;
      }
      param_1[3] = local_20;
      param_1[4] = uStack_18;
      param_1[1] = CONCAT44(uStack_2c,uStack_30);
      param_1[2] = uStack_28;
      *param_1 = 0;
      return;
    }
    param_1[3] = local_20;
    param_1[4] = uStack_18;
    param_1[1] = CONCAT44(uStack_2c,uStack_30);
    param_1[2] = uStack_28;
  }
  *param_1 = 1;
  return;
}