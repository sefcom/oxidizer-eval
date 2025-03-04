void _ZN7uu_test6parser6Parser6expect17h264bdd99a51ab46dE(undefined8 *param_1)

{
  char cVar1;
  int local_70 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(local_70);
                    /* try { // try from 001aed37 to 001aeda6 has its CatchHandler @ 001aede4 */
  if ((local_70[0] == 3) &&
     (cVar1 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E
                        (CONCAT44(uStack_5c,uStack_60),local_58), cVar1 != '\0')) {
    local_38 = local_58;
    local_48 = CONCAT44(uStack_64,local_68);
    uStack_40 = (char *)CONCAT44(uStack_5c,uStack_60);
    *param_1 = 7;
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_48);
    if (local_70[0] == 3) {
      return;
    }
  }
  else {
    local_48 = 0;
    uStack_40 = ")";
    local_38 = 1;
    local_30 = 1;
    _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17h0530b763d48a6791E
              (&local_28,&local_48);
    param_1[3] = local_18;
    *(undefined4 *)(param_1 + 1) = local_28;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_24;
    *(undefined4 *)(param_1 + 2) = uStack_20;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1c;
    *param_1 = 1;
    if (local_70[0] == 3) {
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h6d998f4ce1bf2fbfE(&local_68);
      return;
    }
  }
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_70);
  return;
}