void __rustcall
uu_tr::operation::Sequence::single_char(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  undefined8 uVar2;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined *local_28;
  long lStack_20;
  
  uVar2 = nom::bytes::complete::take(1);
  nom::bytes::complete::take::___closure__(&local_40,uVar2,param_2,param_3);
  if (local_40 == 0) {
    if (lStack_20 == 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(0,0,&PTR_s_src_uu_tr_src_operation_rs_0022f420);
    }
    uVar1 = *local_28;
    param_1[1] = local_38;
    param_1[2] = uStack_30;
    *(undefined *)(param_1 + 3) = uVar1;
    *param_1 = 3;
  }
  else {
    param_1[2] = local_28;
    param_1[3] = lStack_20;
    *param_1 = local_38;
    param_1[1] = uStack_30;
  }
  return;
}