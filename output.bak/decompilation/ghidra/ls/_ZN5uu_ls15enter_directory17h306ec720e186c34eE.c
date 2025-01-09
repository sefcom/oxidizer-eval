undefined  [16] __rustcall
uu_ls::enter_directory
          (long param_1,undefined ********param_2,char param_3,long param_4,undefined8 param_5,
          undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  undefined auVar2 [16];
  undefined *puVar3;
  undefined *******pppppppuVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined uVar11;
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
  cVar7 = *(char *)(param_4 + 0xf0);
  local_498 = param_6;
  local_470 = param_4;
  local_330 = (undefined *******)param_2;
  local_328 = param_3;
  if (cVar7 == '\0') {
    local_528 = (undefined *******)param_2;
    lVar8 = ::alloc::alloc::Global::alloc_impl(0x260);
    if (lVar8 == 0) {
                    /* try { // try from 00228b26 to 00228b35 has its CatchHandler @ 00228c0b */
                    /* WARNING: Subroutine does not return */
      ::alloc::alloc::handle_alloc_error(8,0x260);
    }
                    /* try { // try from 00227f8c to 00227f98 has its CatchHandler @ 00228be4 */
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_460,param_1 + 0x18);
    local_4e8 = pppppppuStack_450;
    local_460 = (undefined *******)0x0;
                    /* try { // try from 00227fc2 to 00227fdb has its CatchHandler @ 00228bc8 */
    std::sys::os_str::bytes::Slice::to_owned(&local_320,&DAT_00134771,1);
    local_4b8 = local_310;
    pppppppuStack_4c0 = pppppppuStack_318;
    bVar5 = *(byte *)(param_4 + 0xeb);
    uVar11 = *(undefined *)(param_4 + 0xf2);
                    /* try { // try from 0022800c to 00228044 has its CatchHandler @ 00228bc6 */
    uVar14 = (ulong)uVar15 << 0x20;
    PathData::new(&local_320,&local_4f8,&local_460,&local_4c8,bVar5,uVar11,uVar14);
                    /* try { // try from 0022804d to 00228066 has its CatchHandler @ 00228bb4 */
    std::path::Path::join
              (local_490,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               &DAT_00134772,2);
    local_4c8 = (undefined *******)0x0;
                    /* try { // try from 00228073 to 0022808c has its CatchHandler @ 00228b95 */
    std::sys::os_str::bytes::Slice::to_owned(&local_460,&DAT_00134772,2);
    local_4e8 = pppppppuStack_450;
    local_4f8 = local_460;
    pppppppuStack_4f0 = pppppppuStack_458;
                    /* try { // try from 002280aa to 002280d8 has its CatchHandler @ 00228b93 */
    in_stack_fffffffffffffa98 = uVar14 & 0xffffffff00000000;
    PathData::new(&local_460,local_490,&local_4c8,&local_4f8,bVar5,uVar11,in_stack_fffffffffffffa98)
    ;
    puVar3 = PTR_memcpy_0031da60;
    (*(code *)PTR_memcpy_0031da60)(lVar8,&local_320,0x130);
    (*(code *)puVar3)(lVar8 + 0x130,&local_460,0x130);
                    /* try { // try from 0022810b to 0022811c has its CatchHandler @ 00228c0b */
    ::alloc::slice::hack::into_vec(&local_520,lVar8,2);
    param_2 = (undefined ********)local_528;
  }
  else {
    local_520 = 0;
    local_518 = (undefined *******)&DAT_00000008;
    local_510 = 0;
    bVar5 = *(byte *)(param_4 + 0xeb);
    uVar11 = *(undefined *)(param_4 + 0xf2);
  }
  ppppppppuVar12 = &local_4b0;
  local_528 = (undefined *******)CONCAT44(local_528._4_4_,(uint)bVar5);
  local_508 = (undefined *******)param_2;
  local_500 = param_3;
  while( true ) {
    _<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_4c8,&local_508);
    pppppppuVar4 = local_4b8;
    if ((undefined ********)local_4c8 == (undefined ********)0x0) break;
    if ((undefined ********)pppppppuStack_4c0 == (undefined ********)0x0) {
      local_468 = local_4b8;
                    /* try { // try from 00228288 to 00228291 has its CatchHandler @ 00228c4a */
      lVar8 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_5);
      if (lVar8 != 0) {
                    /* try { // try from 002284db to 002284e3 has its CatchHandler @ 00228b4a */
        auVar13 = uucore::mods::error::
                  _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                  ::from(lVar8);
                    /* try { // try from 002284e4 to 002284f6 has its CatchHandler @ 00228b45 */
        core::ptr::drop_in_place<std::io::error::Error>(&local_468);
                    /* try { // try from 002284f7 to 00228500 has its CatchHandler @ 00228c43 */
        core::ptr::drop_in_place<std::fs::ReadDir>(&local_508);
        goto LAB_00228501;
      }
      pppppppuStack_458 = pppppppuVar4;
      local_460 = (undefined *******)CONCAT71(local_460._1_7_,1);
                    /* try { // try from 002282ab to 00228351 has its CatchHandler @ 00228c6d */
      uucore::mods::error::set_exit_code(1);
      auVar13 = uucore::util_name();
      local_490._0_8_ = local_538;
      local_490._8_8_ = _<&T_as_core::fmt::Display>::fmt;
      local_480 = (undefined *******)&local_460;
      local_478 = _<uu_ls::LsError_as_core::fmt::Display>::fmt;
      local_320 = (undefined *******)&DAT_00312588;
      pppppppuStack_318 = (undefined *******)0x3;
      local_300 = 0;
      local_310 = (undefined *******)local_490;
      local_308 = 2;
      local_538 = auVar13;
      std::io::stdio::_eprint(&local_320);
                    /* try { // try from 00228352 to 0022835e has its CatchHandler @ 00228c48 */
      core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
    }
    else {
      local_4d8 = local_4a0;
      local_4e8 = local_4b0;
      uStack_4e0 = uStack_4a8;
      uStack_4dc = uStack_4a4;
      local_4f8 = pppppppuStack_4c0;
      pppppppuStack_4f0 = local_4b8;
                    /* try { // try from 002281c8 to 002281ec has its CatchHandler @ 00228c5e */
      cVar6 = should_display(&local_4f8,local_470);
      if (cVar6 == '\0') {
                    /* try { // try from 00228170 to 00228184 has its CatchHandler @ 00228c7f */
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
                    /* try { // try from 00228233 to 0022827a has its CatchHandler @ 00228c5c */
        in_stack_fffffffffffffa98 = in_stack_fffffffffffffa98 & 0xffffffff00000000;
        PathData::new(local_160,local_490,&local_460,&local_320,(ulong)local_528 & 0xffffffff,uVar11
                      ,in_stack_fffffffffffffa98);
        ::alloc::vec::Vec<T,A>::push(&local_520,local_160);
      }
    }
  }
                    /* try { // try from 00228364 to 002283fa has its CatchHandler @ 00228c43 */
  core::ptr::drop_in_place<std::fs::ReadDir>(&local_508);
  lVar8 = local_470;
  sort_entries(local_518,local_510,local_470,param_5);
  if ((*(char *)(lVar8 + 0xf8) == '\x01') || (*(char *)(lVar8 + 0xea) != '\0')) {
    return_total(&local_460,local_518,local_510,lVar8,param_5);
    ppppppppuVar12 = (undefined ********)pppppppuStack_450;
    auVar13._8_8_ = pppppppuStack_450;
    auVar13._0_8_ = pppppppuStack_458;
    if ((undefined ********)local_460 == (undefined ********)0x8000000000000000) goto LAB_00228501;
    local_320 = local_460;
    pppppppuStack_318 = pppppppuStack_458;
    local_310 = pppppppuStack_450;
    local_4c8 = pppppppuStack_458;
    pppppppuStack_4c0 = pppppppuStack_450;
    local_4f8 = (undefined *******)&local_4c8;
    pppppppuStack_4f0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
    local_460 = (undefined *******)&DAT_00123c10;
    pppppppuStack_458 = (undefined *******)&DAT_00000001;
    uStack_440 = (undefined ********)0x0;
    local_448 = (undefined *******)&DAT_00000001;
                    /* try { // try from 002284a2 to 002284c5 has its CatchHandler @ 00228b4f */
    pppppppuStack_450 = (undefined *******)&local_4f8;
    lVar9 = std::io::Write::write_fmt(param_5,&local_460);
    if (lVar9 != 0) {
      auVar13 = uucore::mods::error::
                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                ::from(lVar9);
                    /* try { // try from 002284c6 to 002284d8 has its CatchHandler @ 00228c43 */
      core::ptr::drop_in_place<alloc::string::String>(&local_320);
      goto LAB_00228501;
    }
    if (*(char *)(lVar8 + 0xee) != '\0') {
      dired::add_total(param_7,local_310);
    }
                    /* try { // try from 00228aa3 to 00228aaf has its CatchHandler @ 00228c43 */
    core::ptr::drop_in_place<alloc::string::String>(&local_320);
  }
  auVar13 = display_items(local_518,local_510,lVar8,param_5,param_7,param_8);
  if (auVar13._0_8_ == 0) {
    if (*(char *)(lVar8 + 0xe6) != '\0') {
      pppppppuStack_4f0 = local_518 + local_510 * 0x26;
      local_4e8 = (undefined *******)(ulong)((uint)(cVar7 == '\0') * 2);
      local_4f8 = local_518;
      lVar9 = _<core::iter::adapters::skip::Skip<I>as_core::iter::traits::iterator::Iterator>::
              try_fold(&local_4f8);
      puVar3 = PTR_memcpy_0031da60;
      if (lVar9 != 0) {
        local_528 = (undefined *******)CONCAT71(local_528._1_7_,*(undefined *)(lVar8 + 0xee));
        do {
          lVar1 = lVar9 + 0x18;
                    /* try { // try from 002285ba to 002285c6 has its CatchHandler @ 00228c1d */
          std::fs::read_dir(&local_508);
          pppppppuVar4 = local_508;
          auVar13 = local_538;
          if (local_500 != '\x02') {
            local_538._0_8_ = local_508;
            local_538._9_7_ = auVar13._9_7_;
            local_538[8] = local_500;
                    /* try { // try from 00228725 to 00228734 has its CatchHandler @ 00228c34 */
            uucore::features::fs::FileInformation::from_path
                      (&local_460,lVar1,*(undefined *)(lVar9 + 0x128));
            pppppppuVar4 = pppppppuStack_458;
            if ((undefined ********)local_460 == (undefined ********)0x0) {
              (*(code *)puVar3)(local_1e8,&pppppppuStack_450,0x88);
              local_1f0 = pppppppuVar4;
                    /* try { // try from 0022876c to 002287ab has its CatchHandler @ 00228c34 */
              cVar7 = hashbrown::map::HashMap<K,V,S,A>::insert(local_498,&local_1f0);
              if (cVar7 == '\0') {
                local_460 = (undefined *******)&PTR_DAT_003125b8;
                pppppppuStack_458 = (undefined *******)&DAT_00000001;
                pppppppuStack_450 = (undefined *******)&DAT_00000008;
                local_448 = (undefined *******)0x0;
                uStack_440 = (undefined ********)0x0;
                    /* try { // try from 002288d1 to 002289be has its CatchHandler @ 00228c34 */
                lVar10 = std::io::Write::write_fmt(param_5,&local_460);
                if (lVar10 == 0) {
                  if ((char)local_528 != '\0') {
                    *(undefined8 *)(param_7 + 0x30) = 2;
                    auVar13 = dired::indent(param_5);
                    if (auVar13._0_8_ != 0) goto LAB_00228b00;
                    std::sys::os_str::bytes::Slice::to_string_lossy
                              (&local_460,*(undefined8 *)(lVar9 + 0x20),
                               *(undefined8 *)(lVar9 + 0x28));
                    pppppppuVar4 = pppppppuStack_450;
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_460);
                    dired::calculate_subdired(param_7,pppppppuVar4);
                    *(undefined **)(param_7 + 0x30) =
                         (undefined *)((long)pppppppuVar4 + *(long *)(param_7 + 0x30) + 3);
                  }
                  show_dir_name(lVar9,param_5,lVar8);
                  local_460 = (undefined *******)&PTR_DAT_003125b8;
                  pppppppuStack_458 = (undefined *******)&DAT_00000001;
                  pppppppuStack_450 = (undefined *******)&DAT_00000008;
                  local_448 = (undefined *******)0x0;
                  uStack_440 = (undefined ********)0x0;
                  lVar10 = std::io::Write::write_fmt(param_5,&local_460);
                  if (lVar10 == 0) {
                    /* try { // try from 002289d2 to 00228a25 has its CatchHandler @ 00228bf1 */
                    auVar13 = enter_directory(lVar9,local_538._0_8_,local_538._8_8_ & 0xff,lVar8,
                                              param_5,local_498,param_7,param_8);
                    if (auVar13._0_8_ == 0) {
                      uucore::features::fs::FileInformation::from_path
                                (&local_460,lVar1,*(undefined *)(lVar9 + 0x128));
                      pppppppuVar4 = pppppppuStack_458;
                      if ((undefined ********)local_460 == (undefined ********)0x0) {
                        (*(code *)puVar3)(&pppppppuStack_318,&pppppppuStack_450,0x88);
                        local_320 = pppppppuVar4;
                    /* try { // try from 00228a58 to 00228a6c has its CatchHandler @ 00228bf1 */
                        hashbrown::map::HashMap<K,V,S,A>::remove(local_498,&local_320);
                        goto LAB_002285a0;
                      }
                    /* try { // try from 00228b12 to 00228b1a has its CatchHandler @ 00228b36 */
                      auVar13 = uucore::mods::error::
                                _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                                ::from(pppppppuStack_458);
                    }
                    goto LAB_00228501;
                  }
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar10);
                }
                else {
                  auVar13 = uucore::mods::error::
                            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                            ::from(lVar10);
                }
              }
              else {
                lVar9 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush
                                  (param_5);
                if (lVar9 == 0) {
                  _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_320,lVar1);
                  local_448 = local_310;
                  pppppppuStack_458 = local_320;
                  pppppppuStack_450 = pppppppuStack_318;
                  local_460 = (undefined *******)CONCAT71(local_460._1_7_,5);
                    /* try { // try from 002287d3 to 00228882 has its CatchHandler @ 00228bf9 */
                  uucore::mods::error::set_exit_code(2);
                  auVar13 = uucore::util_name();
                  local_4c8 = (undefined *******)local_490;
                  pppppppuStack_4c0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
                  local_4b8 = (undefined *******)&local_460;
                  local_4b0 = (undefined *******)_<uu_ls::LsError_as_core::fmt::Display>::fmt;
                  local_320 = (undefined *******)&DAT_00312588;
                  pppppppuStack_318 = (undefined *******)0x3;
                  local_300 = 0;
                  local_310 = (undefined *******)&local_4c8;
                  local_308 = 2;
                  local_490 = auVar13;
                  std::io::stdio::_eprint(&local_320);
                    /* try { // try from 00228883 to 0022888f has its CatchHandler @ 00228c34 */
                  core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
                    /* try { // try from 00228890 to 00228899 has its CatchHandler @ 00228c1d */
                  core::ptr::drop_in_place<std::fs::ReadDir>(local_538);
                  goto LAB_002285a0;
                }
                auVar13 = uucore::mods::error::
                          _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                          ::from(lVar9);
              }
            }
            else {
                    /* try { // try from 00228ad3 to 00228afc has its CatchHandler @ 00228b40 */
              auVar13 = uucore::mods::error::
                        _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                        ::from(pppppppuStack_458);
            }
LAB_00228b00:
                    /* try { // try from 00228b03 to 00228b0c has its CatchHandler @ 00228c43 */
            core::ptr::drop_in_place<std::fs::ReadDir>(local_538);
            goto LAB_00228501;
          }
          local_538._0_8_ = local_508;
                    /* try { // try from 002285de to 002285e7 has its CatchHandler @ 00228b81 */
          lVar10 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_5);
          if (lVar10 != 0) {
                    /* try { // try from 00228ab5 to 00228abd has its CatchHandler @ 00228b3e */
            auVar13 = uucore::mods::error::
                      _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                      ::from(lVar10);
                    /* try { // try from 00228abe to 00228acd has its CatchHandler @ 00228c43 */
            core::ptr::drop_in_place<std::io::error::Error>(local_538);
            goto LAB_00228501;
          }
          local_4c8 = pppppppuVar4;
                    /* try { // try from 002285f9 to 00228608 has its CatchHandler @ 00228b6c */
          _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_320,lVar1);
          uStack_440 = (undefined ********)local_310;
          pppppppuStack_450 = local_320;
          local_448 = pppppppuStack_318;
          pppppppuStack_458 = pppppppuVar4;
          local_460 = (undefined *******)
                      CONCAT71(CONCAT61(local_460._2_6_,*(char *)(lVar9 + 0x129)),2);
                    /* try { // try from 0022864b to 002286f5 has its CatchHandler @ 00228c22 */
          uucore::mods::error::set_exit_code(2 - (uint)(*(char *)(lVar9 + 0x129) == '\0'));
          auVar13 = uucore::util_name();
          local_4c8 = (undefined *******)local_490;
          pppppppuStack_4c0 = (undefined *******)_<&T_as_core::fmt::Display>::fmt;
          local_4b8 = (undefined *******)&local_460;
          local_4b0 = (undefined *******)_<uu_ls::LsError_as_core::fmt::Display>::fmt;
          local_320 = (undefined *******)&DAT_00312588;
          pppppppuStack_318 = (undefined *******)0x3;
          local_300 = 0;
          local_310 = (undefined *******)&local_4c8;
          local_308 = 2;
          local_490 = auVar13;
          std::io::stdio::_eprint(&local_320);
                    /* try { // try from 002286f6 to 00228702 has its CatchHandler @ 00228b64 */
          core::ptr::drop_in_place<uu_ls::LsError>(&local_460);
LAB_002285a0:
          lVar9 = _<core::iter::adapters::skip::Skip<I>as_core::iter::traits::iterator::Iterator>::
                  try_fold(&local_4f8);
          ppppppppuVar12 = (undefined ********)puVar3;
        } while (lVar9 != 0);
      }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_520);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = ppppppppuVar12;
    return auVar2 << 0x40;
  }
LAB_00228501:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&local_520);
  return auVar13;
}