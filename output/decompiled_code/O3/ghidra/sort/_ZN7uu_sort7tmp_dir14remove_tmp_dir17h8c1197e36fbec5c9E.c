void __rustcall uu_sort::tmp_dir::remove_tmp_dir(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_130;
  char local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  undefined8 local_88;
  undefined8 local_58;
  char local_50;
  undefined local_48 [24];
  
  std::fs::read_dir(&local_130,param_1,param_2);
  if (local_128 != '\x02') {
    local_b8[0] = 0;
    local_88 = 0;
    local_58 = local_130;
    local_50 = local_128;
    local_120 = param_1;
    local_118 = param_2;
    while( true ) {
                    /* try { // try from 00243730 to 0024373a has its CatchHandler @ 002437d3 */
      _<core::iter::adapters::flatten::FlattenCompat<I,U>as_core::iter::traits::iterator::Iterator>
      ::next(&local_e0,local_b8);
      if (CONCAT44(uStack_dc,local_e0) == 0) break;
      local_e8 = local_c0;
      local_f8 = local_d0;
      uStack_f4 = uStack_cc;
      uStack_f0 = uStack_c8;
      uStack_ec = uStack_c4;
      local_108 = local_e0;
      uStack_104 = uStack_dc;
      uStack_100 = uStack_d8;
      uStack_fc = uStack_d4;
                    /* try { // try from 00243761 to 0024377e has its CatchHandler @ 002437d8 */
      std::fs::DirEntry::path(local_48,&local_108);
      local_110 = std::fs::remove_file(local_48);
      core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&local_110);
                    /* try { // try from 0024377f to 00243786 has its CatchHandler @ 002437d3 */
      core::ptr::drop_in_place<std::fs::DirEntry>(&local_108);
    }
                    /* try { // try from 00243789 to 00243795 has its CatchHandler @ 002437ce */
    core::ptr::drop_in_place<core::iter::adapters::flatten::Flatten<std::fs::ReadDir>>(local_b8);
    param_2 = local_118;
    param_1 = local_120;
    if (local_128 != '\x02') goto LAB_002437b1;
  }
  core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&local_130)
  ;
LAB_002437b1:
  std::fs::remove_dir(param_1,param_2);
  return;
}