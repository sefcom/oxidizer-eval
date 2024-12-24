undefined  [16] __rustcall uu_link::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [16];
  code *local_360;
  long *local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined8 local_328;
  code *local_320;
  long *local_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  code *local_2e8;
  long *local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 local_2b0;
  
  (*(code *)PTR_uu_app_00210fb0)(&local_2e8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_360,&local_2e8,param_1,param_2);
  if (local_360 == (code *)0x8000000000000000) {
    auVar9 = (*(code *)PTR_from_00210fb8)();
    return auVar9;
  }
  local_2f0 = local_330;
  local_300 = local_340;
  uStack_2fc = uStack_33c;
  uStack_2f8 = uStack_338;
  uStack_2f4 = uStack_334;
  local_310 = local_350;
  uStack_30c = uStack_34c;
  uStack_308 = uStack_348;
  uStack_304 = uStack_344;
  local_320 = local_360;
  local_318 = local_358;
  uVar6 = *(undefined8 *)PTR_FILES_00210fc0;
  uVar1 = *(undefined8 *)(PTR_FILES_00210fc0 + 8);
                    /* try { // try from 00161fbb to 0016206c has its CatchHandler @ 00162142 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2e8,&local_320,uVar6,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_360,uVar6,uVar1,&local_2e8);
  local_2e0 = local_358;
  uVar7 = local_350;
  uVar8 = uStack_34c;
  if (local_360 == (code *)0x0) {
    local_340 = 0;
    uStack_33c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    local_360 = core::ops::function::FnOnce::call_once;
    local_328 = 0;
    local_2e0 = (long *)PTR_EMPTY_00210fc8;
    local_330 = uVar6;
    uVar7 = (int)PTR_EMPTY_00210fc8;
    uVar8 = (int)((ulong)PTR_EMPTY_00210fc8 >> 0x20);
  }
  local_2d8 = CONCAT44(uVar8,uVar7);
  uStack_2d0 = CONCAT44(uStack_344,uStack_348);
  local_2e8 = local_360;
  local_2c8 = local_340;
  uStack_2c4 = uStack_33c;
  uStack_2c0 = uStack_338;
  uStack_2bc = uStack_334;
  local_2b8 = local_330;
  local_2b0 = local_328;
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (&local_360,&local_2e8);
  if (CONCAT44(uStack_34c,local_350) == 0) {
    puVar5 = &DAT_0020af80;
    uVar6 = 0;
  }
  else {
    if (CONCAT44(uStack_34c,local_350) != 1) {
      uVar6 = *(undefined8 *)(*local_358 + 8);
      uVar1 = *(undefined8 *)(*local_358 + 0x10);
      pcVar2 = *(code **)(local_358[1] + 8);
      uVar3 = *(undefined8 *)(local_358[1] + 0x10);
                    /* try { // try from 001620a1 to 001620e1 has its CatchHandler @ 00162133 */
      uVar4 = std::fs::hard_link(uVar6,uVar1,pcVar2,uVar3);
      local_2e8 = pcVar2;
      local_2e0 = (long *)uVar3;
      local_2d8 = uVar6;
      uStack_2d0 = uVar1;
      auVar9 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
               ::map_err_context(uVar4,&local_2e8);
                    /* try { // try from 001620e2 to 001620f1 has its CatchHandler @ 00162142 */
      core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsString>>(&local_360);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_320);
      return auVar9;
    }
    puVar5 = &DAT_0020af98;
    uVar6 = 1;
  }
                    /* try { // try from 00162128 to 00162130 has its CatchHandler @ 00162133 */
  (*(code *)PTR_panic_bounds_check_00210ed8)(uVar6,uVar6,puVar5);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}