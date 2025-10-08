void _ZN3bat6assets12build_assets23print_unlinked_contexts17hfe9c6fb076e98778E(undefined8 param_1)

{
  undefined *puVar1;
  undefined local_f0 [16];
  long local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 **local_88;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  (*(code *)
    PTR__ZN7syntect7parsing10syntax_set9SyntaxSet22find_unlinked_contexts17haed14f5d8be33492E_008087c0
  )(local_f0,param_1);
  if (local_e0 != 0) {
    local_78 = &PTR_DAT_007ce0a8;
    local_70 = 1;
    local_68 = 8;
    local_60 = 0;
    uStack_58 = 0;
                    /* try { // try from 0053406d to 0053407a has its CatchHandler @ 00534157 */
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_78);
    _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0144c99ce290211bE
              (&local_78,local_f0);
    puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960;
    do {
                    /* try { // try from 005340c0 to 005340cf has its CatchHandler @ 00534175 */
      _ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0b55b84182edccc4E
                (&local_d8,&local_78);
      local_88 = local_c8;
      local_98 = (undefined4)local_d8;
      uStack_94 = local_d8._4_4_;
      uStack_90 = (undefined4)uStack_d0;
      uStack_8c = uStack_d0._4_4_;
      local_a0 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
      local_d8 = &PTR_DAT_007ce0b8;
      uStack_d0 = 2;
      local_b8 = 0;
      local_c0 = 1;
      local_c8 = &local_a8;
      local_a8 = &local_98;
                    /* try { // try from 0053411c to 00534121 has its CatchHandler @ 00534166 */
      (*(code *)puVar1)(&local_d8);
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(&local_98);
    } while( true );
  }
  _ZN4core3ptr90drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_alloc__string__String_GT__GT_17hb258e5946c886ef4E
            (local_f0);
  return;
}