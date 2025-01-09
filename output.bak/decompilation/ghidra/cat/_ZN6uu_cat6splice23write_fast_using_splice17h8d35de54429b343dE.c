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
  
  (*(code *)PTR_uu_app_0021c250)(&local_348);
  clap_builder::builder::command::Command::try_get_matches_from
            (&local_3e8,&local_348,param_1,param_2);
  if (local_3e8 == (undefined4 *)0x8000000000000000) {
    auVar24 = (*(code *)PTR_from_0021c258)();
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
                    /* try { // try from 00166bc3 to 00166c1b has its CatchHandler @ 001671c4 */
  cVar17 = (*(code *)PTR_get_flag_0021c268)
                     (&local_3a0,*(undefined8 *)PTR_NUMBER_NONBLANK_0021c260,
                      *(undefined8 *)(PTR_NUMBER_NONBLANK_0021c260 + 8));
  cVar18 = '\x01';
  if (cVar17 == '\0') {
    cVar18 = (*(code *)PTR_get_flag_0021c268)
                       (&local_3a0,*(undefined8 *)PTR_NUMBER_0021c270,
                        *(undefined8 *)(PTR_NUMBER_0021c270 + 8));
    cVar18 = cVar18 * '\x02';
  }
  uVar1 = *(undefined8 *)PTR_SHOW_ALL_0021c278;
  uVar2 = *(undefined8 *)(PTR_SHOW_ALL_0021c278 + 8);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  local_358 = local_338;
  local_368 = local_348;
  uStack_364 = uStack_344;
  uStack_360 = (undefined4)uStack_340;
  uStack_35c = uStack_340._4_4_;
  uVar3 = *(undefined8 *)PTR_SHOW_NONPRINTING_ENDS_0021c280;
  uVar4 = *(undefined8 *)(PTR_SHOW_NONPRINTING_ENDS_0021c280 + 8);
                    /* try { // try from 00166c4a to 00166c5c has its CatchHandler @ 001671b2 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar3,uVar4);
  uVar15 = local_338;
  local_3a8 = *(undefined8 *)PTR_SHOW_NONPRINTING_TABS_0021c288;
  uVar5 = *(undefined8 *)(PTR_SHOW_NONPRINTING_TABS_0021c288 + 8);
                    /* try { // try from 00166c85 to 00166c9f has its CatchHandler @ 001671a3 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,local_3a8,uVar5);
  uVar16 = local_338;
                    /* try { // try from 00166cc8 to 00166cd1 has its CatchHandler @ 00167194 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_3e8,*(undefined8 *)PTR_SHOW_NONPRINTING_0021c290,
             *(undefined8 *)(PTR_SHOW_NONPRINTING_0021c290 + 8));
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
                    /* try { // try from 00166d52 to 00166d67 has its CatchHandler @ 00167182 */
  local_3e8 = &local_348;
  uVar19 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 00166d68 to 00166d8f has its CatchHandler @ 001671c4 */
  core::ptr::drop_in_place<[alloc::string::String_4]>(&local_348);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_348,*(undefined8 *)PTR_SHOW_ENDS_0021c298,
             *(undefined8 *)(PTR_SHOW_ENDS_0021c298 + 8));
  uVar15 = local_338;
  uVar13 = uStack_340._4_4_;
  uVar11 = (undefined4)uStack_340;
  uVar9 = uStack_344;
  uVar7 = local_348;
                    /* try { // try from 00166daa to 00166dbf has its CatchHandler @ 00167173 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  uVar16 = local_338;
  uVar14 = uStack_340._4_4_;
  uVar12 = (undefined4)uStack_340;
  uVar10 = uStack_344;
  uVar8 = local_348;
                    /* try { // try from 00166dda to 00166de9 has its CatchHandler @ 00167164 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3e8,uVar3,uVar4);
  local_318 = local_3e8;
  plStack_310 = uStack_3e0;
  _local_330 = CONCAT44(uVar10,uVar8);
  _uStack_328 = CONCAT44(uVar14,uVar12);
  local_320 = uVar16;
                    /* try { // try from 00166e4a to 00166e5b has its CatchHandler @ 00167152 */
  local_3e8 = &local_348;
  uStack_3e0 = &local_300;
  local_338 = uVar15;
  local_348 = uVar7;
  uStack_344 = uVar9;
  uStack_340._0_4_ = uVar11;
  uStack_340._4_4_ = uVar13;
  uVar20 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 00166e5c to 00166e7e has its CatchHandler @ 001671c4 */
  core::ptr::drop_in_place<[alloc::string::String_3]>(&local_348);
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_348,uVar1,uVar2);
  uVar1 = local_338;
  uVar13 = uStack_340._4_4_;
  uVar11 = (undefined4)uStack_340;
  uVar9 = uStack_344;
  uVar7 = local_348;
                    /* try { // try from 00166ea7 to 00166eb6 has its CatchHandler @ 00167143 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec
            (&local_348,*(undefined8 *)PTR_SHOW_TABS_0021c2a0,
             *(undefined8 *)(PTR_SHOW_TABS_0021c2a0 + 8));
  uVar2 = local_338;
  uVar14 = uStack_340._4_4_;
  uVar12 = (undefined4)uStack_340;
  uVar10 = uStack_344;
  uVar8 = local_348;
                    /* try { // try from 00166ed1 to 00166ee5 has its CatchHandler @ 00167134 */
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_3e8,local_3a8,uVar5);
  local_318 = local_3e8;
  plStack_310 = uStack_3e0;
  uStack_340 = CONCAT44(uVar13,uVar11);
  _local_330 = CONCAT44(uVar10,uVar8);
  _uStack_328 = CONCAT44(uVar14,uVar12);
  local_320 = uVar2;
                    /* try { // try from 00166f3e to 00166f4f has its CatchHandler @ 0016711f */
  local_3e8 = &local_348;
  uStack_3e0 = &local_300;
  local_338 = uVar1;
  local_348 = uVar7;
  uStack_344 = uVar9;
  uVar21 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::any
                     (&local_3e8,&local_3a0);
                    /* try { // try from 00166f50 to 00167011 has its CatchHandler @ 001671c4 */
  core::ptr::drop_in_place<[alloc::string::String_3]>(&local_348);
  uVar22 = (*(code *)PTR_get_flag_0021c268)
                     (&local_3a0,*(undefined8 *)PTR_SQUEEZE_BLANK_0021c2a8,
                      *(undefined8 *)(PTR_SQUEEZE_BLANK_0021c2a8 + 8));
  uVar1 = *(undefined8 *)PTR_FILE_0021c2b0;
  uVar2 = *(undefined8 *)(PTR_FILE_0021c2b0 + 8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_348,&local_3a0,uVar1,uVar2);
  clap_builder::parser::error::MatchesError::unwrap(&local_3e8,uVar1,uVar2,&local_348);
  if (local_3e8 == (undefined4 *)0x0) {
    puVar23 = (undefined4 *)::alloc::alloc::Global::alloc_impl();
    if (puVar23 == (undefined4 *)0x0) {
                    /* try { // try from 001670e8 to 001670f7 has its CatchHandler @ 001671c4 */
      (*(code *)PTR_handle_alloc_error_0021c2c0)(8,0x18);
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
                    /* try { // try from 00167022 to 0016703d has its CatchHandler @ 001670fa */
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_348,
               "-Mismatch between definition and access of ``. /home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/clap_builder-4.4.2/src/parser/error.rs"
               ,1);
    *(undefined8 *)(puVar23 + 4) = local_338;
    *puVar23 = local_348;
    puVar23[1] = uStack_344;
    puVar23[2] = (undefined4)uStack_340;
    puVar23[3] = uStack_340._4_4_;
                    /* try { // try from 00167060 to 00167074 has its CatchHandler @ 001671c4 */
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
                    /* try { // try from 001670a5 to 001670af has its CatchHandler @ 0016710a */
  auVar24 = (*(code *)PTR_cat_files_0021c2b8)(uStack_340,local_338,&local_3e8);
                    /* try { // try from 001670b0 to 001670c2 has its CatchHandler @ 001671c4 */
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&local_348);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&local_3a0);
  return auVar24;
}