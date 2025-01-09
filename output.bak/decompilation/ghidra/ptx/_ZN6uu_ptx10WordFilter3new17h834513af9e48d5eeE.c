undefined8 * __rustcall uu_ptx::WordFilter::new(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **local_188;
  undefined8 uStack_180;
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined **local_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 **local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 **ppuStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 *local_38;
  code *local_30;
  
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(param_2,"only-file",9)
  ;
  if (cVar2 == '\0') {
    _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_188);
    local_108 = uStack_170;
    uStack_100 = uStack_168;
    local_f8 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
    uStack_90 = uStack_180;
    local_98 = local_188;
    local_88 = ppuStack_178;
  }
  else {
    read_word_filter_file(&local_188,param_2,"only-file",9);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
      return param_1;
    }
    local_f8 = local_120;
    local_108 = uStack_130;
    uStack_100 = uStack_128;
    uStack_90 = uStack_140;
    local_98 = local_148;
    local_88 = ppuStack_138;
  }
  uStack_80 = (undefined4)local_108;
  uStack_7c = local_108._4_4_;
  uStack_78 = (undefined4)uStack_100;
  uStack_74 = uStack_100._4_4_;
  ppuStack_70 = local_f8;
                    /* try { // try from 002b5bb6 to 002b5c31 has its CatchHandler @ 002b60d6 */
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,"ignore-file",0xb);
  if (cVar3 == '\0') {
    _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_188);
    local_108 = uStack_170;
    uStack_100 = uStack_168;
    local_f8 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
    uStack_60 = uStack_180;
    local_68 = local_188;
    local_58 = ppuStack_178;
  }
  else {
    read_word_filter_file(&local_188,param_2,"ignore-file",0xb);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
      goto LAB_002b5fe2;
    }
    local_f8 = local_120;
    local_108 = uStack_130;
    uStack_100 = uStack_128;
    uStack_60 = uStack_140;
    local_68 = local_148;
    local_58 = ppuStack_138;
  }
  uStack_50 = (undefined4)local_108;
  uStack_4c = local_108._4_4_;
  uStack_48 = (undefined4)uStack_100;
  uStack_44 = uStack_100._4_4_;
  uStack_40 = local_f8;
                    /* try { // try from 002b5c92 to 002b5cbf has its CatchHandler @ 002b60b2 */
  cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,"break-file",10);
  if ((cVar4 == '\0') ||
     (cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                        (param_2,"word-regexp",0xb), cVar4 != '\0')) {
    local_c8 = (undefined **)0x0;
  }
  else {
                    /* try { // try from 002b5e76 to 002b5e8d has its CatchHandler @ 002b60b2 */
    read_char_filter_file(&local_188,param_2);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_148,&local_188);
    if (local_148 == (undefined **)0x0) {
      param_1[1] = uStack_140;
      param_1[2] = ppuStack_138;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 002b5fd5 to 002b5fe1 has its CatchHandler @ 002b60d6 */
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>
                (&local_68);
LAB_002b5fe2:
      core::ptr::drop_in_place<std::collections::hash::set::HashSet<alloc::string::String>>
                (&local_98);
      return param_1;
    }
    uStack_e0 = local_120;
    uStack_f0 = (undefined4)uStack_130;
    uStack_ec = uStack_130._4_4_;
    uStack_e8 = (undefined4)uStack_128;
    uStack_e4 = uStack_128._4_4_;
    local_108 = local_148;
    uStack_100 = uStack_140;
    local_f8 = ppuStack_138;
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 002b6002 to 002b600b has its CatchHandler @ 002b607a */
      _<std::collections::hash::set::HashSet<T,S>as_core::iter::traits::collect::FromIterator<T>>::
      from_iter(&local_148);
    }
    else {
                    /* try { // try from 002b5ee3 to 002b5eea has its CatchHandler @ 002b607a */
      _<hashbrown::map::HashMap<K,V,S,A>as_core::default::Default>::default(&local_188);
      local_120 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
      uStack_128 = uStack_168;
      ppuStack_138 = ppuStack_178;
      uStack_130 = uStack_170;
      local_148 = local_188;
      uStack_140 = uStack_180;
    }
    uStack_168 = CONCAT44(uStack_e4,uStack_e8);
    uStack_160 = (undefined4)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    ppuStack_178 = local_f8;
    uStack_170 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
    local_188 = local_108;
    uStack_180 = uStack_100;
                    /* try { // try from 002b6032 to 002b603e has its CatchHandler @ 002b606b */
    _<hashbrown::set::HashSet<T,S,A>as_core::iter::traits::collect::Extend<T>>::extend
              (&local_148,&local_188);
    uStack_c0 = (undefined4)uStack_140;
    uStack_bc = uStack_140._4_4_;
    ppuStack_b8 = ppuStack_138;
    ppuStack_b0 = uStack_130;
    uStack_a8 = uStack_128;
    local_a0 = local_120;
    local_c8 = local_148;
  }
                    /* try { // try from 002b5cd4 to 002b5d2f has its CatchHandler @ 002b60b7 */
  cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,"word-regexp",0xb);
  if (cVar4 == '\0') {
LAB_002b5d35:
    if (local_c8 != (undefined **)0x0) {
      local_120 = local_a0;
      uStack_130 = ppuStack_b0;
      uStack_128 = uStack_a8;
      uStack_140 = CONCAT44(uStack_bc,uStack_c0);
      ppuStack_138 = ppuStack_b8;
      local_148 = local_c8;
                    /* try { // try from 002b5d72 to 002b5dba has its CatchHandler @ 002b60ad */
      _<hashbrown::map::HashMap<K,V,S,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                (&local_188,&local_148);
      local_148 = local_188;
      uStack_140 = uStack_180;
      ppuStack_138 = ppuStack_178;
      uStack_130 = uStack_170;
      uStack_128 = uStack_168;
      local_120 = (undefined8 **)CONCAT44(uStack_15c,uStack_160);
      local_118 = local_158;
      uStack_114 = uStack_154;
      uStack_110 = uStack_150;
      uStack_10c = uStack_14c;
      _<alloc::string::String_as_core::iter::traits::collect::FromIterator<alloc::string::String>>::
      from_iter(&local_108,&local_148);
      local_30 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      local_188 = &PTR_s______003edb98;
      uStack_180 = 2;
      uStack_168 = 0;
      ppuStack_178 = &local_38;
      uStack_170 = (undefined **)0x1;
                    /* try { // try from 002b5e05 to 002b5e11 has its CatchHandler @ 002b609b */
      local_38 = &local_108;
      core::option::Option<T>::map_or_else(&local_148,&local_188);
                    /* try { // try from 002b5e12 to 002b5e1e has its CatchHandler @ 002b608c */
      core::ptr::drop_in_place<alloc::string::String>(&local_108);
      local_d8 = uStack_140;
      uStack_d0 = ppuStack_138;
      bVar1 = false;
      ppuVar6 = local_148;
      goto LAB_002b5f4e;
    }
    if (*(char *)(param_3 + 0x58) == '\0') {
                    /* try { // try from 002b5f27 to 002b5f3a has its CatchHandler @ 002b60b7 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_188,"[^ \t\n]+",7);
    }
    else {
                    /* try { // try from 002b5e5d to 002b5e70 has its CatchHandler @ 002b60b7 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_188,"\\w+",3);
    }
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_188,param_2,"word-regexp",0xb);
    lVar5 = clap_builder::parser::error::MatchesError::unwrap("word-regexp",0xb,&local_188);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_002b5d35;
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_188,lVar5);
  }
  local_d8 = uStack_180;
  uStack_d0 = ppuStack_178;
  bVar1 = true;
  ppuVar6 = local_188;
LAB_002b5f4e:
  param_1[7] = CONCAT44(uStack_74,uStack_78);
  param_1[8] = ppuStack_70;
  param_1[5] = local_88;
  param_1[6] = CONCAT44(uStack_7c,uStack_80);
  param_1[3] = local_98;
  param_1[4] = uStack_90;
  param_1[9] = local_68;
  param_1[10] = uStack_60;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)local_58;
  *(undefined4 *)((long)param_1 + 0x5c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0xc) = uStack_50;
  *(undefined4 *)((long)param_1 + 100) = uStack_4c;
  *(undefined4 *)(param_1 + 0xd) = uStack_48;
  *(undefined4 *)((long)param_1 + 0x6c) = uStack_44;
  *(undefined4 *)(param_1 + 0xe) = (undefined4)uStack_40;
  *(undefined4 *)((long)param_1 + 0x74) = uStack_40._4_4_;
  *param_1 = ppuVar6;
  *(undefined4 *)(param_1 + 1) = (undefined4)local_d8;
  *(undefined4 *)((long)param_1 + 0xc) = local_d8._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_d0;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_d0._4_4_;
  *(char *)(param_1 + 0xf) = cVar2;
  *(char *)((long)param_1 + 0x79) = cVar3;
  if (bVar1) {
    core::ptr::drop_in_place<core::option::Option<std::collections::hash::set::HashSet<char>>>
              (&local_c8);
  }
  return param_1;
}