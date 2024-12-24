code * __rustcall uu_hostname::display_hostname(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 *unaff_R13;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined auVar10 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined local_138 [12];
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 *local_d8;
  code *pcStack_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined local_90 [8];
  long local_88;
  long local_80;
  undefined8 *local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  hostname::get(&local_168);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_d8,&local_168);
  if (local_d8 == (undefined8 *)0x8000000000000000) {
    return pcStack_d0;
  }
  local_138._0_8_ = local_d8;
  stack0xfffffffffffffed0 = pcStack_d0;
  local_128 = local_c8;
                    /* try { // try from 001b012d to 001b0159 has its CatchHandler @ 001b0701 */
  std::sys::os_str::bytes::Slice::to_string_lossy(&local_f8,pcStack_d0);
  if (local_f8 == (undefined8 *)0x8000000000000000) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec
              (&local_168,uStack_f0,CONCAT44(uStack_e4,local_e8));
    local_108 = local_158;
    local_118._0_4_ = (undefined4)local_168;
    local_118._4_4_ = local_168._4_4_;
    uStack_110 = (undefined4)uStack_160;
    uStack_10c = uStack_160._4_4_;
  }
  else {
    local_108 = (undefined8 *)CONCAT44(uStack_e4,local_e8);
    local_118._0_4_ = (undefined4)local_f8;
    local_118._4_4_ = local_f8._4_4_;
    uStack_110 = (undefined4)uStack_f0;
    uStack_10c = uStack_f0._4_4_;
  }
                    /* try { // try from 001b0181 to 001b01a2 has its CatchHandler @ 001b0710 */
  core::ptr::drop_in_place<std::ffi::os_str::OsString>(local_138);
  cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"ip-address",10);
  if (cVar1 == '\0') {
                    /* try { // try from 001b0377 to 001b04cb has its CatchHandler @ 001b0710 */
    cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"short",5);
    if ((cVar1 != '\0') ||
       (cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"domain",6)
       , cVar1 != '\0')) {
      local_d8 = (undefined8 *)CONCAT44(uStack_10c,uStack_110);
      pcStack_d0 = (code *)((long)local_108 + (long)local_d8);
      local_c8 = (undefined8 *)0x0;
      auVar10 = core::iter::traits::iterator::Iterator::try_fold(&local_d8);
      unaff_R13 = auVar10._0_8_;
      if (auVar10._8_4_ != 0x110000) {
        cVar1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_1,"short",5);
        puVar7 = local_108;
        puVar8 = puVar7;
        if (cVar1 == '\0') {
          lVar6 = (long)unaff_R13 + 1;
          lVar2 = CONCAT44(uStack_10c,uStack_110);
          auVar9 = core::str::traits::
                   _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>
                   ::get(lVar6,lVar2,local_108);
          if (auVar9._0_8_ != 0) {
            uStack_f0 = _<&T_as_core::fmt::Display>::fmt;
            local_168 = (undefined8 *)&DAT_00219390;
            uStack_160 = (code *)0x2;
            local_148 = 0;
            uStack_150 = 1;
            local_158 = (undefined8 **)&local_f8;
            local_f8 = (undefined8 *)local_138;
            _local_138 = auVar9;
                    /* try { // try from 001b0670 to 001b0678 has its CatchHandler @ 001b0710 */
            std::io::stdio::_print(&local_168);
            goto LAB_001b0679;
          }
          ppuVar5 = &PTR_s_src_uu_hostname_src_hostname_rs_00219378;
          goto LAB_001b06c7;
        }
        lVar2 = CONCAT44(uStack_10c,uStack_110);
        auVar9 = core::str::traits::
                 _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                           (unaff_R13,lVar2,local_108);
        if (auVar9._0_8_ != 0) {
          uStack_f0 = _<&T_as_core::fmt::Display>::fmt;
          local_168 = (undefined8 *)&DAT_00219390;
          uStack_160 = (code *)0x2;
          local_148 = 0;
          uStack_150 = 1;
          local_158 = (undefined8 **)&local_f8;
          local_f8 = (undefined8 *)local_138;
          _local_138 = auVar9;
          std::io::stdio::_print(&local_168);
          goto LAB_001b0679;
        }
        goto LAB_001b06af;
      }
    }
    local_d8 = &local_118;
    pcStack_d0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_168 = (undefined8 *)&DAT_00219390;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = &local_d8;
    std::io::stdio::_print(&local_168);
LAB_001b0679:
    core::ptr::drop_in_place<alloc::string::String>(&local_118);
    return (code *)0x0;
  }
  local_158 = (undefined8 **)local_108;
  local_168 = (undefined8 *)CONCAT44(local_118._4_4_,(undefined4)local_118);
  uStack_160 = (code *)CONCAT44(uStack_10c,uStack_110);
  _<alloc::string::String_as_core::ops::arith::Add<&str>>::add(local_138,&local_168);
                    /* try { // try from 001b01ce to 001b01e9 has its CatchHandler @ 001b06f2 */
  _<alloc::string::String_as_std::net::socket_addr::ToSocketAddrs>::to_socket_addrs
            (&local_168,local_138);
  _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
  ::map_err_context(&local_d8,&local_168);
  if (local_d8 == (undefined8 *)0x0) {
    core::ptr::drop_in_place<alloc::string::String>(local_138);
    return pcStack_d0;
  }
  local_78 = local_d8;
  pcStack_70 = pcStack_d0;
  local_68 = local_c8;
  uStack_60 = uStack_c0;
                    /* try { // try from 001b0233 to 001b0244 has its CatchHandler @ 001b06db */
  core::ptr::drop_in_place<alloc::string::String>(local_138);
  _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_168);
  local_b8 = (undefined4)local_148;
  uStack_b4 = local_148._4_4_;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  local_d8 = local_168;
  pcStack_d0 = uStack_160;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_e8 = (undefined4)local_68;
  uStack_e4 = local_68._4_4_;
  uStack_e0 = (undefined4)uStack_60;
  uStack_dc = uStack_60._4_4_;
  local_f8 = local_78;
  uStack_f0 = pcStack_70;
  _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
            (local_138,&local_f8);
  if (local_138._0_2_ != 2) {
    unaff_R13 = (undefined8 *)local_138;
    do {
      local_48 = (undefined4)local_128;
      uStack_44 = local_128._4_4_;
      uStack_40 = uStack_120;
      uStack_3c = uStack_11c;
      local_58 = local_138._0_4_;
      uStack_54 = local_138._4_4_;
      uStack_50 = local_138._8_4_;
      uStack_4c = uStack_12c;
                    /* try { // try from 001b0551 to 001b056b has its CatchHandler @ 001b0731 */
      lVar2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(&local_d8,&local_58);
      if (lVar2 == 0) {
        _<T_as_alloc::string::ToString>::to_string(local_90,&local_58);
                    /* try { // try from 001b057c to 001b05f8 has its CatchHandler @ 001b071f */
        cVar1 = core::slice::_<impl[T]>::ends_with
                          (local_88,local_80,
                           ":1/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/slice/mod.rscapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rs"
                           ,2);
        if (cVar1 != '\0') {
          ::alloc::string::String::truncate(local_90,local_80 + -2);
        }
        uVar3 = core::slice::iter::Iter<T>::make_slice(local_88,local_80 + local_88);
        ::alloc::vec::Vec<T,A>::append_elements(&local_a8,uVar3);
        ::alloc::string::String::push(&local_a8,0x20);
        local_158 = (undefined8 **)CONCAT44(uStack_44,local_48);
        uStack_150 = CONCAT44(uStack_3c,uStack_40);
        local_168 = (undefined8 *)CONCAT44(uStack_54,local_58);
        uStack_160 = (code *)CONCAT44(uStack_4c,uStack_50);
        hashbrown::map::HashMap<K,V,S,A>::insert(&local_d8,&local_168);
                    /* try { // try from 001b05f9 to 001b0600 has its CatchHandler @ 001b0731 */
        core::ptr::drop_in_place<alloc::string::String>(local_90);
      }
      _<alloc::vec::into_iter::IntoIter<T,A>as_core::iter::traits::iterator::Iterator>::next
                (unaff_R13,&local_f8);
    } while (local_138._0_2_ != 2);
  }
                    /* try { // try from 001b02c7 to 001b0357 has its CatchHandler @ 001b06ed */
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<core::net::socket_addr::SocketAddr>>
            (&local_f8);
  lVar2 = local_98;
  uVar3 = local_a0;
  if (local_98 == 0) {
LAB_001b0358:
                    /* try { // try from 001b0358 to 001b0364 has its CatchHandler @ 001b06d6 */
    core::ptr::drop_in_place<alloc::string::String>(&local_a8);
    core::ptr::
    drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>
              (&local_d8);
    return (code *)0x0;
  }
  puVar8 = (undefined8 *)(local_98 + -1);
  auVar9 = core::str::traits::
           _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                     (puVar8,local_a0,local_98);
  if (auVar9._0_8_ != 0) {
    local_f8 = (undefined8 *)local_138;
    uStack_f0 = _<&T_as_core::fmt::Display>::fmt;
    local_168 = (undefined8 *)&DAT_00219390;
    uStack_160 = (code *)0x2;
    local_148 = 0;
    uStack_150 = 1;
    local_158 = (undefined8 **)&local_f8;
    _local_138 = auVar9;
    std::io::stdio::_print(&local_168);
    goto LAB_001b0358;
  }
                    /* try { // try from 001b0697 to 001b06ae has its CatchHandler @ 001b06ed */
  core::str::slice_error_fail(uVar3,lVar2,0,puVar8,&PTR_s_src_uu_hostname_src_hostname_rs_002193c8);
LAB_001b06af:
  puVar7 = unaff_R13;
  ppuVar5 = &PTR_s_src_uu_hostname_src_hostname_rs_002193b0;
  lVar6 = 0;
LAB_001b06c7:
                    /* try { // try from 001b06c7 to 001b06d5 has its CatchHandler @ 001b0710 */
  uVar3 = core::str::slice_error_fail(lVar2,puVar8,lVar6,puVar7,ppuVar5);
                    /* catch() { ... } // from try @ 001b0358 with catch @ 001b06d6 */
  core::ptr::drop_in_place<std::collections::hash::set::HashSet<core::net::socket_addr::SocketAddr>>
            (&local_d8);
  pcVar4 = (code *)_Unwind_Resume(uVar3);
  return pcVar4;
}