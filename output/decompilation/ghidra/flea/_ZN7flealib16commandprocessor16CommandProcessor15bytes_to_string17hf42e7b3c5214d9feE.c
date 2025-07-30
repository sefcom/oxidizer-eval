void _ZN7flealib16commandprocessor16CommandProcessor15bytes_to_string17hf42e7b3c5214d9feE
               (undefined8 *param_1,long param_2,long param_3)

{
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  long local_e0;
  long local_d8;
  long local_d0 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined local_98;
  long *local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  long **local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_100 = 0;
  uStack_f8 = 1;
  local_f0 = 0;
  local_d8 = param_3 + param_2;
  local_e8 = param_1;
  local_e0 = param_2;
  local_d0[0] = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he910cc6333cc22bcE
                          (&local_e0);
  if (local_d0[0] != 0) {
    do {
      local_88 = local_d0;
      local_80 = _ZN45__LT__RF_T_u20_as_u20_core__fmt__LowerHex_GT_3fmt17hef6899d97136f60fE;
      local_d0[1] = 2;
      local_b8 = 0;
      local_b0 = 2;
      local_a8 = 0;
      local_a0 = 0x800000020;
      local_98 = 3;
      local_78 = &DAT_0014fb30;
      local_70 = 1;
      local_50 = 1;
      local_68 = &local_88;
      local_60 = 1;
      local_58 = local_d0 + 1;
                    /* try { // try from 0046d0f4 to 0046d0fe has its CatchHandler @ 0046d179 */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_48,&local_78);
      uStack_c0 = uStack_40;
      uStack_bc = uStack_3c;
      local_b8 = local_38;
                    /* try { // try from 0046d11e to 0046d128 has its CatchHandler @ 0046d16a */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_100,CONCAT44(uStack_3c,uStack_40),local_38,&PTR_DAT_00808598);
                    /* try { // try from 0046d129 to 0046d130 has its CatchHandler @ 0046d179 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_d0 + 1);
      local_d0[0] = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17he910cc6333cc22bcE
                              (&local_e0);
    } while (local_d0[0] != 0);
  }
  local_e8[2] = local_f0;
  *local_e8 = local_100;
  local_e8[1] = uStack_f8;
  return;
}