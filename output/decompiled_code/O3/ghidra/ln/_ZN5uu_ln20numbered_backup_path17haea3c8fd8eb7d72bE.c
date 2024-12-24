void __rustcall
uu_ln::numbered_backup_path(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *local_110;
  code *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  
  local_138 = 1;
  local_130 = param_1;
  while( true ) {
    local_108 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
    local_e8 = &PTR_s_____0022d818;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d0 = 1;
    local_110 = (undefined *)&local_138;
    local_d8 = &local_110;
    core::option::Option<T>::map_or_else(&local_100,&local_e8);
    local_e8 = (undefined **)CONCAT44(uStack_fc,local_100);
    uStack_e0 = CONCAT44(uStack_f4,uStack_f8);
    local_d8 = (undefined **)local_f0;
                    /* try { // try from 001bacc4 to 001bacd1 has its CatchHandler @ 001bad46 */
    simple_backup_path(&local_128,param_2,param_3,uStack_e0);
                    /* try { // try from 001bacd2 to 001bad00 has its CatchHandler @ 001bad55 */
    core::ptr::drop_in_place<alloc::string::String>(&local_e8);
    std::fs::metadata(&local_e8,uStack_120,local_118);
    if (local_e8 == (undefined **)0x2) break;
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
              (local_e8,uStack_e0);
    local_138 = local_138 + 1;
    core::ptr::drop_in_place<std::path::PathBuf>(&local_128);
  }
                    /* try { // try from 001bad12 to 001bad1b has its CatchHandler @ 001bad44 */
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>
            (2,uStack_e0);
  local_130[2] = local_118;
  *local_130 = local_128;
  local_130[1] = uStack_120;
  return;
}