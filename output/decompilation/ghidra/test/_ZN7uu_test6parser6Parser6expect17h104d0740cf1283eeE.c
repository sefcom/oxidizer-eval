void _ZN7uu_test6parser6Parser6expect17h104d0740cf1283eeE(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  
  _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(&local_78);
  uVar1 = local_68;
  if (local_78 == 3) {
    cVar2 = _ZN67__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_GT_2eq17h08c82ed25b2e05bfE
                      (local_68,local_60,")",1);
    if (cVar2 != '\0') {
      *param_1 = 7;
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc3c00042d8510b40E
                (local_70,uVar1);
      return;
    }
  }
  local_50 = 0;
  local_48 = ")";
  local_40 = 1;
  local_38 = 1;
                    /* try { // try from 00157560 to 0015756e has its CatchHandler @ 001575b1 */
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
            (&local_30,&local_50);
  param_1[3] = local_20;
  *(undefined4 *)(param_1 + 1) = local_30;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_2c;
  *(undefined4 *)(param_1 + 2) = uStack_28;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_24;
  *param_1 = 1;
  if ((int)local_78 == 3) {
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hc3c00042d8510b40E
              (local_70,local_68);
  }
  else {
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(&local_78);
  }
  return;
}