void __rustcall uu_cp::platform::linux::check_for_data(ulong *param_1)

{
  undefined4 uVar1;
  undefined uVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  undefined4 local_e4;
  ulong local_e0;
  long local_d8;
  int local_d0;
  undefined4 local_cc;
  ulong local_c8;
  long local_c0;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  
  std::fs::File::open(&local_d0);
  if (local_d0 != 0) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
    return;
  }
  local_e4 = local_cc;
                    /* try { // try from 002123fa to 00212462 has its CatchHandler @ 0021250e */
  std::fs::File::metadata(&local_d0,&local_e4);
  if (local_d0 == 2) {
    *param_1 = local_c8;
    *(undefined *)(param_1 + 1) = 2;
    uVar1 = local_cc;
  }
  else if (local_80 == 0) {
    _<u8_as_alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&local_d0,local_78);
                    /* try { // try from 0021246d to 0021247d has its CatchHandler @ 002124f9 */
    auVar5 = _<std::fs::File_as_std::io::Read>::read(&local_e4,local_c8,local_c0);
    uVar4 = auVar5._8_8_;
    if (auVar5._0_8_ == 0) {
      local_d8 = local_c0 + local_c8;
      local_e0 = local_c8;
      uVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any(&local_e0)
      ;
      param_1[2] = 0;
      uVar4 = 0;
    }
    else {
      uVar2 = 2;
    }
    *param_1 = uVar4;
    *(undefined *)(param_1 + 1) = uVar2;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_d0);
    uVar1 = local_e4;
  }
  else {
    lVar3 = (*(code *)PTR_lseek_002bb980)(local_cc,0,3);
    if (lVar3 == -1) {
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 0;
    }
    else {
      if (lVar3 < 0) {
                    /* try { // try from 00212494 to 002124df has its CatchHandler @ 0021250e */
        lVar3 = std::sys::pal::unix::os::errno();
        *param_1 = lVar3 << 0x20 | 2;
        *(undefined *)(param_1 + 1) = 2;
        uVar1 = local_e4;
        goto LAB_002124e6;
      }
      *param_1 = local_80;
      *(undefined *)(param_1 + 1) = 1;
    }
    param_1[2] = local_70;
    uVar1 = local_e4;
  }
LAB_002124e6:
  core::ptr::drop_in_place<std::fs::File>(uVar1);
  return;
}