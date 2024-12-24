void __rustcall
uu_mktemp::make_temp_dir
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined8 *local_148;
  code *pcStack_140;
  undefined *local_138;
  code *local_130;
  undefined8 *puStack_128;
  code *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined local_100 [16];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98 [2];
  char local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_d8 = param_7;
  local_d0 = param_8;
  local_50 = 0;
  local_80[0] = 0;
  local_68 = param_7;
  local_60 = param_8;
  local_e8 = param_4;
  local_e0 = param_5;
  local_78 = param_4;
  local_70 = param_5;
  local_58 = param_6;
  tempfile::Builder::tempdir_in(local_98,local_80,param_2,param_3);
  if (local_88 == '\x02') {
    cVar1 = std::io::error::Error::kind(local_98[0]);
    if (cVar1 == '\0') {
                    /* try { // try from 001bf91f to 001bf93b has its CatchHandler @ 001bfaf2 */
      ::alloc::str::_<impl_str>::repeat(local_100,&DAT_0011f45f,1,param_6);
      local_148 = &local_e8;
      pcStack_140 = _<&T_as_core::fmt::Display>::fmt;
      local_130 = _<alloc::string::String_as_core::fmt::Display>::fmt;
      puStack_128 = &local_d8;
      local_120 = _<&T_as_core::fmt::Display>::fmt;
      local_c8 = (undefined8 *)&DAT_0011f460;
      uStack_c0 = 3;
      local_a8 = 0;
      local_b0 = 3;
                    /* try { // try from 001bf9af to 001bf9c0 has its CatchHandler @ 001bfae3 */
      local_138 = local_100;
      local_b8 = (undefined *)&local_148;
      core::option::Option<T>::map_or_else(&local_118,&local_c8);
                    /* try { // try from 001bf9c1 to 001bf9ca has its CatchHandler @ 001bfad4 */
      core::ptr::drop_in_place<alloc::string::String>(local_100);
      local_48 = local_118;
      uStack_44 = uStack_114;
      uStack_40 = uStack_110;
      uStack_3c = uStack_10c;
                    /* try { // try from 001bf9e5 to 001bf9fc has its CatchHandler @ 001bfaf2 */
      std::path::Path::join(&local_118,param_2,param_3,&local_48);
                    /* try { // try from 001bfa06 to 001bfa12 has its CatchHandler @ 001bfac5 */
      _<T_as_alloc::string::ToString>::to_string(local_100,&local_148);
                    /* try { // try from 001bfa13 to 001bfa2b has its CatchHandler @ 001bfab6 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_c8,&DAT_0011f03e,9);
      local_138 = local_b8;
      local_148 = local_c8;
      pcStack_140 = (code *)uStack_c0;
      local_120 = (code *)local_f0;
                    /* try { // try from 001bfa59 to 001bfa60 has its CatchHandler @ 001bfab4 */
      uVar3 = ::alloc::boxed::Box<T>::new(&local_148);
      param_1[1] = uVar3;
      param_1[2] = &PTR_drop_in_place<uu_mktemp_MkTempError>_00236330;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001bfa7d to 001bfa86 has its CatchHandler @ 001bfaf2 */
      core::ptr::drop_in_place<std::path::PathBuf>(&local_118);
      core::ptr::drop_in_place<std::io::error::Error>(local_98[0]);
    }
    else {
      auVar4 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(local_98[0]);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
    }
  }
  else {
    tempfile::dir::TempDir::into_path(&local_148,local_98);
                    /* try { // try from 001bf8de to 001bf8fc has its CatchHandler @ 001bfaff */
    lVar2 = std::fs::set_permissions(&local_148,0x1c0);
    if (lVar2 == 0) {
      param_1[2] = local_138;
      *param_1 = local_148;
      param_1[1] = pcStack_140;
    }
    else {
      auVar4 = uucore::mods::error::
               _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
               ::from(lVar2);
      *(undefined (*) [16])(param_1 + 1) = auVar4;
      *param_1 = 0x8000000000000000;
      core::ptr::drop_in_place<std::path::PathBuf>(&local_148);
    }
  }
  return;
}