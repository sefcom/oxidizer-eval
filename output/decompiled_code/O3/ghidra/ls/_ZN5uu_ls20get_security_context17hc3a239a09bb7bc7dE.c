void __rustcall
uu_ls::get_security_context(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 *local_170;
  code *local_168;
  undefined2 *local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 **local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_120 [16];
  undefined2 local_110 [4];
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_d8 [2];
  undefined8 *local_d0;
  
  _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_188,&DAT_0013633a,1);
  if (param_4 != 0) {
                    /* try { // try from 0022ce26 to 0022ce3d has its CatchHandler @ 0022cf5e */
    get_metadata_with_deref_opt(local_d8,param_2,param_3,1);
    if (local_d8[0] == 2) {
      local_170 = local_d0;
                    /* try { // try from 0022ce59 to 0022ce69 has its CatchHandler @ 0022cf40 */
      std::sys::pal::unix::os::split_paths::bytes_to_path(&local_150,param_2,param_3);
      local_108 = local_d0;
      local_100 = (undefined4)local_150;
      uStack_fc = local_150._4_4_;
      uStack_f8 = (undefined4)uStack_148;
      uStack_f4 = uStack_148._4_4_;
      local_f0 = local_140;
      local_110[0] = 2;
                    /* try { // try from 0022ce93 to 0022cf15 has its CatchHandler @ 0022cf4f */
      uucore::mods::error::set_exit_code(1);
      local_120 = uucore::util_name();
      local_170 = (undefined8 *)local_120;
      local_168 = _<&T_as_core::fmt::Display>::fmt;
      local_160 = local_110;
      local_158 = _<uu_ls::LsError_as_core::fmt::Display>::fmt;
      local_150 = &DAT_00312798;
      uStack_148 = 3;
      local_130 = 0;
      local_140 = &local_170;
      local_138 = 2;
      std::io::stdio::_eprint(&local_150);
                    /* try { // try from 0022cf16 to 0022cf1f has its CatchHandler @ 0022cf5e */
      core::ptr::drop_in_place<uu_ls::LsError>(local_110);
    }
  }
  param_1[2] = local_178;
  *param_1 = local_188;
  param_1[1] = uStack_180;
  return;
}