void __rustcall uu_basenc::parse_cmd_args(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined uVar1;
  long lVar2;
  undefined **local_370;
  undefined **local_368;
  undefined local_358 [16];
  undefined4 local_348;
  undefined8 uStack_33c;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 local_310;
  undefined8 uStack_304;
  undefined4 local_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  long local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  long local_2c0;
  
  (*(code *)PTR_uu_app_002544b0)(&local_2e8);
                    /* try { // try from 0017c164 to 0017c173 has its CatchHandler @ 0017c2f3 */
  uucore::Args::collect_lossy(&local_370,param_2,param_3);
  clap_builder::builder::command::Command::try_get_matches_from(&local_320,&local_2e8,&local_370);
  if (CONCAT44(uStack_31c,local_320) == -0x8000000000000000) {
    lVar2 = ::alloc::boxed::Box<T>::new();
    param_1[1] = lVar2;
    param_1[2] = (long)&PTR_drop_in_place<uucore_mods_error_ClapErrorWrapper>_0024d520;
    *param_1 = 2;
    return;
  }
  uStack_33c = uStack_304;
  local_334 = local_2fc;
  uStack_330 = uStack_2f8;
  uStack_32c = uStack_2f4;
  uStack_328 = uStack_2f0;
  local_324 = local_2ec;
  local_348 = local_310;
  local_370 = &PTR_DAT_0024d300;
  local_368 = &PTR_drop_in_place<uucore_mods_error_UUsageError>_0024d440;
                    /* try { // try from 0017c20d to 0017c29b has its CatchHandler @ 0017c305 */
  lVar2 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::find
                    (&local_370,local_358);
  if (lVar2 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_320);
    local_2e8 = local_320;
    uStack_2e4 = uStack_31c;
    uStack_2e0 = uStack_318;
    uStack_2dc = uStack_314;
    local_2d0 = 1;
    lVar2 = ::alloc::boxed::Box<T>::new(&local_2e8);
    param_1[1] = lVar2;
    param_1[2] = (long)&PTR_drop_in_place<uucore_mods_error_UUsageError>_0024d478;
  }
  else {
    uVar1 = *(undefined *)(lVar2 + 0x10);
    (*(code *)PTR_from_002544b8)(&local_2e8,local_358);
    if (CONCAT44(uStack_2e4,local_2e8) != 2) {
      param_1[5] = local_2c0;
      *(undefined4 *)(param_1 + 3) = local_2d0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_2cc;
      *(undefined4 *)(param_1 + 4) = uStack_2c8;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_2c4;
      *param_1 = CONCAT44(uStack_2e4,local_2e8);
      param_1[1] = CONCAT44(uStack_2dc,uStack_2e0);
      param_1[2] = local_2d8;
      *(undefined *)(param_1 + 6) = uVar1;
      goto LAB_0017c2db;
    }
    param_1[1] = CONCAT44(uStack_2dc,uStack_2e0);
    param_1[2] = local_2d8;
  }
  *param_1 = 2;
LAB_0017c2db:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_358);
  return;
}