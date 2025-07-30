void _ZN7flealib16commandprocessor16CommandProcessor13vec_to_string17h42d265a3d6a77fc9E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined local_a0 [16];
  long local_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  long *local_58;
  code *local_50;
  undefined local_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_c0 = 0;
  uStack_b8 = 1;
  local_b0 = 0;
  local_a8 = param_1;
                    /* try { // try from 0046d1d1 to 0046d1d8 has its CatchHandler @ 0046d2dd */
  local_a0 = _ZN94__LT__RF_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h7ee53d07f29f4608E
                       (param_2);
  local_90 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3bfb18f4def3f622E
                       (local_a0);
  if (local_90 != 0) {
    do {
      local_58 = &local_90;
      local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49740bff2e11fb82E;
      local_88 = &DAT_00808608;
      uStack_80 = 2;
      local_68 = 0;
      local_70 = 1;
      local_78 = &local_58;
                    /* try { // try from 0046d267 to 0046d271 has its CatchHandler @ 0046d2ee */
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_48,&local_88);
      uStack_80 = CONCAT44(uStack_3c,uStack_40);
      local_78 = (undefined8 **)local_38;
                    /* try { // try from 0046d291 to 0046d29b has its CatchHandler @ 0046d2df */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_15append_elements17h29791fc847e31467E
                (&local_c0,uStack_80,local_38,&PTR_DAT_00808598);
                    /* try { // try from 0046d29c to 0046d2a3 has its CatchHandler @ 0046d2ee */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_88);
      local_90 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3bfb18f4def3f622E
                           (local_a0);
    } while (local_90 != 0);
  }
  local_a8[2] = local_b0;
  *local_a8 = local_c0;
  local_a8[1] = uStack_b8;
  return;
}