undefined  [16] __rustcall uu_wc::count_fast::count_bytes_fast(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  int local_4028 [8];
  byte local_4007;
  undefined8 local_3028;
  undefined8 local_2028;
  undefined8 local_1028;
  
  local_1028 = 0;
  local_2028 = 0;
  local_3028 = 0;
  lVar3 = 0;
  nix::sys::stat::fstat(local_4028,0);
  if (local_4028[0] == 0) {
    if ((local_4007 & 0x10) == 0) {
      lVar3 = 0;
    }
    else {
      auVar5 = count_bytes_using_splice(param_1);
      lVar3 = auVar5._8_8_;
      if (auVar5._0_8_ == 0) goto LAB_001b8c5c;
    }
  }
  (*(code *)PTR_memset_00236600)(local_4028,0,0x4000);
  lVar1 = lVar3;
  do {
    while( true ) {
      lVar3 = lVar1;
      auVar5 = _<std::io::stdio::StdinLock_as_std::io::Read>::read(param_1,local_4028,0x4000);
      lVar4 = auVar5._8_8_;
      if (auVar5._0_8_ == 0) break;
      cVar2 = std::io::error::Error::kind(lVar4);
      if (cVar2 != '#') goto LAB_001b8c5f;
      core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(lVar4);
      lVar1 = lVar3;
    }
    lVar1 = lVar3 + lVar4;
  } while (lVar4 != 0);
LAB_001b8c5c:
  lVar4 = 0;
LAB_001b8c5f:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}