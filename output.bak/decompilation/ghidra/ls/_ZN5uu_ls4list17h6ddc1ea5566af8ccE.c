undefined  [16] __rustcall uu_ls::list(long param_1,long param_2)

{
  char cVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 *****pppppuVar6;
  undefined8 ******ppppppuVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *******unaff_R12;
  undefined auVar13 [16];
  undefined8 local_458;
  undefined8 local_450;
  long local_448;
  undefined8 local_440;
  long local_438;
  long local_430;
  undefined local_428 [40];
  undefined8 ******local_400;
  code *local_3f8;
  undefined8 ******local_3f0;
  code *local_3e8;
  long local_3e0;
  undefined8 *****local_3d8;
  char local_3d0;
  undefined8 *****local_3c8;
  long local_3c0;
  long local_3b8;
  undefined8 local_3b0;
  undefined local_3a8 [16];
  undefined8 ******local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  long lStack_360;
  undefined8 *****local_358;
  char local_350;
  undefined local_348 [29];
  char local_32b;
  undefined8 ******local_328;
  undefined8 *****pppppuStack_320;
  undefined8 ******local_318;
  undefined8 *****pppppuStack_310;
  undefined8 ******local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 ******local_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 ******local_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 ******local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 *****local_c0;
  undefined local_b8 [136];
  
  local_458 = 0;
  local_450 = 8;
  local_448 = 0;
  local_440 = 0;
  local_438 = 8;
  local_430 = 0;
  local_3e0 = param_1;
                    /* try { // try from 00227165 to 0022717c has its CatchHandler @ 00227b11 */
  uVar8 = std::io::stdio::stdout();
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_428,0x2000,uVar8);
  local_390 = 0;
  local_388 = 8;
  local_380 = 0;
  uStack_378 = 0;
  local_370 = 8;
  local_368 = 0;
  lStack_360 = 0;
  if (*(long *)(param_2 + 0x18) == -0x8000000000000000) {
    local_32b = '\x02';
  }
  else {
    core::ops::function::FnOnce::call_once(local_348,param_2 + 0x18);
  }
  uVar5 = *(ulong *)(local_3e0 + 0x10);
  _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter(&local_400);
  lVar9 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                    (&local_400);
  if (lVar9 != 0) {
    cVar1 = *(char *)(param_2 + 0xe8);
    uVar2 = *(undefined *)(param_2 + 0xeb);
    uVar3 = *(undefined *)(param_2 + 0xf2);
    unaff_R12 = &local_1f8;
    do {
                    /* try { // try from 0022728a to 002272fe has its CatchHandler @ 00227b65 */
      std::sys::os_str::bytes::Slice::to_owned(&local_328,lVar9);
      local_398 = local_318;
      local_3a8._0_8_ = local_328;
      local_3a8._8_8_ = pppppuStack_320;
      local_328 = (undefined8 *******)0x0;
      local_3c0 = -0x8000000000000000;
      PathData::new(unaff_R12,local_3a8,&local_328,&local_3c0,uVar2,uVar3,1);
                    /* try { // try from 002272ff to 00227319 has its CatchHandler @ 00227b53 */
      lVar9 = PathData::get_metadata(unaff_R12,local_428);
      if (lVar9 == 0) {
                    /* try { // try from 00227370 to 00227377 has its CatchHandler @ 00227b65 */
        core::ptr::drop_in_place<uu_ls::PathData>(unaff_R12);
      }
      else {
        puVar10 = (uint *)PathData::file_type(unaff_R12,local_428);
        if (puVar10 == (uint *)0x0) {
                    /* try { // try from 00227250 to 0022725a has its CatchHandler @ 00227b53 */
          uucore::mods::error::set_exit_code(1);
        }
        else if ((cVar1 == '\0') && ((*puVar10 & 0xf000) == 0x4000)) {
          (*(code *)PTR_memcpy_0031da60)(&local_328,unaff_R12,0x130);
                    /* try { // try from 00227353 to 0022735f has its CatchHandler @ 00227b51 */
          ::alloc::vec::Vec<T,A>::push(&local_440,&local_328);
          goto LAB_00227279;
        }
        (*(code *)PTR_memcpy_0031da60)(&local_328,unaff_R12,0x130);
                    /* try { // try from 0022726c to 00227278 has its CatchHandler @ 00227b51 */
        ::alloc::vec::Vec<T,A>::push(&local_458,&local_328);
      }
LAB_00227279:
      lVar9 = _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                        (&local_400);
    } while (lVar9 != 0);
  }
                    /* try { // try from 0022737d to 002273fd has its CatchHandler @ 00227b4c */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&std::path::Path>>(&local_400);
  sort_entries(local_450,local_448,param_2,local_428);
  sort_entries(local_438,local_430,param_2,local_428);
  if ((local_32b != '\x02') &&
     (lVar9 = colors::StyleManager::get_normal_style(local_348), lVar9 != 0)) {
    colors::StyleManager::reset(&local_1f8,local_348,1);
    local_3f8 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_328 = (undefined8 ******)&DAT_00123c10;
    pppppuStack_320 = (undefined8 ******)0x1;
    local_308 = (undefined8 *******)0x0;
    pppppuStack_310 = (undefined8 ******)0x1;
                    /* try { // try from 0022744d to 0022746c has its CatchHandler @ 00227aae */
    local_400 = &local_1f8;
    local_318 = &local_400;
    lVar9 = std::io::Write::write_fmt(local_428,&local_328);
    if (lVar9 != 0) {
      auVar13 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar9);
                    /* try { // try from 0022746d to 002274b5 has its CatchHandler @ 00227b4c */
      core::ptr::drop_in_place<alloc::string::String>(&local_1f8);
      goto LAB_002274c1;
    }
    core::ptr::drop_in_place<alloc::string::String>(&local_1f8);
  }
  auVar13 = display_items(local_450,local_448,param_2,local_428,&local_390,local_348);
  if (auVar13._0_8_ != 0) {
LAB_002274c1:
                    /* try { // try from 002274c1 to 002274cd has its CatchHandler @ 00227ad6 */
    core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&local_390);
                    /* try { // try from 002274d1 to 002274da has its CatchHandler @ 00227b11 */
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
              (local_428);
                    /* try { // try from 002274db to 002274e4 has its CatchHandler @ 00227acb */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_440);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_458);
    return auVar13;
  }
  local_3b8 = local_430 * 0x130 + local_438;
  local_3c0 = local_438;
  local_3b0 = 0;
  auVar13 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
            ::next(&local_3c0);
  if (auVar13._8_8_ == 0) {
    cVar1 = *(char *)(param_2 + 0xee);
  }
  else {
    cVar4 = *(char *)(param_2 + 0xe6);
    cVar1 = *(char *)(param_2 + 0xee);
    do {
      lVar12 = auVar13._8_8_;
      lVar9 = lVar12 + 0x18;
                    /* try { // try from 002275ac to 002275b6 has its CatchHandler @ 00227b07 */
      std::fs::read_dir(&local_358,lVar9);
      pppppuVar6 = local_358;
      if (local_350 != '\x02') {
        local_3d8 = local_358;
        local_3d0 = local_350;
        if (cVar4 == '\0' && uVar5 < 2) {
LAB_00227882:
          _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_328);
          local_1d8 = local_308;
          uStack_1d0 = uStack_300;
          uStack_1cc = uStack_2fc;
          local_1e8 = local_318;
          pppppuStack_1e0 = pppppuStack_310;
          local_1f8 = local_328;
          pppppuStack_1f0 = pppppuStack_320;
                    /* try { // try from 002278cc to 002278d6 has its CatchHandler @ 00227b16 */
          uucore::features::fs::FileInformation::from_path
                    (&local_328,lVar9,*(undefined *)(lVar12 + 0x128));
          pppppuVar6 = pppppuStack_320;
          ppppppuVar7 = local_328;
          if ((undefined8 *******)local_328 == (undefined8 *******)0x0) {
            (*(code *)PTR_memcpy_0031da60)(local_b8,&local_318,0x88);
            local_c0 = pppppuVar6;
                    /* try { // try from 00227913 to 0022796a has its CatchHandler @ 00227b16 */
            hashbrown::map::HashMap<K,V,S,A>::insert(&local_1f8,&local_c0);
            auVar13 = enter_directory(lVar12,local_3d8,local_3d0,param_2,local_428,&local_1f8,
                                      &local_390,local_348);
            if (auVar13._0_8_ == 0) {
                    /* try { // try from 00227977 to 00227986 has its CatchHandler @ 00227ac3 */
              core::ptr::
              drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>
                        (&local_1f8);
              goto LAB_00227590;
            }
          }
          else {
                    /* try { // try from 00227a34 to 00227a3c has its CatchHandler @ 00227a93 */
            auVar13 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(pppppuStack_320);
          }
                    /* try { // try from 00227a43 to 00227a4f has its CatchHandler @ 00227a9d */
          core::ptr::
          drop_in_place<std::collections::hash::set::HashSet<uucore::features::fs::FileInformation>>
                    (&local_1f8);
          if ((undefined8 *******)ppppppuVar7 == (undefined8 *******)0x0) goto LAB_002274c1;
        }
        else if (auVar13._0_8_ == 0 && local_448 == 0) {
          if (cVar1 != '\0') {
                    /* try { // try from 00227734 to 00227889 has its CatchHandler @ 00227b0c */
            auVar13 = dired::indent(local_428);
            if (auVar13._0_8_ != 0) goto LAB_00227a7f;
          }
          show_dir_name(lVar12,local_428,param_2);
          local_328 = (undefined8 ******)&PTR_DAT_003125b8;
          pppppuStack_320 = (undefined8 ******)0x1;
          local_318 = (undefined8 ******)&DAT_00000008;
          pppppuStack_310 = (undefined8 ******)0x0;
          local_308 = (undefined8 *******)0x0;
          lVar11 = std::io::Write::write_fmt(local_428,&local_328);
          if (lVar11 == 0) {
            if (cVar1 != '\0') {
              lVar11 = *(long *)(lVar12 + 0x10);
              dired::calculate_subdired(&local_390,lVar11);
              lStack_360 = lStack_360 + lVar11 + 3;
            }
            goto LAB_00227882;
          }
          auVar13 = uucore::mods::error::
                    _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                    ::from(lVar11);
        }
        else {
          local_328 = (undefined8 ******)&PTR_DAT_003125b8;
          pppppuStack_320 = (undefined8 ******)0x1;
          local_318 = (undefined8 ******)&DAT_00000008;
          pppppuStack_310 = (undefined8 ******)0x0;
          local_308 = (undefined8 *******)0x0;
          lVar11 = std::io::Write::write_fmt(local_428,&local_328);
          if (lVar11 == 0) {
            show_dir_name(lVar12,local_428,param_2);
            local_328 = (undefined8 ******)&PTR_DAT_003125b8;
            pppppuStack_320 = (undefined8 ******)0x1;
            local_318 = (undefined8 ******)&DAT_00000008;
            pppppuStack_310 = (undefined8 ******)0x0;
            local_308 = (undefined8 *******)0x0;
            lVar11 = std::io::Write::write_fmt(local_428,&local_328);
            if (lVar11 == 0) goto LAB_00227882;
            auVar13 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(lVar11);
          }
          else {
                    /* try { // try from 00227a5a to 00227a78 has its CatchHandler @ 00227a91 */
            auVar13 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(lVar11);
          }
        }
LAB_00227a7f:
                    /* try { // try from 00227a7f to 00227a8b has its CatchHandler @ 00227b4c */
        core::ptr::drop_in_place<std::fs::ReadDir>(&local_3d8);
        goto LAB_002274c1;
      }
      local_3c8 = local_358;
                    /* try { // try from 002275d7 to 002275e0 has its CatchHandler @ 00227af5 */
      lVar11 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(local_428);
      if (lVar11 != 0) {
                    /* try { // try from 00227a13 to 00227a1b has its CatchHandler @ 00227a9b */
        auVar13 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from(lVar11);
                    /* try { // try from 00227a1c to 00227a2e has its CatchHandler @ 00227b4c */
        core::ptr::drop_in_place<std::io::error::Error>(&local_3c8);
        goto LAB_002274c1;
      }
      local_400 = (undefined8 ******)pppppuVar6;
                    /* try { // try from 002275ef to 002275fe has its CatchHandler @ 00227ade */
      _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_1f8,lVar9);
      local_308 = local_1e8;
      local_318 = local_1f8;
      pppppuStack_310 = pppppuStack_1f0;
      pppppuStack_320 = pppppuVar6;
      local_328 = (undefined8 ******)CONCAT71(CONCAT61(local_328._2_6_,*(char *)(lVar12 + 0x129)),2)
      ;
                    /* try { // try from 00227648 to 002276e4 has its CatchHandler @ 00227b3a */
      uucore::mods::error::set_exit_code(2 - (uint)(*(char *)(lVar12 + 0x129) == '\0'));
      auVar13 = uucore::util_name();
      local_400 = (undefined8 ******)local_3a8;
      local_3f8 = _<&T_as_core::fmt::Display>::fmt;
      local_3e8 = _<uu_ls::LsError_as_core::fmt::Display>::fmt;
      local_1f8 = (undefined8 ******)&DAT_00312588;
      pppppuStack_1f0 = (undefined8 ******)0x3;
      local_1d8 = (undefined8 *******)0x0;
      local_1e8 = &local_400;
      pppppuStack_1e0 = (undefined8 ******)0x2;
      local_3f0 = &local_328;
      local_3a8 = auVar13;
      std::io::stdio::_eprint(&local_1f8);
                    /* try { // try from 002276e5 to 002276ec has its CatchHandler @ 00227af0 */
      core::ptr::drop_in_place<uu_ls::LsError>(&local_328);
LAB_00227590:
      auVar13 = _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
                ::next(&local_3c0);
    } while (auVar13._8_8_ != 0);
    unaff_R12 = (undefined8 *******)0x0;
  }
  if ((cVar1 != '\0') && (*(char *)(param_2 + 0xef) == '\0')) {
                    /* try { // try from 002279bd to 002279d1 has its CatchHandler @ 00227b4c */
    auVar13 = dired::print_dired_output(param_2,&local_390,local_428);
    if (auVar13._0_8_ != 0) goto LAB_002274c1;
  }
                    /* try { // try from 002279de to 002279ea has its CatchHandler @ 00227ad6 */
  core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(&local_390);
                    /* try { // try from 002279ee to 002279f7 has its CatchHandler @ 00227b11 */
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>
            (local_428);
                    /* try { // try from 002279f8 to 00227a01 has its CatchHandler @ 00227acb */
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_440);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_458);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_R12;
  return auVar13 << 0x40;
}