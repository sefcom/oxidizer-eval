undefined8 *
_ZN16fuel_core_client6client6schema2tx149__LT_impl_u20_core__convert__TryFrom_LT_fuel_core_client__client__schema__tx__OpaqueTransaction_GT__u20_for_u20_fuel_tx__transaction__Transaction_GT_8try_from17hbb1eb2c39a6cd705E
          (undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_1d0 = param_2[2];
                    /* try { // try from 00413e13 to 00413e1f has its CatchHandler @ 00413e7f */
  local_1d8 = uVar2;
  _ZN10fuel_types9canonical11Deserialize6decode17h554db8a436d508dbE(&local_1c8,&local_1d8);
  if (local_1c8 == -0x7ffffffffffffffa) {
    param_1[4] = local_1b0;
    *(undefined4 *)(param_1 + 2) = local_1c0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1bc;
    *(undefined4 *)(param_1 + 3) = uStack_1b8;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_1b4;
    param_1[1] = 6;
    *param_1 = 0x8000000000000006;
  }
  else {
    (*(code *)PTR_memcpy_0071fea8)(param_1,&local_1c8,0x1b0);
  }
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha84acb6fbde5c50fE(uVar1,uVar2);
  return param_1;
}