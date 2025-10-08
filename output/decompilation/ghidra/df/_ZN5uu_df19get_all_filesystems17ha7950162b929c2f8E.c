undefined4 * _ZN5uu_df19get_all_filesystems17ha7950162b929c2f8E(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined *local_140;
  long local_138;
  long local_c8 [19];
  
  if (*(char *)(param_2 + 0x52) != '\0') {
    (*(code *)PTR_sync_0020a1c8)();
  }
  local_1b8 = 0;
  local_1b0 = 8;
  local_1a8 = 0;
                    /* try { // try from 0016d97d to 0016da4e has its CatchHandler @ 0016db1d */
  (*(code *)PTR__ZN6uucore8features5fsext12read_fs_list17h6f122f433e9b10c6E_00209eb8)(&local_160);
  local_178 = local_160;
  local_170 = local_158;
  local_168 = local_150;
  local_180 = param_1;
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h4e6a242ff752ace5E
            (&local_1a0,&local_178);
  _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h04f884ed303dea1cE
            (local_c8,&local_1a0);
  puVar2 = PTR__ZN5uu_df11is_included17h2cb576fb785b9846E_00209ed8;
  puVar1 = PTR_memcpy_00209e88;
  if (local_c8[0] != -0x8000000000000000) {
    do {
      (*(code *)puVar1)(&local_160,local_c8,0x98);
      cVar4 = (*(code *)puVar2)(&local_160,param_2);
      if ((cVar4 == '\0') ||
         (cVar4 = _ZN5uu_df7is_best17h2e728b01e5cd47e3E(local_1b0,local_1a8,local_c8), cVar4 == '\0'
         )) {
        _ZN4core3ptr55drop_in_place_LT_uucore__features__fsext__MountInfo_GT_17h0026f4350179d2b5E
                  (local_c8);
      }
      else {
                    /* try { // try from 0016dafb to 0016db05 has its CatchHandler @ 0016db08 */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h009a998fb78397faE(&local_1b8,local_c8);
      }
      _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h04f884ed303dea1cE
                (local_c8,&local_1a0);
    } while (local_c8[0] != -0x8000000000000000);
  }
  _ZN4core3ptr94drop_in_place_LT_alloc__vec__into_iter__IntoIter_LT_uucore__features__fsext__MountInfo_GT__GT_17h2cba2fcf95045450E
            (&local_1a0);
  puVar3 = local_180;
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h32af2e8d1bfd3746E
            (&local_1a0,local_1b0,local_1a8);
  _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h4e6a242ff752ace5E
            (&local_160,&local_1a0);
  local_140 = (undefined *)&local_1b8;
  local_138 = param_2;
  _ZN4core4iter6traits8iterator8Iterator7collect17h5024ba8280d3069aE(&local_1a0,&local_160);
  *(undefined8 *)(puVar3 + 4) = local_190;
  *puVar3 = local_1a0;
  puVar3[1] = uStack_19c;
  puVar3[2] = uStack_198;
  puVar3[3] = uStack_194;
  _ZN4core3ptr78drop_in_place_LT_alloc__vec__Vec_LT_uucore__features__fsext__MountInfo_GT__GT_17h2845cb9837793921E
            (&local_1b8);
  return puVar3;
}