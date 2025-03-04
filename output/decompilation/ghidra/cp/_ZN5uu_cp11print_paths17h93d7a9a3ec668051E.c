void _ZN5uu_cp11print_paths17h93d7a9a3ec668051E
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 **local_100;
  code *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  code *local_88;
  undefined4 *local_80;
  code *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined local_60 [32];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_1 != 0) {
    local_b0 = param_5;
    local_a8 = param_4;
    local_a0 = param_3;
    local_98 = param_2;
    _ZN5uu_cp17aligned_ancestors17h4cf131ef21f6aa74E(&local_e0);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h6511090ed0ef25d3E
              (local_60,&local_e0);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h109fcabe2eb45d25E
              (&local_100,local_60);
    if (local_100 != (undefined8 **)0x0) {
      do {
        local_70 = local_100;
        local_68 = local_f8;
        local_40 = local_f0;
        uStack_3c = uStack_ec;
        uStack_38 = uStack_e8;
        uStack_34 = uStack_e4;
        local_90 = (long *)&local_70;
        local_88 = 
        _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
        local_80 = &local_40;
        local_78 = 
        _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
        local_e0 = &DAT_002b5f48;
        local_d8 = 3;
        local_c0 = 0;
        local_c8 = 2;
        local_d0 = &local_90;
                    /* try { // try from 002065db to 002065e0 has its CatchHandler @ 002066a0 */
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_e0);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h109fcabe2eb45d25E
                  (&local_100,local_60);
      } while (local_100 != (undefined8 **)0x0);
    }
    _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0c6e777e5bffd2a5E
              (local_60);
    param_4 = local_a8;
    param_3 = local_a0;
    param_2 = local_98;
    param_5 = local_b0;
  }
  _ZN5uu_cp11context_for17h98549e35fded8509E(&local_90,param_2,param_3,param_4,param_5);
  local_f8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17hf84d46339d179f53E;
  local_e0 = &DAT_002b5ce8;
  local_d8 = 2;
  local_c0 = 0;
  local_d0 = &local_100;
  local_c8 = 1;
                    /* try { // try from 0020666a to 00206674 has its CatchHandler @ 00206691 */
  local_100 = &local_90;
  _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(&local_90);
  return;
}