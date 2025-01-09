undefined  [16] __rustcall uu_sort::tmp_dir::TmpDirWrapper::init_tmp_dir(long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined auVar6 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  char local_d0;
  undefined7 uStack_cf;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 0x28) != '\x02') {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: self.temp_dir.is_none()src/uu/sort/src/tmp_dir.rsfailed to set up signal handler: line_numbersilentOpenFailederrorReadFailedParseKeyErrorkeymsgOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedUft8Error"
               ,0x29,&DAT_00300f78);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    local_60 = 6;
    local_70 = 1;
    local_68 = 0;
    local_58 = 0;
    local_88 = 0;
    uStack_80 = "uutils_sort";
    local_78 = 0xb;
    tempfile::Builder::tempdir_in(&local_e0,&local_88,param_1);
    if (local_d0 == '\x02') {
      init_tmp_dir::___closure__(&local_50,param_1,CONCAT44(uStack_dc,local_e0));
      uStack_b0 = uStack_38;
      local_a8 = local_30;
      uStack_a0 = uStack_28;
      local_98 = local_20;
      uStack_94 = uStack_1c;
      uStack_90 = uStack_18;
      uStack_8c = uStack_14;
      uVar4 = ::alloc::boxed::Box<T>::new(&local_c8);
      ppuVar5 = &PTR_drop_in_place<uu_sort_SortError>_00300f08;
LAB_002488c7:
      auVar6._8_8_ = ppuVar5;
      auVar6._0_8_ = uVar4;
      return auVar6;
    }
                    /* try { // try from 00248822 to 00248829 has its CatchHandler @ 00248924 */
    core::ptr::drop_in_place<core::option::Option<tempfile::dir::TempDir>>
              ((undefined4 *)(param_1 + 0x18));
    *(ulong *)(param_1 + 0x28) = CONCAT71(uStack_cf,local_d0);
    *(undefined4 *)(param_1 + 0x18) = local_e0;
    *(undefined4 *)(param_1 + 0x1c) = uStack_dc;
    *(undefined4 *)(param_1 + 0x20) = uStack_d8;
    *(undefined4 *)(param_1 + 0x24) = uStack_d4;
    if (*(char *)(param_1 + 0x28) != '\x02') {
      std::sys::pal::unix::os::split_paths::bytes_to_path
                (&local_50,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
      plVar2 = *(long **)(param_1 + 0x30);
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
        uStack_b0 = *(undefined8 *)(param_1 + 0x30);
        local_c8 = local_50;
        uStack_c4 = uStack_4c;
        uStack_c0 = uStack_48;
        uStack_bc = uStack_44;
        ctrlc::init_and_set_handler(&local_88,&local_c8,1);
        if (local_88 == 3) {
          uVar4 = 0;
        }
        else {
          local_c8 = local_88;
          uStack_c4 = uStack_84;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          uVar4 = init_tmp_dir::___closure__(&local_c8);
        }
        ppuVar5 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00301008;
        goto LAB_002488c7;
      }
      goto LAB_00248922;
    }
  }
  else {
    local_c8 = 0;
    uStack_c4 = 0;
    core::panicking::assert_failed(0,param_1 + 0x38,"",&local_c8,&DAT_00300fa8);
  }
  core::option::unwrap_failed(&DAT_00300f90);
LAB_00248922:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}