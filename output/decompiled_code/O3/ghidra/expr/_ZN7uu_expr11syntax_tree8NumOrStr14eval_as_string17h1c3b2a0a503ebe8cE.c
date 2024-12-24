long * __rustcall uu_expr::syntax_tree::NumOrStr::eval_as_string(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*param_2 == -0x8000000000000000) {
    param_1[2] = param_2[3];
    lVar1 = param_2[2];
    *param_1 = param_2[1];
    param_1[1] = lVar1;
  }
  else {
    local_28 = *(undefined4 *)param_2;
    uStack_24 = *(undefined4 *)((long)param_2 + 4);
    uStack_20 = *(undefined4 *)(param_2 + 1);
    uStack_1c = *(undefined4 *)((long)param_2 + 0xc);
    local_18 = *(undefined4 *)(param_2 + 2);
    uStack_14 = *(undefined4 *)((long)param_2 + 0x14);
    uStack_10 = *(undefined4 *)(param_2 + 3);
    uStack_c = *(undefined4 *)((long)param_2 + 0x1c);
                    /* try { // try from 0022f478 to 0022f482 has its CatchHandler @ 0022f494 */
    _<T_as_alloc::string::ToString>::to_string(param_1,&local_28);
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_28);
  }
  return param_1;
}