undefined  [16] __rustcall uu_cat::uumain::uumain(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char cVar17;
  char cVar18;
  undefined uVar19;
  undefined uVar20;
  undefined uVar21;
  undefined uVar22;
  undefined4 *puVar23;
  undefined auVar24 [16];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined4 *local_318;
  long *plStack_310;
  undefined8 local_308;
  long local_300;
  undefined8 uStack_2f8;
  undefined local_2e8 [624];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  (*(code *)PTR_uu_app_0021cc60)(&local_348);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3e8,&local_348,param_1,param_2);
  if (local_3e8 == (undefined4 *)0x8000000000000000) {
    auVar24 = (*(code *)PTR_from_0021cc68)();
    return auVar24;
  }
  local_380 = local_3c8;
  uStack_37c = uStack_3c4;
  uStack_378 = uStack_3c0;
  uStack_374 = uStack_3bc;
  local_390 = local_3d8;
  uStack_38c = uStack_3d4;
  uStack_388 = uStack_3d0;
  uStack_384 = uStack_3cc;
  local_3a0 = (long)local_3e8;
  local_398 = uStack_3e0;
                    /* try { // try from 00166333 to 0016638b has its CatchHandler @ 00166934 */
  cVar17 = (*(code *)PTR_get_flag_0021cc78)
                     (&local_3a0,*(undefined8 *)PTR_NUMBER_NONBLANK_0021cc70,
                      *(undefined8 *)(PTR_NUMBER_NONBLANK_0021cc70 + 8));
  cVar18 = '\x01';
  if (cVar17 == '\0') {
    cVar18 = (*(code *)PTR_get_flag_0021cc78)
                       (&local_3a0,*(undefined8 *)PTR_NUMBER_0021cc80,
                        *(undefined8 *)(PTR_NUMBER_0021cc80 + 8));
    cVar18 = cVar18 * '\x02';
  }
  uVar1 = *(undefined8 *)PTR_SHOW_ALL_0021cc88;
  uVar2 = *(undefined8 *)(PTR_SHOW_ALL_0021cc88 + 8);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  local_358 = local_338;
  local_368 = local_348;
  uStack_364 = uStack_344;
  uStack_360 = (undefined4)uStack_340;
  uStack_35c = uStack_340._4_4_;
  uVar3 = *(undefined8 *)PTR_SHOW_NONPRINTING_ENDS_0021cc90;
  uVar4 = *(undefined8 *)(PTR_SHOW_NONPRINTING_ENDS_0021cc90 + 8);
                    /* try { // try from 001663ba to 001663cc has its CatchHandler @ 00166922 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar3,uVar4);
  uVar15 = local_338;
  local_3a8 = *(undefined8 *)PTR_SHOW_NONPRINTING_TABS_0021cc98;
  uVar5 = *(undefined8 *)(PTR_SHOW_NONPRINTING_TABS_0021cc98 + 8);
                    /* try { // try from 001663f5 to 0016640f has its CatchHandler @ 00166913 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,local_3a8,uVar5);
  uVar16 = local_338;
                    /* try { // try from 00166438 to 00166441 has its CatchHandler @ 00166904 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_3e8,*(undefined8 *)PTR_SHOW_NONPRINTING_0021cca0,
             *(undefined8 *)(PTR_SHOW_NONPRINTING_0021cca0 + 8));
  local_300 = (long)local_3e8;
  uStack_2f8 = uStack_3e0;
  local_348 = local_368;
  uStack_344 = uStack_364;
  uStack_340._0_4_ = uStack_360;
  uStack_340._4_4_ = uStack_35c;
  local_338 = local_358;
  local_320 = uVar15;
  local_308 = uVar16;
  uStack_3e0 = (long *)local_2e8;
                    /* try { // try from 001664c2 to 001664d7 has its CatchHandler @ 001668f2 */
  local_3e8 = &local_348;
  uVar19 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 001664d8 to 001664ff has its CatchHandler @ 00166934 */
  core::ptr::drop_in_place<[alloc::string::String_4]>(&local_348);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_348,*(undefined8 *)PTR_SHOW_ENDS_0021cca8,
             *(undefined8 *)(PTR_SHOW_ENDS_0021cca8 + 8));
  uVar15 = local_338;
  uVar13 = uStack_340._4_4_;
  uVar11 = (undefined4)uStack_340;
  uVar9 = uStack_344;
  uVar7 = local_348;
                    /* try { // try from 0016651a to 0016652f has its CatchHandler @ 001668e3 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  uVar16 = local_338;
  uVar14 = uStack_340._4_4_;
  uVar12 = (undefined4)uStack_340;
  uVar10 = uStack_344;
  uVar8 = local_348;
                    /* try { // try from 0016654a to 00166559 has its CatchHandler @ 001668d4 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3e8,uVar3,uVar4);
  local_318 = local_3e8;
  plStack_310 = uStack_3e0;
  _local_330 = CONCAT44(uVar10,uVar8);
  _uStack_328 = CONCAT44(uVar14,uVar12);
  local_320 = uVar16;
                    /* try { // try from 001665ba to 001665cb has its CatchHandler @ 001668c2 */
  local_3e8 = &local_348;
  uStack_3e0 = &local_300;
  local_338 = uVar15;
  local_348 = uVar7;
  uStack_344 = uVar9;
  uStack_340._0_4_ = uVar11;
  uStack_340._4_4_ = uVar13;
  uVar20 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 001665cc to 001665ee has its CatchHandler @ 00166934 */
  core::ptr::drop_in_place<[alloc::string::String_3]>(&local_348);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  uVar1 = local_338;
  uVar13 = uStack_340._4_4_;
  uVar11 = (undefined4)uStack_340;
  uVar9 = uStack_344;
  uVar7 = local_348;
                    /* try { // try from 00166617 to 00166626 has its CatchHandler @ 001668b3 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_348,*(undefined8 *)PTR_SHOW_TABS_0021ccb0,
             *(undefined8 *)(PTR_SHOW_TABS_0021ccb0 + 8));
  uVar2 = local_338;
  uVar14 = uStack_340._4_4_;
  uVar12 = (undefined4)uStack_340;
  uVar10 = uStack_344;
  uVar8 = local_348;
                    /* try { // try from 00166641 to 00166655 has its CatchHandler @ 001668a4 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3e8,local_3a8,uVar5);
  local_318 = local_3e8;
  plStack_310 = uStack_3e0;
  uStack_340 = CONCAT44(uVar13,uVar11);
  _local_330 = CONCAT44(uVar10,uVar8);
  _uStack_328 = CONCAT44(uVar14,uVar12);
  local_320 = uVar2;
                    /* try { // try from 001666ae to 001666bf has its CatchHandler @ 0016688f */
  local_3e8 = &local_348;
  uStack_3e0 = &local_300;
  local_338 = uVar1;
  local_348 = uVar7;
  uStack_344 = uVar9;
  uVar21 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 001666c0 to 00166781 has its CatchHandler @ 00166934 */
  core::ptr::drop_in_place<[alloc::string::String_3]>(&local_348);
  uVar22 = (*(code *)PTR_get_flag_0021cc78)
                     (&local_3a0,*(undefined8 *)PTR_SQUEEZE_BLANK_0021ccb8,
                      *(undefined8 *)(PTR_SQUEEZE_BLANK_0021ccb8 + 8));
  uVar1 = *(undefined8 *)PTR_FILE_0021ccc0;
  uVar2 = *(undefined8 *)(PTR_FILE_0021ccc0 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_348,&local_3a0,uVar1,uVar2);
  clap_builder::parser::error::MatchesError::unwrap(&local_3e8,uVar1,uVar2,&local_348);
  if (local_3e8 == (undefined4 *)0x0) {
    puVar23 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
    if (puVar23 == (undefined4 *)0x0) {
                    /* try { // try from 00166858 to 00166867 has its CatchHandler @ 00166934 */
      (*(code *)PTR_handle_alloc_error_0021ccd0)(8,0x18);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
                    /* try { // try from 00166792 to 001667ad has its CatchHandler @ 0016686a */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_348,
               "-capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
               ,1);
    *(undefined8 *)(puVar23 + 4) = local_338;
    *puVar23 = local_348;
    puVar23[1] = uStack_344;
    puVar23[2] = (undefined4)uStack_340;
    puVar23[3] = uStack_340._4_4_;
                    /* try { // try from 001667d0 to 001667e4 has its CatchHandler @ 00166934 */
    ::alloc::slice::hack::into_vec(&local_348,puVar23,1);
  }
  else {
    local_48 = local_3b8;
    uStack_44 = uStack_3b4;
    uStack_40 = uStack_3b0;
    uStack_3c = uStack_3ac;
    local_58 = local_3c8;
    uStack_54 = uStack_3c4;
    uStack_50 = uStack_3c0;
    uStack_4c = uStack_3bc;
    local_68 = local_3d8;
    uStack_64 = uStack_3d4;
    uStack_60 = uStack_3d0;
    uStack_5c = uStack_3cc;
    local_78 = (undefined4)local_3e8;
    uStack_74 = local_3e8._4_4_;
    uStack_70 = (undefined4)uStack_3e0;
    uStack_6c = uStack_3e0._4_4_;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_348,&local_78);
  }
  local_3e8._0_4_ = CONCAT13(uVar19,CONCAT12(uVar20,CONCAT11(uVar21,uVar22)));
  local_3e8 = (undefined4 *)CONCAT44(CONCAT31(local_3e8._5_3_,cVar18),(undefined4)local_3e8);
                    /* try { // try from 00166815 to 0016681f has its CatchHandler @ 0016687a */
  auVar24 = (*(code *)PTR_cat_files_0021ccc8)(uStack_340,local_338,&local_3e8);
                    /* try { // try from 00166820 to 00166832 has its CatchHandler @ 00166934 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_348);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3a0);
  return auVar24;
}