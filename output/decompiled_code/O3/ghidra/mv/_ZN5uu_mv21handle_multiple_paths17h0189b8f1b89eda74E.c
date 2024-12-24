void __rustcall uu_mv::handle_multiple_paths(long param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined auVar3 [16];
  undefined8 *local_98;
  code *local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined local_40;
  undefined local_38 [24];
  undefined4 local_20;
  
  local_78 = (undefined *)&local_98;
  if (*(char *)(param_3 + 0x30) == '\0') {
    if (param_2 == 0) {
      core::option::unwrap_failed(&PTR_s_src_uu_mv_src_mv_rs_00287240);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar1 = param_2 - 1;
    auVar3 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index
                       (lVar1,param_1,param_2);
    move_files_into_dir(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 8 + lVar1 * 0x18),
                        *(undefined8 *)(param_1 + 0x10 + lVar1 * 0x18),param_3);
  }
  else {
    if (param_2 < 3) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic_bounds_check(2,param_2,&PTR_s_src_uu_mv_src_mv_rs_00287270);
    }
    local_50 = *(undefined4 *)(param_1 + 0x38);
    uStack_4c = *(undefined4 *)(param_1 + 0x3c);
    uStack_48 = *(undefined4 *)(param_1 + 0x40);
    uStack_44 = *(undefined4 *)(param_1 + 0x44);
    local_58 = 1;
    local_40 = 1;
    local_98 = &local_58;
    local_90 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_88 = &PTR_s_mv__extra_operand_00287288;
    local_80 = 1;
    local_68 = 0;
    local_70 = 1;
    core::option::Option<T>::map_or_else(local_38,&local_88);
    local_20 = 1;
    ::alloc::boxed::Box<T>::new(local_38);
  }
  return;
}