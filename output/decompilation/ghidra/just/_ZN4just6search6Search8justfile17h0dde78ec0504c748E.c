void _ZN4just6search6Search8justfile17h0dde78ec0504c748E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  long local_140;
  undefined local_138 [8];
  char local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined local_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined local_48 [24];
  
  local_140 = param_2;
  local_c8 = param_3;
  do {
    auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_4,param_5);
    local_c0 = auVar5._8_8_;
    local_b8 = auVar5._0_8_;
    local_158 = 0;
    local_148 = 0;
                    /* try { // try from 00388f5b to 00388f6c has its CatchHandler @ 003892e3 */
    _ZN3std2fs8read_dir17h1eb2d460fa0fb3e7E(&local_88,param_4,param_5);
    if ((char)local_80 == '\x02') {
                    /* try { // try from 003891c4 to 003891d7 has its CatchHandler @ 003892e1 */
      _ZN4just6search6Search12project_root28__u7b__u7b_closure_u7d__u7d_17h6f630030a6b37751E
                (&local_110,param_4,param_5);
      *(ulong *)((long)param_1 + 0x11) =
           CONCAT17((undefined)uStack_f8,CONCAT43(uStack_fc,uStack_100._1_3_));
      param_1[3] = CONCAT44(uStack_f4,uStack_f8);
      *(int *)param_1 = (int)local_110;
      *(undefined4 *)((long)param_1 + 4) = local_110._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_108;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_108._4_4_;
      *(undefined *)(param_1 + 2) = (undefined)uStack_100;
LAB_003891a8:
      _ZN4core3ptr87drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_std__path__PathBuf_GT__GT_17h1d51d97bda338c51E
                (&local_158);
      return;
    }
    local_130 = (char)local_80;
    while( true ) {
                    /* try { // try from 00388f90 to 00388f9d has its CatchHandler @ 00389301 */
      (*(code *)
        PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_00566aa8
      )(&local_88,local_138);
      if (local_88 != 1) break;
      if (CONCAT44(uStack_7c,local_80) == 0) {
                    /* try { // try from 0038915e to 00389171 has its CatchHandler @ 003892df */
        _ZN4just6search6Search12project_root28__u7b__u7b_closure_u7d__u7d_17h6f630030a6b37751E
                  (&local_110,param_4,param_5);
        local_118 = CONCAT44(uStack_f4,uStack_f8);
        local_128 = (undefined4)uStack_108;
        uStack_124 = uStack_108._4_4_;
        uStack_120 = uStack_100;
        uStack_11c = uStack_fc;
        param_1[3] = local_118;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_108;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_108._4_4_;
        *(undefined4 *)(param_1 + 2) = uStack_100;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
        *param_1 = local_110;
                    /* try { // try from 0038919e to 003891a7 has its CatchHandler @ 003892e1 */
        _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(local_138);
        goto LAB_003891a8;
      }
      local_90 = local_60;
      local_a0 = local_70;
      uStack_9c = uStack_6c;
      uStack_98 = uStack_68;
      uStack_94 = uStack_64;
                    /* try { // try from 00388fe8 to 00388ff5 has its CatchHandler @ 003892e8 */
      (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_00566ab0)(&local_128,local_b0)
      ;
                    /* try { // try from 00389000 to 00389008 has its CatchHandler @ 003892ff */
      (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
                (&local_110,CONCAT44(uStack_11c,uStack_120),local_118);
      uVar4 = uStack_108;
      if ((int)local_110 != 1) {
        uVar1 = CONCAT44(uStack_fc,uStack_100);
        local_110 = 0;
        uStack_108 = 2;
        local_f0 = PTR_DAT_0052e5c0;
        uStack_e8 = _UNK_0052e5c8;
        uStack_100 = PTR_DAT_0052e5b0._0_4_;
        uStack_fc = PTR_DAT_0052e5b0._4_4_;
        uStack_f8 = _UNK_0052e5b8;
        uStack_f4 = _UNK_0052e5bc;
        auVar5 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17he3a8d094ac8fb9abE
                           (&local_110);
        lVar3 = auVar5._0_8_;
        while (lVar3 != 0) {
          cVar2 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he629bb1728d24824E
                            (uVar4,uVar1,auVar5._0_8_,auVar5._8_8_);
          if (cVar2 != '\0') {
                    /* try { // try from 00389082 to 0038909a has its CatchHandler @ 00389306 */
            (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_00566c90)(local_48,local_b0);
            _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h4e2cb9f131b2fb60E
                      (&local_158,local_48);
          }
          auVar5 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17he3a8d094ac8fb9abE
                             (&local_110);
          lVar3 = auVar5._0_8_;
        }
      }
                    /* try { // try from 003890b3 to 003890ba has its CatchHandler @ 003892fa */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h578cf5996977c0eaE(local_b0);
      _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE(&local_128);
    }
                    /* try { // try from 003890d0 to 00389123 has its CatchHandler @ 003892e3 */
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(local_138);
    if (local_148 != 0) {
      if (local_148 == 1) {
        _ZN119__LT_alloc__collections__btree__map__BTreeMap_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0436ce891d6bcb07E
                  (&local_110,&local_158);
                    /* try { // try from 0038921c to 0038922b has its CatchHandler @ 003892d0 */
        _ZN116__LT_alloc__collections__btree__map__IntoIter_LT_K_C_V_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf7c3db92e6462bc5E
                  (&local_88,&local_110);
        *(undefined4 *)(param_1 + 2) = local_80;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_7c;
        *(undefined4 *)(param_1 + 3) = uStack_78;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_74;
        param_1[1] = CONCAT44(uStack_84,local_88);
        *param_1 = 0x8000000000000006;
        _ZN4core3ptr87drop_in_place_LT_alloc__collections__btree__set__IntoIter_LT_std__path__PathBuf_GT__GT_17h22984423921e359dE
                  (&local_110);
        return;
      }
      param_1[3] = local_148;
      param_1[1] = local_158;
      param_1[2] = uStack_150;
      uVar4 = 0x8000000000000004;
      goto LAB_003892b9;
    }
    if (local_140 != 0) {
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)
                (&local_88,param_4,param_5);
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)
                (&local_110,local_140,local_c8);
      cVar2 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                        (&local_88,&local_110);
      if (cVar2 != '\0') {
        _ZN4core3ptr87drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_std__path__PathBuf_GT__GT_17h1d51d97bda338c51E
                  (&local_158);
        break;
      }
    }
    _ZN4core3ptr87drop_in_place_LT_alloc__collections__btree__set__BTreeSet_LT_std__path__PathBuf_GT__GT_17h1d51d97bda338c51E
              (&local_158);
    param_4 = local_b8;
    param_5 = local_c0;
  } while (local_b8 != 0);
  uVar4 = 0x8000000000000005;
LAB_003892b9:
  *param_1 = uVar4;
  return;
}