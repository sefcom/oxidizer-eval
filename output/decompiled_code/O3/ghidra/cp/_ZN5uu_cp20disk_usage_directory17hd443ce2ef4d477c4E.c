undefined  [16] __rustcall uu_cp::disk_usage_directory(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined local_148 [8];
  char local_140;
  long local_138;
  long local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int local_e0;
  uint uStack_dc;
  char local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  long local_90;
  
  std::fs::read_dir(&local_e0,param_1,param_2);
  lVar3 = CONCAT44(uStack_dc,local_e0);
  if (local_d8 == '\x02') {
LAB_00208282:
    uVar1 = 1;
    lVar2 = lVar3;
  }
  else {
    local_140 = local_d8;
    lVar2 = 0;
                    /* try { // try from 00208180 to 0020818d has its CatchHandler @ 002082af */
    while (_<std::fs::ReadDir_as_core::iter::traits::iterator::Iterator>::next(&local_110,local_148)
          , local_110 != 0) {
      lVar3 = local_100;
      if (local_108 == 0) {
LAB_0020827a:
        core::ptr::drop_in_place<std::fs::ReadDir>(local_148);
        goto LAB_00208282;
      }
      local_118 = local_e8;
      local_128 = local_f8;
      uStack_124 = uStack_f4;
      uStack_120 = uStack_f0;
      uStack_11c = uStack_ec;
      local_138 = local_108;
      local_130 = local_100;
                    /* try { // try from 002081c7 to 002081f7 has its CatchHandler @ 002082b4 */
      std::fs::DirEntry::file_type(&local_e0,&local_138);
      if (local_e0 != 0) {
LAB_0020824b:
        lVar3 = CONCAT71(uStack_d7,local_d8);
LAB_00208270:
                    /* try { // try from 00208270 to 00208279 has its CatchHandler @ 0020829e */
        core::ptr::drop_in_place<std::fs::DirEntry>(&local_138);
        goto LAB_0020827a;
      }
      if ((uStack_dc & 0xf000) == 0x4000) {
        std::fs::DirEntry::path(&local_e0,&local_138);
                    /* try { // try from 00208202 to 00208206 has its CatchHandler @ 002082a0 */
        auVar4 = disk_usage_directory(CONCAT71(uStack_d7,local_d8),local_d0);
        lVar3 = auVar4._8_8_;
        if (auVar4._0_8_ != 0) {
                    /* try { // try from 00208263 to 0020826c has its CatchHandler @ 0020829c */
          core::ptr::drop_in_place<std::path::PathBuf>(&local_e0);
          goto LAB_00208270;
        }
                    /* try { // try from 0020820f to 0020822b has its CatchHandler @ 002082b4 */
        core::ptr::drop_in_place<std::path::PathBuf>(&local_e0);
      }
      else {
        std::fs::DirEntry::metadata(&local_e0,&local_138);
        lVar3 = local_90;
        if (local_e0 == 2) goto LAB_0020824b;
      }
                    /* try { // try from 0020823b to 00208242 has its CatchHandler @ 002082af */
      core::ptr::drop_in_place<std::fs::DirEntry>(&local_138);
      lVar2 = lVar2 + lVar3;
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(local_148);
    uVar1 = 0;
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}