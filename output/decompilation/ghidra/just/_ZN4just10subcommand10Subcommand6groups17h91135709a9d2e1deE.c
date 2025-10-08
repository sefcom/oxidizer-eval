void _ZN4just10subcommand10Subcommand6groups17h91135709a9d2e1deE(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined **local_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  long local_70;
  code *local_68;
  undefined4 *local_60;
  code *local_58;
  undefined local_50 [32];
  
  local_b8 = &PTR_DAT_00531050;
  local_b0 = 1;
  local_a8 = (long *)0x8;
  local_a0 = 0;
  uStack_98 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40)(&local_b8);
  _ZN4just8justfile8Justfile13public_groups17he2abda4ed6140bb7E
            (&local_b8,param_2,*(undefined *)(param_1 + 0x1a3));
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17he9001c4925ee01b8E
            (local_50,&local_b8);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h89f3f68b0a4d6be6E
            (&local_d0,local_50);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00566c40;
  do {
    local_78 = local_c0;
    local_88 = local_d0;
    uStack_84 = uStack_cc;
    uStack_80 = uStack_c8;
    uStack_7c = uStack_c4;
    local_68 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_58 = 
    _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
    local_b8 = (undefined **)&DAT_00531060;
    local_b0 = 3;
    uStack_98 = 0;
    local_a8 = &local_70;
    local_a0 = 2;
                    /* try { // try from 0038c4bc to 0038c4c3 has its CatchHandler @ 0038c50b */
    local_70 = param_1 + 0x48;
    local_60 = &local_88;
    (*(code *)puVar1)(&local_b8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h367fa18a9dfefdabE(&local_88);
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h89f3f68b0a4d6be6E
              (&local_d0,local_50);
  } while (CONCAT44(uStack_cc,local_d0) != -0x8000000000000000);
  _ZN4core3ptr81drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_alloc__string__String_GT__GT_17h57d196e280b32628E
            (local_50);
  return;
}