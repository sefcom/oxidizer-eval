undefined4 * __rustcall uu_sort::tmp_dir::TmpDirWrapper::next_file(undefined4 *param_1,long param_2)

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
  
  if ((*(char *)(param_2 + 0x28) == '\x02') && (auVar4 = init_tmp_dir(param_2), auVar4._0_8_ != 0))
  {
    *(undefined (*) [16])(param_1 + 4) = auVar4;
    *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
    return param_1;
  }
  std::sync::mutex::Mutex<T>::lock(&local_78,*(long *)(param_2 + 0x30) + 0x10);
  uVar2 = core::result::Result<T,E>::unwrap(&local_78,&PTR_s_src_uu_sort_src_tmp_dir_rs_00300338);
                    /* try { // try from 002434f2 to 002434fe has its CatchHandler @ 0024363b */
  _<T_as_alloc::string::ToString>::to_string(&local_38,param_2 + 0x38);
  *(long *)(param_2 + 0x38) = *(long *)(param_2 + 0x38) + 1;
  if (*(char *)(param_2 + 0x28) != '\x02') {
    local_68 = local_28;
    local_78 = local_38;
    uStack_74 = uStack_34;
                    /* try { // try from 00243530 to 0024353e has its CatchHandler @ 00243627 */
    std::path::Path::join
              (&local_b0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20),&local_78);
                    /* try { // try from 0024353f to 0024354d has its CatchHandler @ 00243618 */
    std::fs::File::create(&local_78,&local_b0);
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
                    /* try { // try from 00243564 to 0024356d has its CatchHandler @ 002435fd */
      uVar3 = ::alloc::boxed::Box<T>::new(&local_78);
      *(undefined8 *)(param_1 + 4) = uVar3;
      *(undefined ***)(param_1 + 6) = &PTR_drop_in_place<uu_sort_SortError>_003001c8;
      *(undefined8 *)(param_1 + 2) = 0x8000000000000000;
                    /* try { // try from 0024358b to 00243594 has its CatchHandler @ 002435f8 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_b0);
    }
    core::ptr::drop_in_place<std::sync::mutex::MutexGuard<()>>(uVar2,extraout_DL & 1);
    return param_1;
  }
                    /* try { // try from 002435eb to 002435f7 has its CatchHandler @ 00243629 */
  uVar3 = core::option::unwrap_failed(&PTR_s_src_uu_sort_src_tmp_dir_rs_00300350);
                    /* catch() { ... } // from try @ 0024358b with catch @ 002435f8 */
  core::ptr::drop_in_place<std::sync::mutex::MutexGuard<()>>(uVar2,extraout_DL & 1);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar3);
}