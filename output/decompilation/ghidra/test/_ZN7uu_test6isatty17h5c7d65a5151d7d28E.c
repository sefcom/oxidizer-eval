void _ZN7uu_test6isatty17h5c7d65a5151d7d28E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 uStack_24;
  undefined4 local_1c;
  
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e60e0)(&local_50);
  if (((int)local_50 != 1) &&
     (uVar2 = _ZN4core3num21__LT_impl_u20_i32_GT_16from_ascii_radix17h8c416a74051ba1e6E
                        (local_48,local_40), (uVar2 & 1) == 0)) {
    iVar1 = (*(code *)PTR_isatty_001e6288)(uVar2 >> 0x20);
    *(bool *)(param_1 + 1) = iVar1 == 1;
    *param_1 = 7;
    return;
  }
  local_50 = 1;
  local_38 = 1;
  local_48 = param_2;
  local_40 = param_3;
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h47d193bf63b6bc9aE
            (&local_30,&local_50);
  *(undefined4 *)((long)param_1 + 0x1c) = local_1c;
  *(undefined8 *)((long)param_1 + 0xc) = local_2c;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_24;
  *param_1 = 5;
  *(undefined4 *)(param_1 + 1) = local_30;
  return;
}