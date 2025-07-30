void _ZN9FakeCrypt7fileops17encrypt_directory17hb6c6db8e2661d1b6E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_120;
  char local_118;
  undefined local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0 [6];
  undefined8 local_70;
  undefined8 local_40;
  char local_38;
  
  _ZN3std2fs8read_dir17ha0facb67eaa83156E(&local_120,param_1,param_2);
  puVar1 = PTR__ZN3std4path4Path6is_dir17hf801d9cfeb23f5dbE_001deb68;
  if (local_118 != '\x02') {
    local_a0[0] = 0;
    local_70 = 0;
    local_40 = local_120;
    local_38 = local_118;
                    /* try { // try from 00155360 to 0015536c has its CatchHandler @ 00155443 */
    while (_ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h649188f1314bf01aE
                     (&local_c8,local_a0), CONCAT44(uStack_c4,local_c8) != 0) {
      local_d8 = local_a8;
      local_e8 = local_b8;
      uStack_e4 = uStack_b4;
      uStack_e0 = uStack_b0;
      uStack_dc = uStack_ac;
      local_f8 = local_c8;
      uStack_f4 = uStack_c4;
      uStack_f0 = uStack_c0;
      uStack_ec = uStack_bc;
                    /* try { // try from 00155396 to 001553a1 has its CatchHandler @ 00155434 */
      (*(code *)PTR__ZN3std2fs8DirEntry4path17h0d0e35cdc38feba2E_001dec00)(local_110,&local_f8);
                    /* try { // try from 001553ac to 001553da has its CatchHandler @ 00155425 */
      cVar2 = (*(code *)puVar1)(local_108,local_100);
      if (cVar2 == '\0') {
        _ZN9FakeCrypt7fileops12encrypt_file17ha7bc1626977de376E(local_108,local_100,param_3,param_4)
        ;
      }
      else {
        _ZN9FakeCrypt7fileops17encrypt_directory17hb6c6db8e2661d1b6E
                  (local_108,local_100,param_3,param_4);
      }
                    /* try { // try from 001553db to 001553e2 has its CatchHandler @ 00155434 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff597253ed3a0574E(local_110);
                    /* try { // try from 001553e3 to 001553ea has its CatchHandler @ 00155443 */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h51ac40c013d79d1eE(&local_f8);
    }
                    /* try { // try from 001553f0 to 001553fc has its CatchHandler @ 00155420 */
    _ZN4core3ptr83drop_in_place_LT_core__iter__adapters__flatten__Flatten_LT_std__fs__ReadDir_GT__GT_17h0f0420560c044b1bE
              (local_a0);
    if (local_118 != '\x02') {
      return;
    }
  }
  _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17h798bf9b3fb5da4e8E
            (&local_120);
  return;
}