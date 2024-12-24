undefined  [16] __rustcall uu_sync::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_RDX;
  ulong uVar8;
  undefined auVar9 [16];
  long local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined local_348 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  long local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  uVar8 = 0x8000000000000000;
  (*(code *)PTR_uu_app_00213b50)(&local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_388,&local_2f8,param_1,param_2);
  if (CONCAT44(uStack_384,local_388) == -0x8000000000000000) {
    auVar9 = (*(code *)PTR_from_00213b58)();
    return auVar9;
  }
  local_328 = local_368;
  uStack_324 = uStack_364;
  uStack_320 = uStack_360;
  uStack_31c = uStack_35c;
  local_338 = local_378;
  uStack_334 = uStack_374;
  uStack_330 = uStack_370;
  uStack_32c = uStack_36c;
  uVar6 = *(undefined8 *)PTR_ARG_FILES_00213b60;
  uVar1 = *(undefined8 *)(PTR_ARG_FILES_00213b60 + 8);
                    /* try { // try from 00160f51 to 00160fd1 has its CatchHandler @ 00161234 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_2f8,local_348,uVar6,uVar1);
  clap_builder::parser::error::MatchesError::unwrap(&local_388,uVar6,uVar1,&local_2f8);
  if (CONCAT44(uStack_384,local_388) == 0) {
LAB_00160fef:
    local_3a8 = 0;
    uStack_3a0 = 8;
    local_398 = 0;
  }
  else {
    local_2c8 = local_358;
    uStack_2c4 = uStack_354;
    uStack_2c0 = uStack_350;
    uStack_2bc = uStack_34c;
    local_2d8 = local_368;
    uStack_2d4 = uStack_364;
    uStack_2d0 = uStack_360;
    uStack_2cc = uStack_35c;
    local_2e8 = CONCAT44(uStack_374,local_378);
    uStack_2e0 = uStack_370;
    uStack_2dc = uStack_36c;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_310,&local_2f8);
    if (local_310 == -0x8000000000000000) goto LAB_00160fef;
    uStack_3a0 = CONCAT44(uStack_304,local_308);
    local_398 = CONCAT44(uStack_2fc,uStack_300);
    local_3a8 = local_310;
  }
  uVar6 = *(undefined8 *)PTR_DATA_00213b68;
  uVar1 = *(undefined8 *)(PTR_DATA_00213b68 + 8);
                    /* try { // try from 0016102a to 00161091 has its CatchHandler @ 00161232 */
  bVar3 = (*(code *)PTR_get_flag_00213b70)(local_348,uVar6,uVar1);
  if ((bVar3 & local_398 == 0) == 0) {
    uStack_2f0 = uStack_3a0 + local_398 * 0x18;
    local_2f8 = uStack_3a0;
    local_390 = uVar6;
    lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_2f8)
    ;
    if (lVar7 != 0) {
      do {
        uVar8 = *(ulong *)(lVar7 + 8);
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
                    /* try { // try from 00161108 to 0016113f has its CatchHandler @ 00161239 */
        iVar5 = nix::fcntl::open(uVar8,uVar6,0x800,0);
        if ((iVar5 == 1) &&
           ((((int)extraout_RDX != 0xd ||
             (cVar4 = (*(code *)PTR_is_dir_00213b78)(uVar8,uVar6), cVar4 != '\0')) &&
            (auVar9 = _<nix::errno::consts::Errno_as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                      ::map_err_context(extraout_RDX & 0xffffffff,lVar7), auVar9._0_8_ != 0))))
        goto LAB_001611ef;
        lVar7 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_2f8);
      } while (lVar7 != 0);
    }
                    /* try { // try from 0016115b to 00161165 has its CatchHandler @ 00161232 */
    cVar4 = (*(code *)PTR_get_flag_00213b70)
                      (local_348,*(undefined8 *)PTR_FILE_SYSTEM_00213b80,
                       *(undefined8 *)(PTR_FILE_SYSTEM_00213b80 + 8));
    if (cVar4 == '\0') {
                    /* try { // try from 00161198 to 001611a5 has its CatchHandler @ 00161232 */
      cVar4 = (*(code *)PTR_get_flag_00213b70)(local_348,local_390,uVar1);
      if (cVar4 != '\0') {
        local_2e8 = local_398;
        local_2f8 = local_3a8;
        uStack_2f0 = uStack_3a0;
                    /* try { // try from 001611c3 to 001611d0 has its CatchHandler @ 00161230 */
        auVar9 = (*(code *)PTR_fdatasync_00213b90)(&local_2f8);
        goto LAB_001611d1;
      }
                    /* try { // try from 001611de to 001611e3 has its CatchHandler @ 00161232 */
      auVar9 = (*(code *)PTR_sync_00213b98)();
      if (auVar9._0_8_ != 0) goto LAB_001611ef;
                    /* try { // try from 00161219 to 00161220 has its CatchHandler @ 00161234 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3a8);
    }
    else {
      local_2e8 = local_398;
      local_2f8 = local_3a8;
      uStack_2f0 = uStack_3a0;
                    /* try { // try from 00161188 to 00161195 has its CatchHandler @ 00161230 */
      auVar9 = (*(code *)PTR_syncfs_00213b88)(&local_2f8);
LAB_001611d1:
      if (auVar9._0_8_ != 0) goto LAB_001611f7;
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_348);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    auVar9 = auVar2 << 0x40;
  }
  else {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_388,"--data needs at least one argument",0x22);
    local_2e8 = CONCAT44(uStack_374,local_378);
    local_2f8 = CONCAT44(uStack_384,local_388);
    uStack_2f0 = CONCAT44(uStack_37c,uStack_380);
    uStack_2e0 = 1;
    uVar6 = ::alloc::boxed::Box<T>::new(&local_2f8);
    auVar9._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_0020d928;
    auVar9._0_8_ = uVar6;
LAB_001611ef:
                    /* try { // try from 001611ef to 001611f6 has its CatchHandler @ 00161234 */
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3a8);
LAB_001611f7:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(local_348);
  }
  return auVar9;
}