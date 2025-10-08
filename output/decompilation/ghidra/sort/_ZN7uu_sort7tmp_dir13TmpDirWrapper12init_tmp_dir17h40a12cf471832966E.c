undefined  [16] _ZN7uu_sort7tmp_dir13TmpDirWrapper12init_tmp_dir17h40a12cf471832966E(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_RBX;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char local_a8;
  undefined7 uStack_a7;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined local_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*(char *)(param_1 + 0x28) == '\x02') {
    unaff_RBX = param_1;
    if (*(long *)(param_1 + 0x38) != 0) goto LAB_001cfb9f;
    local_78 = 6;
    local_88 = 1;
    local_80 = 0;
    local_70 = 0;
    local_a0 = 0;
    uStack_98 = "uutils_sort";
    local_90 = 0xb;
    _ZN8tempfile7Builder10tempdir_in17h41e65ac92346cc8cE(&local_b8,&local_a0,param_1);
    if (local_a8 == '\x02') {
      _ZN7uu_sort7tmp_dir13TmpDirWrapper12init_tmp_dir28__u7b__u7b_closure_u7d__u7d_17h2186ef868a4f153aE
                (local_68,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 CONCAT44(uStack_b4,local_b8));
      local_18 = local_50;
      local_28 = uStack_60;
      uStack_24 = uStack_5c;
      uStack_20 = uStack_58;
      uStack_1c = uStack_54;
      local_c8 = local_38;
      uStack_c0 = uStack_30;
      local_d8 = local_48;
      uStack_d4 = uStack_44;
      uStack_d0 = uStack_40;
      uStack_cc = uStack_3c;
      uStack_f0 = uStack_60;
      uStack_ec = uStack_5c;
      local_e0 = local_50;
      auVar5._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4da5af3d8a2f6642E(&local_f8);
      auVar5._8_8_ = &
                     PTR__ZN4core3ptr39drop_in_place_LT_uu_sort__SortError_GT_17h960567f9640cae93E_0028c448
      ;
      return auVar5;
    }
                    /* try { // try from 001cfadc to 001cfae3 has its CatchHandler @ 001cfbd9 */
    _ZN4core3ptr71drop_in_place_LT_core__option__Option_LT_tempfile__dir__TempDir_GT__GT_17h3def595bc319fe18E
              ((undefined4 *)(param_1 + 0x18));
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_a7,local_a8);
    *(undefined4 *)(param_1 + 0x18) = local_b8;
    *(undefined4 *)(param_1 + 0x1c) = uStack_b4;
    *(undefined4 *)(param_1 + 0x20) = uStack_b0;
    *(undefined4 *)(param_1 + 0x24) = uStack_ac;
    if (*(char *)(param_1 + 0x28) != '\x02') {
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00296ea8
      )(local_68,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      plVar2 = *(long **)(param_1 + 0x30);
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
        local_e0 = *(undefined8 *)(param_1 + 0x30);
        uStack_f0 = uStack_60;
        uStack_ec = uStack_5c;
        _ZN5ctrlc20init_and_set_handler17hcd032e68e80ef580E(&local_a0,&local_f8);
        if (local_a0 == 3) {
          uVar4 = 0;
        }
        else {
          local_f8 = CONCAT44(uStack_9c,local_a0);
          uStack_f0 = (undefined4)uStack_98;
          uStack_ec = uStack_98._4_4_;
          uVar4 = _ZN7uu_sort7tmp_dir13TmpDirWrapper12init_tmp_dir28__u7b__u7b_closure_u7d__u7d_17h7a2370e9f611060bE
                            (&local_f8);
        }
        auVar6._8_8_ = &
                       PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd52ffe37ac412be9E_0028c680
        ;
        auVar6._0_8_ = uVar4;
        return auVar6;
      }
      goto LAB_001cfbd7;
    }
  }
  else {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: self.temp_dir.is_none()",0x29,
               &PTR_s_src_uu_sort_src_tmp_dir_rs__0028cad8);
LAB_001cfb9f:
    local_f8 = 0;
    (*(code *)PTR__ZN4core9panicking13assert_failed17h449f2a7fe5426575E_00297568)
              (0,unaff_RBX + 0x38,&DAT_00126a60,&local_f8,
               &PTR_s_src_uu_sort_src_tmp_dir_rs__0028cb08);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00296f50)
            (&PTR_s_src_uu_sort_src_tmp_dir_rs__0028caf0);
LAB_001cfbd7:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}