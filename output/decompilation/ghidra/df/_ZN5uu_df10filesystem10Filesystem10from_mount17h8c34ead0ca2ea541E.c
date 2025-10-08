undefined8 *
_ZN5uu_df10filesystem10Filesystem10from_mount17h8c34ead0ca2ea541E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined auStack_198 [152];
  undefined local_100 [232];
  
  cVar1 = _ZN5uu_df10filesystem15is_over_mounted17he031024296dde685E(param_2,param_3,param_4);
  if (cVar1 == '\0') {
                    /* try { // try from 0016b642 to 0016b64c has its CatchHandler @ 0016b6a5 */
    _ZN73__LT_uucore__features__fsext__MountInfo_u20_as_u20_core__clone__Clone_GT_5clone17h6d17af9e90a4bf91E
              (auStack_198,param_4);
    _ZN5uu_df10filesystem10Filesystem3new17h176c4d07e180ea46E(local_100,auStack_198,param_5);
    (*(code *)PTR_memcpy_00209e88)(param_1,local_100,0xe8);
  }
  else {
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17hac58f874263dbc4eE(param_5);
  }
  return param_1;
}