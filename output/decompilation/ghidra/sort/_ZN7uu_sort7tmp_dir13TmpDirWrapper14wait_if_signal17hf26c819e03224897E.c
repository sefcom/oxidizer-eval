void __rustcall uu_sort::tmp_dir::TmpDirWrapper::wait_if_signal(long param_1)

{
  undefined8 uVar1;
  byte extraout_DL;
  undefined local_20 [24];
  
  std::sync::mutex::Mutex<T>::lock(local_20,*(long *)(param_1 + 0x30) + 0x10);
  uVar1 = core::result::Result<T,E>::unwrap(local_20,&DAT_003010a8);
  core::ptr::drop_in_place<std::sync::mutex::MutexGuard<()>>(uVar1,extraout_DL & 1);
  return;
}