void _ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17he098c4319062daf7E
               (undefined4 *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte extraout_DL;
  undefined auVar5 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((*(char *)(param_2 + 0x28) == '\x02') &&
     (auVar5 = _ZN7uu_sort7tmp_dir13TmpDirWrapper12init_tmp_dir17h40a12cf471832966E(param_2),
     auVar5._0_8_ != 0)) {
    *(undefined (*) [16])(param_1 + 4) = auVar5;
    *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
    return;
  }
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h2a065fc042bff740E
            (&local_78,*(long *)(param_2 + 0x30) + 0x10);
  uVar3 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd0a5bb82409ec627E
                    (&local_78,&PTR_s_src_uu_sort_src_tmp_dir_rs__0028cb88);
                    /* try { // try from 001cfed2 to 001cfeee has its CatchHandler @ 001d0006 */
  uVar4 = (*(code *)
            PTR__ZN4core3fmt3num3imp21__LT_impl_u20_u64_GT_4_fmt17h284f18664830c6ddE_00297588)
                    (*(undefined8 *)(param_2 + 0x38),&local_94,0x14);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
            (&local_78,uVar4);
  local_28 = local_68;
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
  local_38 = (int)local_78;
  uStack_34 = local_78._4_4_;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (*(char *)(param_2 + 0x28) != '\x02') {
                    /* try { // try from 001cff20 to 001cff31 has its CatchHandler @ 001cfff5 */
    _ZN3std4path4Path4join17hc7234bb093be180aE
              (&local_b0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),&local_38);
                    /* try { // try from 001cff32 to 001cff75 has its CatchHandler @ 001cfff7 */
    _ZN3std2fs4File6create17hcc6fca5dbadf2b47E(&local_78,&local_b0);
    if ((int)local_78 == 1) {
      local_78 = 0x8000000000000003;
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_78);
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined ***)(param_1 + 6) =
           &PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hb52824ed0e0c3e52E(&local_b0);
    }
    else {
      uStack_90 = local_b0;
      uVar4 = uStack_90;
      uStack_88 = uStack_a8;
      uVar2 = uStack_88;
      local_80 = local_a0;
      *param_1 = local_78._4_4_;
      uStack_90._0_4_ = (undefined4)local_b0;
      uStack_90._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
      uStack_88._0_4_ = (undefined4)uStack_a8;
      param_1[1] = local_94;
      param_1[2] = (undefined4)uStack_90;
      param_1[3] = uStack_90._4_4_;
      param_1[4] = (undefined4)uStack_88;
      *(undefined8 *)(param_1 + 4) = uStack_a8;
      *(undefined8 *)(param_1 + 6) = local_a0;
      uStack_90 = uVar4;
      uStack_88 = uVar2;
    }
    _ZN4core3ptr136drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__StdinRaw_GT__GT__GT_17h1d94eac551d99a4dE
              (uVar3,extraout_DL & 1);
    return;
  }
                    /* try { // try from 001cffe6 to 001cfff2 has its CatchHandler @ 001d000b */
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
            (&PTR_s_src_uu_sort_src_tmp_dir_rs__0028cba0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}