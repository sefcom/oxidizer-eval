undefined  [16]
_ZN5uu_cp20disk_usage_directory17h440b87226599f819E(undefined8 param_1,undefined8 param_2)

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
  
  _ZN3std2fs8read_dir17h8e79f9b54e02cd93E(&local_e0,param_1,param_2);
  lVar3 = CONCAT44(uStack_dc,local_e0);
  if (local_d8 == '\x02') {
LAB_00208be2:
    uVar1 = 1;
    lVar2 = lVar3;
  }
  else {
    local_140 = local_d8;
    lVar2 = 0;
                    /* try { // try from 00208ae0 to 00208aed has its CatchHandler @ 00208c0f */
    while (_ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h153c1e0177592fe2E
                     (&local_110,local_148), local_110 != 0) {
      lVar3 = local_100;
      if (local_108 == 0) {
LAB_00208bda:
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h9fae80e55e0d42e2E(local_148);
        goto LAB_00208be2;
      }
      local_118 = local_e8;
      local_128 = local_f8;
      uStack_124 = uStack_f4;
      uStack_120 = uStack_f0;
      uStack_11c = uStack_ec;
      local_138 = local_108;
      local_130 = local_100;
                    /* try { // try from 00208b27 to 00208b57 has its CatchHandler @ 00208c14 */
      _ZN3std2fs8DirEntry9file_type17hd81c8483f7ba6043E(&local_e0,&local_138);
      if (local_e0 != 0) {
LAB_00208bab:
        lVar3 = CONCAT71(uStack_d7,local_d8);
LAB_00208bd0:
                    /* try { // try from 00208bd0 to 00208bd9 has its CatchHandler @ 00208bfe */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hb26f2e4edf913520E(&local_138);
        goto LAB_00208bda;
      }
      if ((uStack_dc & 0xf000) == 0x4000) {
        _ZN3std2fs8DirEntry4path17h5b1bdb0f1090af27E(&local_e0,&local_138);
                    /* try { // try from 00208b62 to 00208b66 has its CatchHandler @ 00208c00 */
        auVar4 = _ZN5uu_cp20disk_usage_directory17h440b87226599f819E
                           (CONCAT71(uStack_d7,local_d8),local_d0);
        lVar3 = auVar4._8_8_;
        if (auVar4._0_8_ != 0) {
                    /* try { // try from 00208bc3 to 00208bcc has its CatchHandler @ 00208bfc */
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_e0);
          goto LAB_00208bd0;
        }
                    /* try { // try from 00208b6f to 00208b8b has its CatchHandler @ 00208c14 */
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17ha8df8090ff0f5f1eE(&local_e0);
      }
      else {
        _ZN3std2fs8DirEntry8metadata17h92d6a6465cae443dE(&local_e0,&local_138);
        lVar3 = local_90;
        if (local_e0 == 2) goto LAB_00208bab;
      }
                    /* try { // try from 00208b9b to 00208ba2 has its CatchHandler @ 00208c0f */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17hb26f2e4edf913520E(&local_138);
      lVar2 = lVar2 + lVar3;
    }
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h9fae80e55e0d42e2E(local_148);
    uVar1 = 0;
  }
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}