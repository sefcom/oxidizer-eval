undefined  [16]
_ZN5uu_cp20disk_usage_directory17h3351dc16d0087e4cE(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined local_150 [8];
  char local_148;
  long local_140;
  long local_138;
  long local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  int local_110 [2];
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
  
  _ZN3std2fs8read_dir17h838a5ba9b74fdd2dE(&local_e0,param_1,param_2);
  lVar2 = CONCAT44(uStack_dc,local_e0);
  if (local_d8 == '\x02') {
    uVar1 = 1;
  }
  else {
    local_148 = local_d8;
    lVar2 = 0;
                    /* try { // try from 001a5810 to 001a581b has its CatchHandler @ 001a5978 */
    while ((*(code *)
             PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_00267c90
           )(local_110,local_150), local_110[0] == 1) {
      if (local_108 == 0) {
LAB_001a5923:
        lVar2 = local_100;
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h9522cfa7dfdafb0eE(local_150);
        uVar1 = 1;
        goto LAB_001a5943;
      }
      local_118 = local_e8;
      local_128 = local_f8;
      uStack_124 = uStack_f4;
      uStack_120 = uStack_f0;
      uStack_11c = uStack_ec;
      local_138 = local_108;
      local_130 = local_100;
                    /* try { // try from 001a5854 to 001a5890 has its CatchHandler @ 001a5969 */
      (*(code *)PTR__ZN3std2fs8DirEntry9file_type17h795bcf7de2117d2fE_00267c98)
                (&local_e0,&local_138);
      if (local_e0 == 1) {
LAB_001a5911:
        lVar3 = CONCAT71(uStack_d7,local_d8);
LAB_001a5919:
                    /* try { // try from 001a5919 to 001a5922 has its CatchHandler @ 001a5958 */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h4404dc5c4a55a110E(&local_138);
        local_100 = lVar3;
        goto LAB_001a5923;
      }
      if ((uStack_dc & 0xf000) == 0x4000) {
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_00267ca0)(&local_e0,&local_138);
        local_140 = lVar2;
                    /* try { // try from 001a58b2 to 001a58b6 has its CatchHandler @ 001a595a */
        auVar4 = _ZN5uu_cp20disk_usage_directory17h3351dc16d0087e4cE
                           (CONCAT71(uStack_d7,local_d8),local_d0);
        lVar3 = auVar4._8_8_;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h80f4faf291cc80afE(&local_e0);
        lVar2 = local_140;
        if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_001a5919;
      }
      else {
                    /* try { // try from 001a58e0 to 001a58ef has its CatchHandler @ 001a5969 */
        (*(code *)PTR__ZN3std2fs8DirEntry8metadata17h185bce2ef1f407a2E_00267ca8)
                  (&local_e0,&local_138);
        lVar3 = local_90;
        if (local_e0 == 2) goto LAB_001a5911;
      }
                    /* try { // try from 001a58ff to 001a5908 has its CatchHandler @ 001a5978 */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h4404dc5c4a55a110E(&local_138);
      lVar2 = lVar2 + lVar3;
    }
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h9522cfa7dfdafb0eE(local_150);
    uVar1 = 0;
  }
LAB_001a5943:
  auVar4._8_8_ = lVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}