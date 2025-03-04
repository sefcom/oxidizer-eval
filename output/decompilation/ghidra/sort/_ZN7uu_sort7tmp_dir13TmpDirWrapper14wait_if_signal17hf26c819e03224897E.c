void _ZN7uu_sort7tmp_dir13TmpDirWrapper14wait_if_signal17hf26c819e03224897E(long param_1)

{
  undefined8 uVar1;
  byte extraout_DL;
  undefined local_20 [24];
  
  _ZN3std4sync5mutex14Mutex_LT_T_GT_4lock17h2fdf4238f9db328bE
            (local_20,*(long *)(param_1 + 0x30) + 0x10);
  uVar1 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17he8ec3f841ca899b2E(local_20,&DAT_003010a8);
  _ZN4core3ptr65drop_in_place_LT_std__sync__mutex__MutexGuard_LT__LP__RP__GT__GT_17h1ece0fb60dffd106E
            (uVar1,extraout_DL & 1);
  return;
}