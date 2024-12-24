void __rustcall
uu_mktemp::make_temp_file
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 *local_178;
  code *pcStack_170;
  undefined8 **local_168;
  code *local_160;
  undefined8 *puStack_158;
  code *local_150;
  undefined8 *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_e0 = param_7;
  local_d8 = param_8;
  local_80 = 0;
  local_b0[0] = 0;
  local_98 = param_7;
  local_90 = param_8;
  local_f0 = param_4;
  local_e8 = param_5;
  local_a8 = param_4;
  local_a0 = param_5;
  local_88 = param_6;
  tempfile::Builder::tempfile_in(&local_d0,local_b0,param_2,param_3);
  if ((char)local_c0 == '\x02') {
    uVar2 = CONCAT44(uStack_cc,local_d0);
    cVar1 = std::io::error::Error::kind(uVar2);
    if (cVar1 == '\0') {
                    /* try { // try from 001bfcdb to 001bfcfa has its CatchHandler @ 001bfec0 */
      ::alloc::str::_<impl_str>::repeat(&local_118,&DAT_0011f45f,1,param_6);
      local_178 = &local_f0;
      pcStack_170 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      puStack_158 = &local_e0;
      local_150 = _<&T_as_core::fmt::Display>::fmt;
      local_148 = (undefined8 *)&DAT_0011f460;
      uStack_140 = 3;
      uStack_128 = 0;
      local_138 = &local_178;
      uStack_130 = 3;
                    /* try { // try from 001bfd68 to 001bfd76 has its CatchHandler @ 001bfeae */
      local_168 = (undefined8 **)&local_118;
      core::option::Option<T>::map_or_else(&local_190,&local_148);
                    /* try { // try from 001bfd77 to 001bfd83 has its CatchHandler @ 001bfe9f */
      core::ptr::drop_in_place<alloc::string::String>(&local_118);
      local_78 = local_190;
      uStack_74 = uStack_18c;
      uStack_70 = uStack_188;
      uStack_6c = uStack_184;
                    /* try { // try from 001bfd9e to 001bfdb5 has its CatchHandler @ 001bfec0 */
      std::path::Path::join(&local_190,param_2,param_3,&local_78);
                    /* try { // try from 001bfdc0 to 001bfdd1 has its CatchHandler @ 001bfe90 */
      _<T_as_alloc::string::ToString>::to_string(&local_118,&local_178);
                    /* try { // try from 001bfdd2 to 001bfde7 has its CatchHandler @ 001bfe7e */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_148,"file",4);
      local_168 = local_138;
      local_178 = local_148;
      pcStack_170 = (code *)uStack_140;
                    /* try { // try from 001bfe16 to 001bfe1f has its CatchHandler @ 001bfe7c */
      uVar3 = ::alloc::boxed::Box<T>::new(&local_178);
      param_1[1] = uVar3;
      param_1[2] = &PTR_drop_in_place<uu_mktemp_MkTempError>_00236330;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001bfe3c to 001bfe45 has its CatchHandler @ 001bfec0 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_190);
      core::ptr::drop_in_place<std::io::error::Error>(uVar2);
    }
    else {
      auVar4 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(uVar2);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    local_48 = local_c0;
    uStack_44 = uStack_bc;
    uStack_40 = uStack_b8;
    uStack_3c = uStack_b4;
    local_58 = local_d0;
    uStack_54 = uStack_cc;
    uStack_50 = uStack_c8;
    uStack_4c = uStack_c4;
    tempfile::file::NamedTempFile<F>::keep(&local_148,&local_58);
    if (local_148 == (undefined8 *)0x0) {
      param_1[2] = uStack_128;
      *(undefined4 *)param_1 = (undefined4)local_138;
      *(undefined4 *)((long)param_1 + 4) = local_138._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_130;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_130._4_4_;
      core::ptr::drop_in_place<std::fs::File>(uStack_140 & 0xffffffff);
    }
    else {
      local_f8 = local_120;
      local_108 = (undefined4)uStack_130;
      uStack_104 = uStack_130._4_4_;
      uStack_100 = (undefined4)uStack_128;
      uStack_fc = uStack_128._4_4_;
      local_118 = (undefined4)uStack_140;
      uStack_114 = uStack_140._4_4_;
      uStack_110 = (undefined4)local_138;
      uStack_10c = local_138._4_4_;
                    /* try { // try from 001bfc7f to 001bfcb6 has its CatchHandler @ 001bfecd */
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_190,local_138,uStack_130);
      local_160 = (code *)0x8000000000000000;
      uVar2 = ::alloc::boxed::Box<T>::new(&local_178);
      param_1[1] = uVar2;
      param_1[2] = &PTR_drop_in_place<uu_mktemp_MkTempError>_00236330;
      *param_1 = 0x8000000000000000;
      core::ptr::drop_in_place<tempfile::file::PersistError>(&local_118);
    }
  }
  return;
}