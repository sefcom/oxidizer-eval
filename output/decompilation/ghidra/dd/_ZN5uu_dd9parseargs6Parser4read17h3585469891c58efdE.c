void _ZN5uu_dd9parseargs6Parser4read17h3585469891c58efdE
               (undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long local_50;
  long local_48;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_48 = param_4 * 0x10 + param_3;
  local_50 = param_3;
  puVar1 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h12a8649b6eb511d9E
                     (&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    do {
                    /* try { // try from 001d2a17 to 001d2a21 has its CatchHandler @ 001d2a80 */
      _ZN5uu_dd9parseargs6Parser13parse_operand17h4dfdd7ca9dce5d89E
                (&local_40,param_2,*puVar1,puVar1[1]);
      if (local_40 != 0xe) {
        *(undefined4 *)(param_1 + 3) = local_30;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_2c;
        *(undefined4 *)(param_1 + 4) = uStack_28;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_24;
        *(int *)(param_1 + 1) = local_40;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
        *(undefined4 *)(param_1 + 2) = uStack_38;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_34;
        *param_1 = 2;
        _ZN4core3ptr45drop_in_place_LT_uu_dd__parseargs__Parser_GT_17h57b892102145e56eE(param_2);
        return;
      }
      puVar1 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h12a8649b6eb511d9E
                         (&local_50);
    } while (puVar1 != (undefined8 *)0x0);
  }
  (*(code *)PTR_memcpy_00266548)(param_1,param_2,0xd8);
  return;
}