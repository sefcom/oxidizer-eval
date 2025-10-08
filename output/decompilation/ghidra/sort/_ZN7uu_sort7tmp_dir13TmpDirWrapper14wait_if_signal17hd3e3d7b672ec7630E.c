void _ZN7uu_sort7tmp_dir13TmpDirWrapper14wait_if_signal17hd3e3d7b672ec7630E(long param_1)

{
  undefined8 uVar1;
  byte extraout_DL;
  undefined local_20 [24];
  
  _ZN3std4sync6poison5mutex14Mutex_LT_T_GT_4lock17h2a065fc042bff740E
            (local_20,*(long *)(param_1 + 0x30) + 0x10);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd0a5bb82409ec627E
                    (local_20,&PTR_s_src_uu_sort_src_tmp_dir_rs__0028cbb8);
  _ZN4core3ptr136drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_std__io__buffered__bufreader__BufReader_LT_std__io__stdio__StdinRaw_GT__GT__GT_17h1d94eac551d99a4dE
            (uVar1,extraout_DL & 1);
  return;
}