void __rustcall
uu_cp::symlink_file(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  code *local_1b0;
  undefined8 *local_1a8;
  code *local_1a0;
  undefined8 local_198;
  undefined local_190 [16];
  undefined local_180;
  undefined8 local_178;
  undefined local_170 [16];
  undefined local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined local_c0 [144];
  
  lVar1 = std::os::unix::fs::symlink(param_2,param_3,param_4,param_5);
                    /* try { // try from 00204da0 to 00204e95 has its CatchHandler @ 00204f70 */
  local_190 = uucore::features::fs::get_filename(param_4,param_5);
  if (local_190._0_8_ == 0) {
    local_190._8_8_ = 0x11;
    local_190._0_8_ = "invalid file name";
  }
  local_198 = 0;
  local_180 = 1;
  local_170 = uucore::features::fs::get_filename(param_2,param_3);
  if (local_170._0_8_ == 0) {
    local_170._8_8_ = 0x11;
    local_170._0_8_ = "invalid file name";
  }
  local_178 = 0;
  local_160 = 1;
  local_1b8 = &local_198;
  local_1b0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_1a8 = &local_178;
  local_1a0 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
  local_158 = &PTR_s_cannot_create_symlink_002b57b8;
  uStack_150 = 2;
  local_138 = 0;
  local_148 = &local_1b8;
  local_140 = 2;
  core::option::Option<T>::map_or_else(&local_1d0,&local_158);
  local_148 = (undefined8 **)local_1c0;
  local_158 = (undefined **)CONCAT44(uStack_1cc,local_1d0);
  if (lVar1 == 0) {
    core::ptr::
    drop_in_place<<core::result::Result<(),std::io::error::Error>as_quick_error::ResultExt<(),std::io::error::Error>>::context<alloc::string::String>::__closure__>
              (&local_158);
    uucore::features::fs::FileInformation::from_path(&local_158,param_4,param_5,0);
    if (local_158 == (undefined **)0x0) {
      (*(code *)PTR_memcpy_002bb710)(local_c0,&uStack_150,0x90);
                    /* try { // try from 00204f26 to 00204f32 has its CatchHandler @ 00204f5e */
      hashbrown::map::HashMap<K,V,S,A>::insert(param_6,local_c0);
    }
    core::ptr::
    drop_in_place<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error>>
              (&local_158);
    *param_1 = 0xd;
  }
  else {
    param_1[3] = local_1c0;
    param_1[1] = CONCAT44(uStack_1cc,local_1d0);
    param_1[2] = CONCAT44(uStack_1c4,uStack_1c8);
    *param_1 = 3;
    param_1[4] = lVar1;
  }
  return;
}