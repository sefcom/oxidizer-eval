void _ZN5uu_cp11print_paths17hb4c79dc503eb9dafE
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
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
  undefined *local_88;
  undefined4 *local_80;
  undefined *local_78;
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
    _ZN5uu_cp17aligned_ancestors17h2e8a6c5e1cc13323E(&local_e0);
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h22eacf00db38bb5eE
              (local_60,&local_e0);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90db137ad036c527E
              (&local_100,local_60);
    puVar2 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00267af8
    ;
    puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00267658;
    if (local_100 != (undefined8 **)0x0) {
      do {
        local_70 = local_100;
        local_68 = local_f8;
        local_40 = local_f0;
        uStack_3c = uStack_ec;
        uStack_38 = uStack_e8;
        uStack_34 = uStack_e4;
        local_90 = (long *)&local_70;
        local_88 = puVar2;
        local_80 = &local_40;
        local_78 = puVar2;
        local_e0 = &DAT_0025e6c0;
        local_d8 = 3;
        local_c0 = 0;
        local_c8 = 2;
        local_d0 = &local_90;
                    /* try { // try from 001a32bb to 001a32c0 has its CatchHandler @ 001a3386 */
        (*(code *)puVar1)(&local_e0);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h90db137ad036c527E
                  (&local_100,local_60);
      } while (local_100 != (undefined8 **)0x0);
    }
    _ZN4core3ptr109drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT__LP__RF_std__path__Path_C__RF_std__path__Path_RP__GT__GT_17h0259dd8f81e67d9cE
              (local_60);
    param_4 = local_a8;
    param_3 = local_a0;
    param_2 = local_98;
    param_5 = local_b0;
  }
  _ZN5uu_cp11context_for17h4d8c781d36af7105E(&local_90,param_2,param_3,param_4,param_5);
  local_f8 = 
  _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
  local_e0 = &DAT_0025e620;
  local_d8 = 2;
  local_c0 = 0;
  local_d0 = &local_100;
  local_c8 = 1;
                    /* try { // try from 001a334a to 001a3354 has its CatchHandler @ 001a3371 */
  local_100 = &local_90;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00267658)(&local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1c03d16396ad1b8dE(&local_90);
  return;
}