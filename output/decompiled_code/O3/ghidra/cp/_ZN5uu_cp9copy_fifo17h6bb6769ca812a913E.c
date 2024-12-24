void __rustcall
uu_cp::copy_fifo(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined param_4,
                undefined param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 *local_128;
  code *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 **local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  std::fs::metadata(&local_e0);
  iVar1 = (int)local_e0;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&local_e0)
  ;
  if (iVar1 != 2) {
    OverwriteMode::verify(&local_e0,param_4,param_2,param_3,param_5);
    if ((int)local_e0 != 0xd) {
      param_1[6] = local_b0;
      param_1[7] = uStack_a8;
      param_1[4] = local_c0;
      param_1[5] = uStack_b8;
      param_1[2] = local_d0;
      param_1[3] = uStack_c8;
      *param_1 = local_e0;
      param_1[1] = uStack_d8;
      return;
    }
    lVar3 = std::fs::remove_file(param_2,param_3);
    if (lVar3 != 0) {
      *param_1 = 2;
      param_1[1] = lVar3;
      return;
    }
  }
  _<&str_as_alloc::ffi::c_str::CString::new::SpecNewImpl>::spec_new_impl(&local_e0,param_2,param_3);
  auVar4 = core::result::Result<T,E>::unwrap(&local_e0);
  uVar2 = auVar4._0_8_;
  iVar1 = (*(code *)PTR_mkfifo_002bb950)(uVar2,0x1b6);
  if (iVar1 == -1) {
    local_118 = 1;
    local_100 = 1;
    local_128 = &local_118;
    local_120 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_e0 = &PTR_s_cannot_create_fifo___File_exists_002b59c0;
    uStack_d8 = 2;
    local_c0 = 0;
    local_d0 = &local_128;
    uStack_c8 = 1;
                    /* try { // try from 00207d48 to 00207d56 has its CatchHandler @ 00207d92 */
    local_110 = param_2;
    local_108 = param_3;
    core::option::Option<T>::map_or_else(&local_f8,&local_e0);
    param_1[3] = local_e8;
    *(undefined4 *)(param_1 + 1) = local_f8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_f4;
    *(undefined4 *)(param_1 + 2) = uStack_f0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_ec;
    *param_1 = 4;
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(uVar2,auVar4._8_8_);
    return;
  }
  *param_1 = 0xd;
  core::ptr::drop_in_place<alloc::ffi::c_str::CString>(uVar2,auVar4._8_8_);
  return;
}