undefined  [16] __rustcall uu_readlink::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined auVar12 [16];
  undefined local_3dc;
  undefined local_3d8 [16];
  code *pcStack_3c8;
  undefined8 local_3b8;
  undefined8 *local_3b0;
  code *local_3a8;
  code *pcStack_3a0;
  code *local_398;
  code *pcStack_390;
  undefined local_388 [16];
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
  undefined **local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  code *local_300;
  undefined local_2f8 [16];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR_uu_app_0021f778)(local_2f8);
  clap_builder::builder::command::Command::try_get_matches_from(local_388,local_2f8,param_1,param_2)
  ;
  if ((undefined **)local_388._0_8_ == (undefined **)0x8000000000000000) {
    auVar12 = (*(code *)PTR_from_0021f780)();
    return auVar12;
  }
  local_328 = local_368;
  uStack_324 = uStack_364;
  uStack_320 = uStack_360;
  uStack_31c = uStack_35c;
  local_338 = local_378;
  uStack_334 = uStack_374;
  uStack_330 = uStack_370;
  uStack_32c = uStack_36c;
  local_348 = (undefined **)local_388._0_8_;
  local_340 = local_388._8_8_;
                    /* try { // try from 001692b2 to 00169488 has its CatchHandler @ 00169962 */
  cVar3 = (*(code *)PTR_get_flag_0021f788)(&local_348,"no-newline",10);
  cVar4 = (*(code *)PTR_get_flag_0021f788)(&local_348,&DAT_00114730,4);
  cVar5 = (*(code *)PTR_get_flag_0021f788)(&local_348,"silent",6);
  uVar11 = CONCAT71((int7)((ulong)local_2f8 >> 8),1);
  if (cVar5 == '\0') {
    uVar8 = (*(code *)PTR_get_flag_0021f788)(&local_348,"quiet",5);
    uVar11 = (ulong)uVar8;
  }
  cVar5 = (*(code *)PTR_get_flag_0021f788)(&local_348,"verbose",7);
  cVar6 = (*(code *)PTR_get_flag_0021f788)(&local_348,"canonicalize",0xc);
  if (((cVar6 == '\0') &&
      (cVar6 = (*(code *)PTR_get_flag_0021f788)(&local_348,"canonicalize-existing",0x15),
      cVar6 == '\0')) &&
     (cVar6 = (*(code *)PTR_get_flag_0021f788)(&local_348,"canonicalize-missing",0x14),
     cVar6 == '\0')) {
    bVar1 = true;
    local_3dc = 0;
  }
  else {
    local_3dc = 2;
    bVar1 = false;
  }
  cVar7 = (*(code *)PTR_get_flag_0021f788)(&local_348,"canonicalize-existing",0x15);
  cVar6 = '\x01';
  if (cVar7 == '\0') {
    cVar6 = (*(code *)PTR_get_flag_0021f788)(&local_348,"canonicalize-missing",0x14);
    cVar6 = cVar6 * '\x02';
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (local_2f8,&local_348,"files",5);
  clap_builder::parser::error::MatchesError::unwrap(local_388,"files",5,local_2f8);
  if ((undefined **)local_388._0_8_ == (undefined **)0x0) {
LAB_001694ab:
    local_3b0 = (undefined8 *)0x0;
    local_3a8 = (code *)0x8;
    pcStack_3a0 = (code *)0x0;
  }
  else {
    local_2c8 = local_358;
    uStack_2c4 = uStack_354;
    uStack_2c0 = uStack_350;
    uStack_2bc = uStack_34c;
    local_2d8 = CONCAT44(uStack_364,local_368);
    uStack_2d0 = uStack_360;
    uStack_2cc = uStack_35c;
    local_2e8 = (code *)CONCAT44(uStack_374,local_378);
    uStack_2e0 = CONCAT44(uStack_36c,uStack_370);
    local_2f8._0_8_ = local_388._0_8_;
    local_2f8._8_8_ = local_388._8_8_;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (local_3d8,local_2f8);
    local_3b0 = (undefined8 *)local_3d8._0_8_;
    local_398 = (code *)local_3d8._8_8_;
    pcStack_390 = pcStack_3c8;
    if ((undefined8 *)local_3d8._0_8_ == (undefined8 *)0x8000000000000000) goto LAB_001694ab;
    local_3a8 = (code *)local_3d8._8_8_;
    pcStack_3a0 = pcStack_3c8;
    if (pcStack_3c8 != (code *)0x0) {
      if ((char)uVar11 == '\0' && (cVar3 == '\x01' && pcStack_3c8 != (code *)0x1)) {
                    /* try { // try from 0016958d to 00169636 has its CatchHandler @ 00169953 */
        local_388 = (*(code *)PTR_util_name_0021f758)();
        local_3d8._8_8_ = _<&T_as_core::fmt::Display>::fmt;
        local_2f8._0_8_ = &DAT_002190e8;
        local_2f8._8_8_ = 2;
        local_2d8 = 0;
        uStack_2e0 = 1;
        local_3d8._0_8_ = local_388;
        local_2e8 = (code *)local_3d8;
        (*(code *)PTR__eprint_0021f760)(local_2f8);
        local_2f8._0_8_ = &PTR_s_ignoring___no_newline_with_multi_002191d8;
        local_2f8._8_8_ = 1;
        local_2e8 = (code *)0x8;
        uStack_2e0 = 0;
        local_2d8 = 0;
        (*(code *)PTR__eprint_0021f760)(local_2f8);
      }
      else {
        uVar11 = CONCAT71((int7)(uVar11 >> 8),0xb);
        if (cVar3 != '\0') goto LAB_00169648;
      }
      uVar11 = 10;
      if (cVar4 != '\0') {
        uVar11 = 0;
      }
LAB_00169648:
      pcStack_390 = local_3a8 + (long)pcStack_3a0 * 0x18;
      local_398 = local_3a8;
      lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_398);
      if (lVar10 != 0) {
        if (bVar1) {
          do {
                    /* try { // try from 001696a8 to 001696b0 has its CatchHandler @ 00169951 */
            (*(code *)PTR_to_owned_0021f790)
                      (local_2f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            pcStack_3c8 = local_2e8;
            local_3d8 = local_2f8;
                    /* try { // try from 001696cb to 001696d5 has its CatchHandler @ 00169942 */
            std::fs::read_link(local_388,local_3d8);
            if (local_388._0_8_ == -0x8000000000000000) goto LAB_00169850;
            local_2e8 = (code *)CONCAT44(uStack_374,local_378);
            local_2f8 = local_388;
                    /* try { // try from 0016970d to 0016971c has its CatchHandler @ 0016992c */
            uVar9 = (*(code *)PTR_show_0021f798)(local_388._8_8_,local_2e8,uVar11 & 0xff);
            auVar12 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                      ::map_err_context(uVar9);
            if (auVar12._0_8_ != 0) goto LAB_001698d0;
                    /* try { // try from 00169729 to 00169730 has its CatchHandler @ 00169942 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_2f8);
                    /* try { // try from 00169731 to 00169738 has its CatchHandler @ 00169951 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_3d8);
            lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_398);
          } while (lVar10 != 0);
        }
        else {
          do {
                    /* try { // try from 00169778 to 00169785 has its CatchHandler @ 00169940 */
            (*(code *)PTR_to_owned_0021f790)
                      (local_2f8,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
            pcStack_3c8 = local_2e8;
                    /* try { // try from 001697a0 to 001697b1 has its CatchHandler @ 0016993e */
            local_3d8 = local_2f8;
            uucore::features::fs::canonicalize(local_388,local_3d8,cVar6,local_3dc);
            if (local_388._0_8_ == -0x8000000000000000) goto LAB_00169850;
            local_2e8 = (code *)CONCAT44(uStack_374,local_378);
            local_2f8 = local_388;
                    /* try { // try from 001697e9 to 001697f9 has its CatchHandler @ 0016992a */
            uVar9 = (*(code *)PTR_show_0021f798)(local_388._8_8_,local_2e8,uVar11 & 0xff);
            auVar12 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                      ::map_err_context(uVar9);
            if (auVar12._0_8_ != 0) goto LAB_001698d0;
                    /* try { // try from 00169806 to 00169812 has its CatchHandler @ 0016993e */
            core::ptr::drop_in_place<std::path::PathBuf>(local_2f8);
                    /* try { // try from 00169813 to 0016981a has its CatchHandler @ 00169940 */
            core::ptr::drop_in_place<std::path::PathBuf>(local_3d8);
            lVar10 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                               (&local_398);
          } while (lVar10 != 0);
        }
      }
                    /* try { // try from 00169831 to 0016983a has its CatchHandler @ 00169962 */
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3b0);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_348);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar11;
      return auVar2 << 0x40;
    }
  }
                    /* try { // try from 001694c6 to 00169501 has its CatchHandler @ 00169953 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(local_388);
  local_2e8 = (code *)CONCAT44(uStack_374,local_378);
  local_2f8._0_8_ = local_388._0_8_;
  local_2f8._8_8_ = local_388._8_8_;
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
  uVar9 = ::alloc::boxed::Box<T>::new(local_2f8);
  auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00219168;
  auVar12._0_8_ = uVar9;
  goto LAB_0016950c;
LAB_001698d0:
                    /* try { // try from 001698d3 to 001698df has its CatchHandler @ 00169928 */
  core::ptr::drop_in_place<std::path::PathBuf>(local_2f8);
  goto LAB_001698fb;
LAB_00169850:
  uVar9 = local_388._8_8_;
  if (cVar5 == '\0') {
                    /* try { // try from 001698e2 to 001698ec has its CatchHandler @ 0016990a */
    auVar12 = (*(code *)PTR_from_0021f7a0)(1);
                    /* try { // try from 001698ed to 001698fa has its CatchHandler @ 00169928 */
    core::ptr::drop_in_place<std::io::error::Error>(uVar9);
  }
  else {
                    /* try { // try from 00169860 to 0016986a has its CatchHandler @ 00169917 */
    local_3b8 = _<std::io::error::Error_as_uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>
                ::map_err_context(local_388._8_8_,lVar10);
                    /* try { // try from 00169870 to 001698b9 has its CatchHandler @ 00169919 */
    _<T_as_alloc::string::ToString>::to_string(&local_310,&local_3b8);
    uStack_2e0 = CONCAT44(uStack_2e0._4_4_,1);
    local_2f8._4_4_ = uStack_30c;
    local_2f8._0_4_ = local_310;
    local_2f8._12_4_ = uStack_304;
    local_2f8._8_4_ = uStack_308;
    local_2e8 = local_300;
    uVar9 = ::alloc::boxed::Box<T>::new(local_2f8);
                    /* try { // try from 001698c2 to 001698c6 has its CatchHandler @ 00169917 */
    core::ptr::drop_in_place<alloc::boxed::Box<uucore::mods::error::UIoError>>(local_3b8);
    auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_UUsageError>_00219220;
    auVar12._0_8_ = uVar9;
  }
LAB_001698fb:
                    /* try { // try from 001698fb to 00169904 has its CatchHandler @ 00169953 */
  core::ptr::drop_in_place<std::path::PathBuf>(local_3d8);
LAB_0016950c:
                    /* try { // try from 0016950c to 00169515 has its CatchHandler @ 00169962 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_3b0);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_348);
  return auVar12;
}