void __rustcall
uu_cp::symlink_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *local_1d0;
  code *local_1c8;
  undefined8 *local_1c0;
  code *local_1b8;
  undefined8 local_1b0;
  undefined local_1a8 [16];
  undefined local_198;
  undefined8 local_190;
  undefined local_188 [16];
  undefined local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined local_c0 [144];
  
  lVar1 = std::os::unix::fs::symlink(param_2,param_3,param_4,param_5);
                    /* try { // try from 0020571e to 0020580f has its CatchHandler @ 002058fa */
  local_1a8 = uucore::features::fs::get_filename(param_4,param_5);
  if (local_1a8._0_8_ == 0) {
    local_1a8._8_8_ = 0x11;
    local_1a8._0_8_ = "invalid file name";
  }
  local_1b0 = 0;
  local_198 = 1;
  local_188 = uucore::features::fs::get_filename(param_2,param_3);
  if (local_188._0_8_ == 0) {
    local_188._8_8_ = 0x11;
    local_188._0_8_ = "invalid file name";
  }
  local_190 = 0;
  local_178 = 1;
  local_1d0 = &local_1b0;
  local_1c8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_1c0 = &local_190;
  local_1b8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_158 = &PTR_s_cannot_create_symlink_and_are_th_002b5e88;
  uStack_150 = 2;
  local_138 = 0;
  local_148 = &local_1d0;
  local_140 = 2;
  core::option::Option<T>::map_or_else(&local_170,&local_158);
  local_148 = (undefined8 **)local_160;
  local_158 = (undefined **)CONCAT44(uStack_16c,local_170);
  uStack_150 = CONCAT44(uStack_164,uStack_168);
  if (lVar1 == 0) {
    core::ptr::
    drop_in_place<<core::result::Result<(),std::io::error::Error>as_quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::__closure__>
              (&local_158);
    uucore::features::fs::FileInformation::from_path(&local_158,param_4,param_5,0);
    if (local_158 == (undefined **)0x0) {
      (*(code *)PTR_memcpy_002bbe30)(local_c0,&uStack_150,0x90);
                    /* try { // try from 002058b5 to 002058c1 has its CatchHandler @ 002058e8 */
      hashbrown::map::HashMap<K,V,S,A>::insert(param_6,local_c0);
    }
    core::ptr::
    drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>
              (&local_158);
    *param_1 = 0xd;
  }
  else {
    param_1[2] = uStack_150;
    param_1[3] = local_160;
    *param_1 = 3;
    param_1[1] = local_158;
    param_1[4] = lVar1;
  }
  return;
}