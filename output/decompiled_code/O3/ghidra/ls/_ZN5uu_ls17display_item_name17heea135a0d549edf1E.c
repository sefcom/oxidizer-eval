void __rustcall
uu_ls::display_item_name
          (undefined4 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 *param_6,undefined8 param_7,long param_8,long param_9)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 **local_2e8;
  undefined8 *local_2e0;
  code *local_2d8;
  undefined8 *local_2d0;
  code *local_2c8;
  undefined8 *local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 **local_298;
  code *pcStack_290;
  undefined8 **local_288;
  undefined local_278 [16];
  undefined8 **local_268;
  undefined8 local_260;
  undefined4 *local_258;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 **local_238;
  code *local_230;
  undefined8 local_228;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 **local_158;
  code *pcStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined local_40;
  
  lVar1 = param_3 + 0xf5;
                    /* try { // try from 0022c0e3 to 0022c0f0 has its CatchHandler @ 0022c9f3 */
  local_2c0 = param_6;
  local_260 = param_5;
  local_258 = param_1;
  local_250 = param_4;
  uucore::features::quoting_style::escape_name
            (&local_2f8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),lVar1);
  if (*(char *)(param_3 + 0xef) != '\0') {
                    /* try { // try from 0022c10a to 0022c119 has its CatchHandler @ 0022c9f8 */
    create_hyperlink(&local_168,CONCAT44(uStack_2ec,uStack_2f0),local_2e8,param_2);
                    /* try { // try from 0022c11a to 0022c123 has its CatchHandler @ 0022c9ce */
    core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    local_2e8 = local_158;
    local_2f8._0_4_ = (undefined4)local_168;
    local_2f8._4_4_ = local_168._4_4_;
    uStack_2f0 = (undefined4)uStack_160;
    uStack_2ec = uStack_160._4_4_;
  }
  if (*(char *)(param_8 + 0x1d) != '\x02') {
                    /* try { // try from 0022c17f to 0022c1a5 has its CatchHandler @ 0022c9f8 */
    colors::color_name(&local_168,CONCAT44(uStack_2ec,uStack_2f0),local_2e8,param_2,param_8,param_7,
                       0,(undefined *)(ulong)*(ushort *)(param_3 + 0xe4) <
                         (undefined *)(param_9 + (long)local_2e8) &&
                         (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) != (undefined *)0x0);
                    /* try { // try from 0022c1a6 to 0022c1af has its CatchHandler @ 0022c9cc */
    core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    local_2e8 = local_158;
    local_2f8._0_4_ = (undefined4)local_168;
    local_2f8._4_4_ = local_168._4_4_;
    uStack_2f0 = (undefined4)uStack_160;
    uStack_2ec = uStack_160._4_4_;
  }
  cVar2 = *(char *)(param_3 + 0xf8);
  lVar3 = local_2c0[2];
  bVar4 = lVar3 != 0;
  bVar5 = cVar2 != '\x01';
  if (bVar4 && bVar5) {
    local_158 = (undefined8 **)local_2c0[2];
    local_168 = (undefined8 **)*local_2c0;
    uStack_160 = (code *)local_2c0[1];
                    /* try { // try from 0022c21a to 0022c22e has its CatchHandler @ 0022c9f8 */
    _<alloc::string::String_as_core::ops::arith::Add<&str>>::add
              (&local_248,&local_168,CONCAT44(uStack_2ec,uStack_2f0));
                    /* try { // try from 0022c22f to 0022c238 has its CatchHandler @ 0022c9a5 */
    core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    local_2e8 = local_238;
    local_2f8._0_4_ = (int)local_248;
    local_2f8._4_4_ = local_248._4_4_;
    uStack_2f0 = (undefined4)uStack_240;
    uStack_2ec = uStack_240._4_4_;
  }
  cVar6 = *(char *)(param_3 + 0xf4);
  if (cVar6 == '\0') goto LAB_0022c2a1;
                    /* try { // try from 0022c266 to 0022c312 has its CatchHandler @ 0022c9f8 */
  iVar7 = classify_file(param_2,param_7);
  if (cVar6 == '\x03') {
LAB_0022c287:
    if (iVar7 != 0x110000) {
LAB_0022c295:
      ::alloc::string::String::push(&local_2f8,iVar7);
    }
  }
  else if (cVar6 == '\x02') {
    if (iVar7 != 0x2a) goto LAB_0022c287;
  }
  else if (iVar7 == 0x2f) goto LAB_0022c295;
LAB_0022c2a1:
  if (cVar2 != '\x01') goto LAB_0022c77a;
  lVar8 = PathData::file_type(param_2,param_7);
  if (lVar8 == 0) goto LAB_0022c77a;
  puVar9 = (uint *)PathData::file_type(param_2,param_7);
  auVar11._8_8_ = local_278._8_8_;
  auVar11._0_8_ = local_278._0_8_;
  if (puVar9 == (uint *)0x0) {
                    /* try { // try from 0022c8ba to 0022c8c6 has its CatchHandler @ 0022c9f8 */
    uVar10 = core::option::unwrap_failed(&PTR_DAT_00312bb8);
                    /* catch() { ... } // from try @ 0022c683 with catch @ 0022c8c7 */
                    /* try { // try from 0022c8ca to 0022ca15 has its CatchHandler @ 0022ca1e */
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_248);
    core::ptr::drop_in_place<std::path::PathBuf>(&local_2e0);
    core::ptr::drop_in_place<uu_ls::PathData>(&local_168);
    core::ptr::drop_in_place<std::path::PathBuf>(&local_2b8);
    core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    if (!bVar4 || !bVar5) {
      core::ptr::drop_in_place<alloc::string::String>(local_2c0);
    }
    _Unwind_Resume(uVar10);
    return;
  }
  if (((*puVar9 & 0xf000) != 0xa000) || (local_278 = auVar11, *(char *)(param_2 + 0x128) != '\0'))
  goto LAB_0022c77a;
  std::fs::read_link(&local_198,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  if (CONCAT44(uStack_194,local_198) == -0x8000000000000000) {
                    /* try { // try from 0022c33c to 0022c348 has its CatchHandler @ 0022c92a */
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_248,param_2 + 0x18);
    local_148 = local_238;
    local_158 = local_248;
    pcStack_150 = uStack_240;
    local_168 = (undefined8 **)CONCAT62(local_168._2_6_,2);
    uStack_160 = (code *)CONCAT44(uStack_18c,uStack_190);
                    /* try { // try from 0022c37b to 0022c41b has its CatchHandler @ 0022c962 */
    uucore::mods::error::set_exit_code(1);
    local_278 = uucore::util_name();
    local_2e0 = (undefined8 *)local_278;
    local_2d8 = _<&T_as_core::fmt::Display>::fmt;
    local_2d0 = &local_168;
    local_2c8 = _<uu_ls::LsError_as_core::fmt::Display>::fmt;
    local_248 = (undefined8 **)&DAT_00312798;
    uStack_240 = (code *)0x3;
    local_228 = 0;
    local_238 = &local_2e0;
    local_230 = (code *)0x2;
    std::io::stdio::_eprint(&local_248);
                    /* try { // try from 0022c41c to 0022c428 has its CatchHandler @ 0022c9f8 */
    core::ptr::drop_in_place<uu_ls::LsError>(&local_168);
    goto LAB_0022c77a;
  }
  local_2a8 = local_188;
  local_2b8 = local_198;
  uStack_2b4 = uStack_194;
  uStack_2b0 = uStack_190;
  uStack_2ac = uStack_18c;
                    /* try { // try from 0022c448 to 0022c486 has its CatchHandler @ 0022c950 */
  ::alloc::vec::Vec<T,A>::append_elements(&local_2f8,&DAT_0012423c,4);
  if (*(char *)(param_8 + 0x1d) == '\x02') {
    uucore::features::quoting_style::escape_name
              (&local_168,CONCAT44(uStack_2ac,uStack_2b0),local_2a8,lVar1);
    uVar10 = core::slice::iter::Iter<T>::make_slice
                       (uStack_160,(code *)((long)local_158 + (long)uStack_160));
                    /* try { // try from 0022c49f to 0022c4ab has its CatchHandler @ 0022c8f7 */
    ::alloc::vec::Vec<T,A>::append_elements(&local_2f8,uVar10);
                    /* try { // try from 0022c4ac to 0022c4cf has its CatchHandler @ 0022c950 */
    core::ptr::drop_in_place<alloc::string::String>(&local_168);
  }
  else {
    _<alloc::vec::Vec<T,A>as_core::clone::Clone>::clone(&local_168,&local_2b8);
    local_288 = local_158;
    local_298 = local_168;
    pcStack_290 = uStack_160;
                    /* try { // try from 0022c4f7 to 0022c50e has its CatchHandler @ 0022c909 */
    cVar6 = std::path::Path::is_absolute(CONCAT44(uStack_2ac,uStack_2b0),local_2a8);
    if (cVar6 == '\0') {
      auVar11 = std::path::Path::parent
                          (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
      if (auVar11._0_8_ != 0) {
        local_158 = local_288;
        local_168 = local_298;
        uStack_160 = pcStack_290;
                    /* try { // try from 0022c531 to 0022c5d2 has its CatchHandler @ 0022c93c */
        std::path::Path::join(&local_248,auVar11._0_8_,auVar11._8_8_,&local_168);
        local_298 = local_248;
        pcStack_290 = uStack_240;
        local_288 = local_238;
      }
    }
    local_268 = local_288;
    local_278._0_8_ = local_298;
    local_278._8_8_ = pcStack_290;
    local_248 = (undefined8 **)0x0;
    local_2e0 = (undefined8 *)0x8000000000000000;
    PathData::new(&local_168,local_278,&local_248,&local_2e0,*(undefined *)(param_3 + 0xeb),
                  *(undefined *)(param_3 + 0xf2),0);
                    /* try { // try from 0022c5d3 to 0022c652 has its CatchHandler @ 0022c93e */
    lVar8 = PathData::get_metadata(param_2,param_7);
    if (lVar8 == 0) {
      get_metadata_with_deref_opt(&local_248,local_148,local_140,local_40);
      if ((int)local_248 != 2) {
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                  (&local_248);
        goto LAB_0022c6b9;
      }
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
                (&local_248);
      std::fs::read_link(&local_248,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28))
      ;
      core::result::Result<T,E>::unwrap(&local_2e0,&local_248);
                    /* try { // try from 0022c65d to 0022c66a has its CatchHandler @ 0022c8d9 */
      std::sys::os_str::bytes::Slice::to_string_lossy(&local_248,local_2d8,local_2d0);
      uVar10 = core::slice::iter::Iter<T>::make_slice
                         (uStack_240,(code *)((long)local_238 + (long)uStack_240));
                    /* try { // try from 0022c683 to 0022c68f has its CatchHandler @ 0022c8c7 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_2f8,uVar10);
                    /* try { // try from 0022c690 to 0022c69c has its CatchHandler @ 0022c8d9 */
      core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&local_248);
                    /* try { // try from 0022c69d to 0022c6d3 has its CatchHandler @ 0022c93e */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_2e0);
    }
    else {
LAB_0022c6b9:
      uucore::features::quoting_style::escape_name
                (&local_248,CONCAT44(uStack_2ac,uStack_2b0),local_2a8,lVar1);
                    /* try { // try from 0022c706 to 0022c72c has its CatchHandler @ 0022c918 */
      colors::color_name(&local_2e0,uStack_240,local_238,param_2,param_8,param_7,&local_168,
                         (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) <
                         (undefined *)(param_9 + (long)local_2e8) &&
                         (undefined *)(ulong)*(ushort *)(param_3 + 0xe4) != (undefined *)0x0);
      uVar10 = core::slice::iter::Iter<T>::make_slice
                         (local_2d8,(code *)((long)local_2d0 + (long)local_2d8));
                    /* try { // try from 0022c73f to 0022c74b has its CatchHandler @ 0022c8e8 */
      ::alloc::vec::Vec<T,A>::append_elements(&local_2f8,uVar10);
                    /* try { // try from 0022c74c to 0022c755 has its CatchHandler @ 0022c918 */
      core::ptr::drop_in_place<alloc::string::String>(&local_2e0);
                    /* try { // try from 0022c756 to 0022c762 has its CatchHandler @ 0022c93e */
      core::ptr::drop_in_place<alloc::string::String>(&local_248);
    }
                    /* try { // try from 0022c763 to 0022c76f has its CatchHandler @ 0022c93c */
    core::ptr::drop_in_place<uu_ls::PathData>(&local_168);
  }
                    /* try { // try from 0022c770 to 0022c7c9 has its CatchHandler @ 0022c9f8 */
  core::ptr::drop_in_place<std::path::PathBuf>(&local_2b8);
LAB_0022c77a:
  if ((local_250 == 1) && (*(char *)(param_3 + 0xeb) != '\0')) {
    if (cVar2 == '\x04') {
      _<alloc::string::String_as_core::clone::Clone>::clone(&local_2e0,param_2 + 0x30);
    }
    else {
      pad_left(&local_2e0,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),local_260)
      ;
    }
    local_248 = &local_2e0;
    uStack_240 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_238 = (undefined8 **)&local_2f8;
    local_230 = _<alloc::string::String_as_core::fmt::Display>::fmt;
    local_168 = (undefined8 **)&DAT_003127e8;
    uStack_160 = (code *)0x2;
    local_148 = (undefined8 **)0x0;
    local_158 = (undefined8 **)&local_248;
    pcStack_150 = (code *)0x2;
                    /* try { // try from 0022c83e to 0022c852 has its CatchHandler @ 0022c996 */
    core::option::Option<T>::map_or_else(&local_180,&local_168);
                    /* try { // try from 0022c853 to 0022c85c has its CatchHandler @ 0022c977 */
    core::ptr::drop_in_place<alloc::string::String>(&local_2f8);
    local_2e8 = local_170;
    local_2f8._0_4_ = local_180;
    local_2f8._4_4_ = uStack_17c;
    uStack_2f0 = uStack_178;
    uStack_2ec = uStack_174;
                    /* try { // try from 0022c877 to 0022c880 has its CatchHandler @ 0022c9f8 */
    core::ptr::drop_in_place<alloc::string::String>(&local_2e0);
  }
  *(undefined8 ***)(local_258 + 4) = local_2e8;
  *local_258 = (undefined4)local_2f8;
  local_258[1] = local_2f8._4_4_;
  local_258[2] = uStack_2f0;
  local_258[3] = uStack_2ec;
  if (lVar3 == 0 || cVar2 == '\x01') {
    core::ptr::drop_in_place<alloc::string::String>(local_2c0);
  }
  return;
}