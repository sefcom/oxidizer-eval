void __rustcall uu_expr::syntax_tree::NumOrStr::eval_as_bigint(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulong local_20;
  ulong uStack_18;
  
  if (*param_2 == 0x8000000000000000) {
    local_38 = param_2[3];
    local_48 = *(undefined4 *)(param_2 + 1);
    uStack_44 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_40 = *(undefined4 *)(param_2 + 2);
    uStack_3c = *(undefined4 *)((long)param_2 + 0x14);
                    /* try { // try from 0022fa8f to 0022fa98 has its CatchHandler @ 0022faf0 */
    num_bigint::bigint::convert::_<impl_num_traits::Num_for_num_bigint::bigint::BigInt>::
    from_str_radix(&local_30,param_2[2]);
    bVar4 = CONCAT44(uStack_2c,local_30) != -0x8000000000000000;
    if (bVar4) {
      param_1[3] = local_20;
      param_1[4] = uStack_18;
      *(undefined4 *)(param_1 + 1) = local_30;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
      *(undefined4 *)(param_1 + 2) = uStack_28;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_24;
    }
    else {
      param_1[1] = 2;
    }
    *param_1 = (ulong)!bVar4;
    core::ptr::drop_in_place<alloc::string::String>(&local_48);
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    param_1[3] = param_2[2];
    param_1[4] = uVar3;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    *param_1 = 0;
  }
  return;
}