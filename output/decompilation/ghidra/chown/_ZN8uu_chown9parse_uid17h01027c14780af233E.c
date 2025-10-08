void _ZN8uu_chown9parse_uid17h01027c14780af233E(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined local_b0 [120];
  undefined4 local_38;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    (*(code *)
      PTR__ZN102__LT_uucore__features__entries__Passwd_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h4bb3a5c7c498e57dE_001fd030
    )(local_b0);
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((long)param_1 + 0xc) = local_38;
    *param_1 = 0;
    _ZN4core3ptr54drop_in_place_LT_uucore__features__entries__Passwd_GT_17h9d92376eadf8fa93E
              (local_b0);
  }
  return;
}