undefined  [16]
_ZN8uu_chmod7Chmoder8walk_dir17ha01070efe2a4054dE
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  char local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined local_98 [8];
  char local_90;
  undefined local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60 [2];
  char local_58;
  undefined7 uStack_57;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  auVar6 = _ZN8uu_chmod7Chmoder10chmod_file17h265d0431d919c569E();
  local_a0 = param_1;
  if (*(char *)(param_1 + 0x26) == '\0') {
    cVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                      (param_2,param_3);
    if (cVar3 != '\0') {
      return auVar6;
    }
    local_bc = '\0';
  }
  else if (*(char *)(param_1 + 0x26) == '\x01') {
                    /* try { // try from 0015e64f to 0015e65e has its CatchHandler @ 0015e903 */
    _ZN3std2fs12canonicalize17h5ddb1f5aac699172E(local_88,param_2,param_3);
                    /* try { // try from 0015e65f to 0015e66f has its CatchHandler @ 0015e8c9 */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_001f26a8)
              (local_60,param_2,param_3);
                    /* try { // try from 0015e670 to 0015e683 has its CatchHandler @ 0015e8c7 */
    _ZN4core6result19Result_LT_T_C_E_GT_9unwrap_or17ha619ba9845797d03E(&local_b8,local_88,local_60);
    uVar4 = local_b0;
                    /* try { // try from 0015e68e to 0015e69f has its CatchHandler @ 0015e8af */
    local_bc = _ZN86__LT__RF_std__path__Path_u20_as_u20_core__cmp__PartialEq_LT_std__path__PathBuf_GT__GT_2eq17h04d9502e2354ca3eE
                         (param_2,param_3,local_b0,local_a8);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hfbefb63f29142bf4E(local_b8,uVar4);
                    /* try { // try from 0015e6ad to 0015e72d has its CatchHandler @ 0015e903 */
    cVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                      (param_2,param_3);
    if (cVar3 == '\x01' && local_bc == '\0') {
      return auVar6;
    }
  }
  else {
    local_bc = '\x01';
    (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)(param_2,param_3);
  }
  cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f26b0)(param_2,param_3);
  if (cVar3 != '\0') {
    _ZN3std2fs8read_dir17hc6faba6b58851c77E(local_60,param_2,param_3);
    if (local_58 == '\x02') {
      auVar7 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001f26b8
               )();
LAB_0015e884:
      _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h9fbd8f8cb57f1996E
                (auVar6._0_8_,auVar6._8_8_);
      auVar6 = auVar7;
    }
    else {
      local_90 = local_58;
      while( true ) {
        uVar5 = auVar6._8_8_;
                    /* try { // try from 0015e76b to 0015e77a has its CatchHandler @ 0015e90e */
        uVar4 = auVar6._0_8_;
        (*(code *)
          PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_001f26c0
        )(local_60,local_98);
        if (local_60[0] != 1) break;
        if (CONCAT71(uStack_57,local_58) == 0) {
                    /* try { // try from 0015e868 to 0015e873 has its CatchHandler @ 0015e8ad */
          auVar7 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001f26b8
                   )();
                    /* try { // try from 0015e874 to 0015e883 has its CatchHandler @ 0015e903 */
          _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hf0e11a7c1da473a3E(local_98);
          goto LAB_0015e884;
        }
        local_68 = local_38;
        local_78 = local_48;
        uStack_74 = uStack_44;
        uStack_70 = uStack_40;
        uStack_6c = uStack_3c;
        local_80 = local_50;
                    /* try { // try from 0015e7be to 0015e7cb has its CatchHandler @ 0015e8f1 */
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_001f26c8)(&local_b8,local_88);
                    /* try { // try from 0015e7cf to 0015e83f has its CatchHandler @ 0015e916 */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hd18785c6a939759cE(local_88);
        uVar2 = local_a8;
        uVar1 = local_b0;
        cVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_001f2698)
                          (local_b0,local_a8);
        if (cVar3 == '\0') {
          auVar6 = _ZN8uu_chmod7Chmoder8walk_dir17ha01070efe2a4054dE(local_a0,uVar1,uVar2);
                    /* try { // try from 0015e840 to 0015e850 has its CatchHandler @ 0015e8e3 */
          _ZN4core3ptr120drop_in_place_LT_core__result__Result_LT__LP__RP__C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT_17h9fbd8f8cb57f1996E
                    (uVar4,uVar5);
        }
        else if (local_bc != '\0') {
          auVar6 = _ZN8uu_chmod7Chmoder10chmod_file17h265d0431d919c569E(local_a0,uVar1,uVar2);
          auVar6 = _ZN4core6result19Result_LT_T_C_E_GT_3and17h77e5678da19ca805E
                             (auVar6._0_8_,auVar6._8_8_,uVar4,uVar5);
        }
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hfbefb63f29142bf4E(local_b8,local_b0)
        ;
      }
                    /* try { // try from 0015e856 to 0015e865 has its CatchHandler @ 0015e903 */
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17hf0e11a7c1da473a3E(local_98);
    }
  }
  return auVar6;
}