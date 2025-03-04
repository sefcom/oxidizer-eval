undefined4 *
_ZN7uu_sort7tmp_dir13TmpDirWrapper9next_file17h05b3ad075068705fE(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte extraout_DL;
  undefined auVar4 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_68;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_28;
  
  if ((*(char *)(param_2 + 0x28) == '\x02') &&
     (auVar4 = _ZN7uu_sort7tmp_dir13TmpDirWrapper12init_tmp_dir17h98cc8f29e16f1909E(param_2),
     auVar4._0_8_ != 0)) {
    *(undefined (*) [16])(param_1 + 4) = auVar4;
    *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
    return param_1;
  }
  _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17h2fdf4238f9db328bE
            (&local_78,*(long *)(param_2 + 0x30) + 0x10);
  uVar2 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he8ec3f841ca899b2E(&local_78,&DAT_00301078);
                    /* try { // try from 00248ac2 to 00248ace has its CatchHandler @ 00248c0b */
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hbab597f68101a0a6E
            (&local_38,param_2 + 0x38);
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
  if (*(char *)(param_2 + 0x28) != '\x02') {
    local_68 = local_28;
    local_78 = local_38;
    uStack_74 = uStack_34;
                    /* try { // try from 00248b00 to 00248b0e has its CatchHandler @ 00248bf7 */
    _ZN3std4path4Path4join17h2322a65c0d7509acE
              (&local_b0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),&local_78);
                    /* try { // try from 00248b0f to 00248b1d has its CatchHandler @ 00248be8 */
    _ZN3std2fs4File6create17h360b3028bf6903a2E(&local_78,&local_b0);
    if (local_78 == 0) {
      local_90 = local_b0;
      uVar3 = local_90;
      uStack_88 = uStack_a8;
      uVar1 = uStack_88;
      local_80 = local_a0;
      *param_1 = uStack_74;
      local_90._0_4_ = (undefined4)local_b0;
      local_90._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
      uStack_88._0_4_ = (undefined4)uStack_a8;
      param_1[1] = uStack_94;
      param_1[2] = (undefined4)local_90;
      param_1[3] = local_90._4_4_;
      param_1[4] = (undefined4)uStack_88;
      *(undefined8 *)(param_1 + 4) = uStack_a8;
      *(undefined8 *)(param_1 + 6) = local_a0;
      local_90 = uVar3;
      uStack_88 = uVar1;
    }
    else {
      local_78 = CONCAT31(local_78._1_3_,4);
                    /* try { // try from 00248b34 to 00248b3d has its CatchHandler @ 00248bcd */
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hebf92c849c48588dE(&local_78);
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined ***)(param_1 + 6) =
           &PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17he8a54a56651c7a8bE_00300f08;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
                    /* try { // try from 00248b5b to 00248b64 has its CatchHandler @ 00248bc8 */
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he13e3ddf5562bb7eE(&local_b0);
    }
    _ZN4core3ptr65drop_in_place_LT_std__sync__mutex__MutexGuard_LT__LP__RP__GT__GT_17h1ece0fb60dffd106E
              (uVar2,extraout_DL & 1);
    return param_1;
  }
                    /* try { // try from 00248bbb to 00248bc7 has its CatchHandler @ 00248bf9 */
  uVar3 = _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&DAT_00301090);
                    /* catch() { ... } // from try @ 00248b5b with catch @ 00248bc8 */
  _ZN4core3ptr65drop_in_place_LT_std__sync__mutex__MutexGuard_LT__LP__RP__GT__GT_17h1ece0fb60dffd106E
            (uVar2,extraout_DL & 1);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}