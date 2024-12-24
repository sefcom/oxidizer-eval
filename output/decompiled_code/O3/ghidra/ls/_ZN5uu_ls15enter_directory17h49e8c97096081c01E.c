undefined  [16] __rustcall
uu_ls::enter_directory
          (long param_1,undefined ********param_2,char param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  undefined auVar3 [16];
  undefined *puVar4;
  undefined *******pppppppuVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined ********ppppppppuVar12;
  undefined auVar13 [16];
  ulong in_stack_fffffffffffffa98;
  uint uVar15;
  ulong uVar14;
  undefined local_538 [16];
  undefined *******local_528;
  undefined8 local_520;
  undefined *******local_518;
  long local_510;
  undefined *******local_508;
  char local_500;
  undefined *******local_4f8;
  undefined *******pppppppuStack_4f0;
  undefined *******local_4e8;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined8 local_4d8;
  undefined *******local_4c8;
  undefined *******pppppppuStack_4c0;
  undefined *******local_4b8;
  undefined *******local_4b0;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined local_490 [16];
  undefined *******local_480;
  code *local_478;
  long local_470;
  undefined *******local_468;
  undefined *******local_460;
  undefined *******pppppppuStack_458;
  undefined *******pppppppuStack_450;
  undefined *******local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined *******local_330;
  char local_328;
  undefined *******local_320;
  undefined *******pppppppuStack_318;
  undefined *******local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined *******local_1f0;
  undefined local_1e8 [136];
  undefined local_160 [304];
  
  uVar15 = (uint)(in_stack_fffffffffffffa98 >> 0x20);
  cVar8 = *(char *)(param_4 + 0xf0);
  local_498 = param_6;
  local_470 = param_4;
  local_330 = (undefined *******)param_2;
  local_328 = param_3;
  if (cVar8 == '\0') {
    local_528 = (undefined *******)param_2;
    lVar9 = ::alloc::alloc::Global::alloc_impl(0x260);
    if (lVar9 == 0) {
                    /* try { // try from 00228a9a to 00228aa9 has its CatchHandler @ 00228b7f */
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,0x260);
    }
                    /* try { // try from 00227edc to 00227ee8 has its CatchHandler @ 00228b58 */
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_460,param_1 + 0x18);
    local_4e8 = pppppppuStack_450;
    local_460 = (undefined *******)0x0;
                    /* try { // try from 00227f12 to 00227f2b has its CatchHandler @ 00228b3c */
    std::sys::os_str::bytes::Slice::to_owned(&local_320,&DAT_00134871,1);
    local_4b8 = local_310;
    pppppppuStack_4c0 = pppppppuStack_318;
    bVar6 = *(byte *)(param_4 + 0xeb);
    bVar2 = *(byte *)(param_4 + 0xf2);
                    /* try { // try from 00227f5c to 00227f94 has its CatchHandler @ 00228b3a */
    uVar14 = (ulong)uVar15 << 0x20;
    PathData::new(&local_320,&local_4f8,&local_460,&local_4c8,bVar6,bVar2,uVar14);
                    /* try { // try from 00227f9d to 00227fb6 has its CatchHandler @ 00228b28 */
    std::path::Path::join
              (local_490,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               &DAT_00134872,2);
    local_4c8 = (undefined *******)0x0;
                    /* try { // try from 00227fc3 to 00227fdc has its CatchHandler @ 00228b09 */
    std::sys::os_str::bytes::Slice::to_owned(&local_460,&DAT_00134872,2);
    local_4e8 = pppppppuStack_450;
    local_4f8 = local_460;
    pppppppuStack_4f0 = pppppppuStack_458;
                    /* try { // try from 00227ffa to 00228028 has its CatchHandler @ 00228b07 */
    in_stack_fffffffffffffa98 = uVar14 & 0xffffffff00000000;
    PathData::new(&local_460,local_490,&local_4c8,&local_4f8,bVar6,bVar2,in_stack_fffffffffffffa98);
    puVar4 = PTR_memcpy_0031dc80;
    (*(code *)PTR_memcpy_0031dc80)(lVar9,&local_320,0x130);
    (*(code *)puVar4)(lVar9 + 0x130,&local_460,0x130);
                    /* try { // try from 0022805b to 0022806c has its CatchHandler @ 00228b7f */
    ::alloc::slice::hack::into_vec(&local_520,lVar9,2);
    param_2 = (undefined ********)local_528;
  }
  else {
    local_520 = 0;
    local_518 = (undefined *******)&DAT_00000008;
    local_510 = 0;
    bVar6 = *(byte *)(param_4 + 0xeb);
    bVar2 = *(byte *)(param_4 + 0xf2);
  }
  local_528 = (undefined *******)CONCAT44(local_528._4_4_,(uint)bVar6);
  ppppppppuVar12 = (undefined ********)(ulong)bVar2;
  local_508 = (undefined *******)param_2;
  local_500 = param_3;
  while( true ) {
    _<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_4c8,&local_508);
    pppppppuVar5 = local_4b8;
    if ((undefined ********)local_4c8 == (undefined ********)0x0) break;
    ppppppppuVar12 = (undefined ********)pppppppuVar5;
    if ((undefined ********)pppppppuStack_4c0 == (undefined ********)0x0) {
      local_468 = local_4b8;
                    /* try { // try from 002281d8 to 002281e1 has its CatchHandler @ 00228bbe */
      lVar9 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_5);
      if (lVar9 != 0) {
                    /* try { // try from 0022842e to 00228436 has its CatchHandler @ 00228abe */
        auVar13 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from(lVar9);
                    /* try { // try from 00228437 to 00228449 has its CatchHandler @ 00228ab9 */
        core::ptr::drop_in_place<std::io::error::Error>(&local_468);
                    /* try { // try from 0022844a to 00228453 has its CatchHandler @ 00228bb7 */
        core::ptr::drop_in_place<std::fs::ReadDir>(&local_508);
        goto LAB_00228454;
      }
      pppppppuStack_458 = pppppppuVar5;
      local_460 = (undefined *******)CONCAT71(local_460._1_7_,1);
                    /* try { // try from 002281fb to 002282a1 has its CatchHandler @ 00228be1 */
      uucore::mods::error::set_exit_code(1);
      auVar13 = uucore::util_name();
      local_490._0_8_ = local_538;
      local_490._8_8_ = _<&T_as_core::fmt::Display>::fmt;
      local_480 = (undefined *******)&local_460;
      local_478 = _<uu_ls::LsError_as_core::fmt::Display>::fmt;
      local_320 = (undefined *******)&DAT_00312798;
      pppppppuStack_318 = (undefined *******)0x3;
      local_300 = 0;
      local_310 = (undefined *******)local_490;
      local_308 = 2;
      local_538 = auVar13;
      std::io::stdio::_eprint(&local_320);
                    /* try { // try from 002282a2 to 002282ae has its CatchHandler @ 00228bbc */
      core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
    }
    else {
      local_4d8 = local_4a0;
      local_4e8 = local_4b0;
      uStack_4e0 = uStack_4a8;
      uStack_4dc = uStack_4a4;
      local_4f8 = pppppppuStack_4c0;
      pppppppuStack_4f0 = local_4b8;
                    /* try { // try from 00228118 to 0022813c has its CatchHandler @ 00228bd2 */
      cVar7 = should_display(&local_4f8,local_470);
      if (cVar7 == '\0') {
                    /* try { // try from 002280c0 to 002280d4 has its CatchHandler @ 00228bf3 */
        core::ptr::drop_in_place<std::fs::DirEntry>(&local_4f8);
      }
      else {
        std::fs::DirEntry::path(local_490,&local_4f8);
        local_438 = local_4d8;
        local_448 = local_4e8;
        uStack_440 = (undefined ********)CONCAT44(uStack_4dc,uStack_4e0);
        pppppppuStack_458 = local_4f8;
        pppppppuStack_450 = pppppppuStack_4f0;
        local_460 = (undefined *******)&DAT_00000001;
        local_320 = (undefined *******)0x8000000000000000;
                    /* try { // try from 00228183 to 002281ca has its CatchHandler @ 00228bd0 */
        in_stack_fffffffffffffa98 = in_stack_fffffffffffffa98 & 0xffffffff00000000;
        PathData::new(local_160,local_490,&local_460,&local_320,(ulong)local_528 & 0xffffffff,bVar2,
                      in_stack_fffffffffffffa98);
        ::alloc::vec::Vec<T,A>::push(&local_520,local_160);
      }
    }
  }
                    /* try { // try from 002282b4 to 0022834d has its CatchHandler @ 00228bb7 */
  core::ptr::drop_in_place<std::fs::ReadDir>(&local_508);
  lVar9 = local_470;
  sort_entries(local_518,local_510,local_470,param_5);
  if ((*(char *)(lVar9 + 0xf8) == '\x01') || (*(char *)(lVar9 + 0xea) != '\0')) {
    return_total(&local_460,local_518,local_510,lVar9,param_5);
    ppppppppuVar12 = (undefined ********)pppppppuStack_450;
    auVar13._8_8_ = pppppppuStack_450;
    auVar13._0_8_ = pppppppuStack_458;
    if ((undefined ********)local_460 == (undefined ********)0x8000000000000000) goto LAB_00228454;
    local_320 = local_460;
    pppppppuStack_318 = pppppppuStack_458;
    local_310 = pppppppuStack_450;
    local_4c8 = pppppppuStack_458;
    pppppppuStack_4c0 = pppppppuStack_450;
    local_4f8 = (undefined *******)&local_4c8;
    pppppppuStack_4f0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_460 = (undefined *******)&DAT_00123d10;
    pppppppuStack_458 = (undefined *******)&DAT_00000001;
    uStack_440 = (undefined ********)0x0;
    local_448 = (undefined *******)&DAT_00000001;
                    /* try { // try from 002283f5 to 00228418 has its CatchHandler @ 00228ac3 */
    pppppppuStack_450 = (undefined *******)&local_4f8;
    lVar10 = std::io::Write::write_fmt(param_5,&local_460);
    if (lVar10 != 0) {
      auVar13 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar10);
                    /* try { // try from 00228419 to 0022842b has its CatchHandler @ 00228bb7 */
      core::ptr::drop_in_place<alloc::string::String>(&local_320);
      goto LAB_00228454;
    }
    if (*(char *)(lVar9 + 0xee) != '\0') {
      lVar10 = *(long *)(param_7 + 0x30);
      if (lVar10 == 0) {
        if (*(long *)(param_7 + 0x10) == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(param_7 + 0x10) * 0x10 + -8 + *(long *)(param_7 + 8)) + 1;
        }
      }
      *(undefined **)(param_7 + 0x30) = (undefined *)((long)local_310 + lVar10 + 2);
    }
                    /* try { // try from 00228a40 to 00228a4c has its CatchHandler @ 00228bb7 */
    core::ptr::drop_in_place<alloc::string::String>(&local_320);
  }
  auVar13 = display_items(local_518,local_510,lVar9,param_5,param_7,param_8);
  if (auVar13._0_8_ == 0) {
    if (*(char *)(lVar9 + 0xe6) != '\0') {
      pppppppuStack_4f0 = local_518 + local_510 * 0x26;
      local_4e8 = (undefined *******)(ulong)((uint)(cVar8 == '\0') * 2);
      local_4f8 = local_518;
      lVar10 = _<core::iter::adapters::skip::Skip<I>as_core::iter::traits::iterator::Iterator>::
               try_fold(&local_4f8);
      puVar4 = PTR_memcpy_0031dc80;
      if (lVar10 != 0) {
        local_528 = (undefined *******)CONCAT71(local_528._1_7_,*(undefined *)(lVar9 + 0xee));
        ppppppppuVar12 = &pppppppuStack_450;
        do {
          lVar1 = lVar10 + 0x18;
                    /* try { // try from 0022850a to 00228516 has its CatchHandler @ 00228b91 */
          std::fs::read_dir(&local_508);
          pppppppuVar5 = local_508;
          auVar13 = local_538;
          if (local_500 != '\x02') {
            local_538._0_8_ = local_508;
            local_538._9_7_ = auVar13._9_7_;
            local_538[8] = local_500;
                    /* try { // try from 00228675 to 00228684 has its CatchHandler @ 00228ba8 */
            uucore::features::fs::FileInformation::from_path
                      (&local_460,lVar1,*(undefined *)(lVar10 + 0x128));
            pppppppuVar5 = pppppppuStack_458;
            if ((undefined ********)local_460 == (undefined ********)0x0) {
              (*(code *)puVar4)(local_1e8,&pppppppuStack_450,0x88);
              local_1f0 = pppppppuVar5;
                    /* try { // try from 002286bc to 002286fb has its CatchHandler @ 00228ba8 */
              cVar8 = hashbrown::map::HashMap<K,V,S,A>::insert(local_498,&local_1f0);
              if (cVar8 == '\0') {
                local_460 = (undefined *******)&PTR_DAT_00312788;
                pppppppuStack_458 = (undefined *******)&DAT_00000001;
                pppppppuStack_450 = (undefined *******)&DAT_00000008;
                local_448 = (undefined *******)0x0;
                uStack_440 = (undefined ********)0x0;
                    /* try { // try from 00228821 to 0022890e has its CatchHandler @ 00228ba8 */
                lVar11 = std::io::Write::write_fmt(param_5,&local_460);
                if (lVar11 == 0) {
                  if ((char)local_528 != '\0') {
                    *(undefined8 *)(param_7 + 0x30) = 2;
                    auVar13 = dired::indent(param_5);
                    if (auVar13._0_8_ != 0) goto LAB_00228a74;
                    std::sys::os_str::bytes::Slice::to_string_lossy
                              (&local_460,*(undefined8 *)(lVar10 + 0x20),
                               *(undefined8 *)(lVar10 + 0x28));
                    pppppppuVar5 = pppppppuStack_450;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_460);
                    dired::calculate_subdired(param_7,pppppppuVar5);
                    *(undefined **)(param_7 + 0x30) =
                         (undefined *)((long)pppppppuVar5 + *(long *)(param_7 + 0x30) + 3);
                  }
                  show_dir_name(lVar10,param_5,lVar9);
                  local_460 = (undefined *******)&PTR_DAT_00312788;
                  pppppppuStack_458 = (undefined *******)&DAT_00000001;
                  pppppppuStack_450 = (undefined *******)&DAT_00000008;
                  local_448 = (undefined *******)0x0;
                  uStack_440 = (undefined ********)0x0;
                  lVar11 = std::io::Write::write_fmt(param_5,&local_460);
                  if (lVar11 == 0) {
                    /* try { // try from 00228922 to 00228975 has its CatchHandler @ 00228b65 */
                    auVar13 = enter_directory(lVar10,local_538._0_8_,local_538._8_8_ & 0xff,lVar9,
                                              param_5,local_498,param_7,param_8);
                    if (auVar13._0_8_ == 0) {
                      uucore::features::fs::FileInformation::from_path
                                (&local_460,lVar1,*(undefined *)(lVar10 + 0x128));
                      pppppppuVar5 = pppppppuStack_458;
                      if ((undefined ********)local_460 == (undefined ********)0x0) {
                        (*(code *)puVar4)(&pppppppuStack_318,ppppppppuVar12,0x88);
                        local_320 = pppppppuVar5;
                    /* try { // try from 002289a8 to 002289bc has its CatchHandler @ 00228b65 */
                        hashbrown::map::HashMap<K,V,S,A>::remove(local_498,&local_320);
                        goto LAB_002284f0;
                      }
                    /* try { // try from 00228a86 to 00228a8e has its CatchHandler @ 00228aaa */
                      auVar13 = uucore::mods::error::
                                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                                ::from(pppppppuStack_458);
                    }
                    goto LAB_00228454;
                  }
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar11);
                }
                else {
                    /* try { // try from 00228a52 to 00228a70 has its CatchHandler @ 00228ab4 */
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar11);
                }
              }
              else {
                lVar10 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                   (param_5);
                if (lVar10 == 0) {
                  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_320,lVar1);
                  local_448 = local_310;
                  pppppppuStack_458 = local_320;
                  pppppppuStack_450 = pppppppuStack_318;
                  local_460 = (undefined *******)CONCAT71(local_460._1_7_,5);
                    /* try { // try from 00228723 to 002287d2 has its CatchHandler @ 00228b6d */
                  uucore::mods::error::set_exit_code(2);
                  auVar13 = uucore::util_name();
                  local_4c8 = (undefined *******)local_490;
                  pppppppuStack_4c0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
                  local_4b8 = (undefined *******)&local_460;
                  local_4b0 = (undefined *******)_<uu_ls::LsError_as_core::fmt::Display>::fmt;
                  local_320 = (undefined *******)&DAT_00312798;
                  pppppppuStack_318 = (undefined *******)0x3;
                  local_300 = 0;
                  local_310 = (undefined *******)&local_4c8;
                  local_308 = 2;
                  local_490 = auVar13;
                  std::io::stdio::_eprint(&local_320);
                    /* try { // try from 002287d3 to 002287df has its CatchHandler @ 00228ba8 */
                  core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
                    /* try { // try from 002287e0 to 002287e9 has its CatchHandler @ 00228b91 */
                  core::ptr::drop_in_place<std::fs::ReadDir>(local_538);
                  goto LAB_002284f0;
                }
                auVar13 = uucore::mods::error::
                          _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                          ::from(lVar10);
              }
            }
            else {
                    /* try { // try from 00228a28 to 00228a30 has its CatchHandler @ 00228ab4 */
              auVar13 = uucore::mods::error::
                        _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                        ::from(pppppppuStack_458);
            }
LAB_00228a74:
                    /* try { // try from 00228a77 to 00228a80 has its CatchHandler @ 00228bb7 */
            core::ptr::drop_in_place<std::fs::ReadDir>(local_538);
            goto LAB_00228454;
          }
          local_538._0_8_ = local_508;
                    /* try { // try from 0022852e to 00228537 has its CatchHandler @ 00228af5 */
          lVar11 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_5);
          if (lVar11 != 0) {
                    /* try { // try from 00228a0a to 00228a12 has its CatchHandler @ 00228ab2 */
            auVar13 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(lVar11);
                    /* try { // try from 00228a13 to 00228a22 has its CatchHandler @ 00228bb7 */
            core::ptr::drop_in_place<std::io::error::Error>(local_538);
            goto LAB_00228454;
          }
          local_4c8 = pppppppuVar5;
                    /* try { // try from 00228549 to 00228558 has its CatchHandler @ 00228ae0 */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_320,lVar1);
          uStack_440 = (undefined ********)local_310;
          pppppppuStack_450 = local_320;
          local_448 = pppppppuStack_318;
          pppppppuStack_458 = pppppppuVar5;
          local_460 = (undefined *******)
                      CONCAT71(CONCAT61(local_460._2_6_,*(char *)(lVar10 + 0x129)),2);
                    /* try { // try from 0022859b to 00228645 has its CatchHandler @ 00228b96 */
          uucore::mods::error::set_exit_code(2 - (uint)(*(char *)(lVar10 + 0x129) == '\0'));
          auVar13 = uucore::util_name();
          local_4c8 = (undefined *******)local_490;
          pppppppuStack_4c0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
          local_4b8 = (undefined *******)&local_460;
          local_4b0 = (undefined *******)_<uu_ls::LsError_as_core::fmt::Display>::fmt;
          local_320 = (undefined *******)&DAT_00312798;
          pppppppuStack_318 = (undefined *******)0x3;
          local_300 = 0;
          local_310 = (undefined *******)&local_4c8;
          local_308 = 2;
          local_490 = auVar13;
          std::io::stdio::_eprint(&local_320);
                    /* try { // try from 00228646 to 00228652 has its CatchHandler @ 00228ad8 */
          core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
LAB_002284f0:
          lVar10 = _<core::iter::adapters::skip::Skip<I>as_core::iter::traits::iterator::Iterator>::
                   try_fold(&local_4f8);
        } while (lVar10 != 0);
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_520);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = ppppppppuVar12;
    return auVar3 << 0x40;
  }
LAB_00228454:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_520);
  return auVar13;
}