void _ZN8uu_chown9parse_gid17h180219f2ead778f4E(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  else {
    (*(code *)
      PTR__ZN101__LT_uucore__features__entries__Group_u20_as_u20_uucore__features__entries__Locate_LT__RF_str_GT__GT_6locate17h2c7d885aadff2e1bE_001fd038
    )(&local_90);
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)((long)param_1 + 0xc) = local_78;
    *param_1 = 0;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h64edeac6d8c4e76cE
              (local_90,local_88);
  }
  return;
}