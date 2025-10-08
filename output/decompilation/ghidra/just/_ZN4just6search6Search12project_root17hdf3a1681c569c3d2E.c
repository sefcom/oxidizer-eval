void _ZN4just6search6Search12project_root17hdf3a1681c569c3d2E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_160;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  char local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined local_d8;
  undefined7 uStack_d7;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  long local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  
  auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_4,param_5);
  _ZN3std2fs8read_dir17h1eb2d460fa0fb3e7E(&local_a8,param_4,param_5);
  puVar2 = PTR__ZN3std2fs8DirEntry9file_name17h6946eae0b92783e6E_00566ab0;
  lVar4 = param_4;
  if ((char)local_a0 != '\x02') {
    local_108 = param_5;
    local_100 = param_3;
    local_f8 = param_2;
    do {
      local_f0 = auVar5._8_8_;
      local_160 = auVar5._0_8_;
      local_130 = local_160;
      local_118 = local_a8;
      local_128 = lVar4;
      local_120 = param_5;
      local_110 = (char)local_a0;
                    /* try { // try from 003895d0 to 003895e2 has its CatchHandler @ 003898bf */
      while ((*(code *)
               PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1934f30e4eea5c14E_00566aa8
             )(&local_e8,&local_118), local_e8 == 1) {
        local_a0 = CONCAT71(uStack_d7,local_d8);
        if (lStack_e0 == 0) {
                    /* try { // try from 00389850 to 00389863 has its CatchHandler @ 003898bd */
          _ZN4just6search6Search12project_root28__u7b__u7b_closure_u7d__u7d_17h6f630030a6b37751E
                    (&local_150,local_128,local_120);
          param_1[3] = local_138;
          *(undefined4 *)(param_1 + 1) = uStack_148;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_144;
          *(undefined4 *)(param_1 + 2) = local_140;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_13c;
          *param_1 = CONCAT44(uStack_14c,local_150);
          goto LAB_00389834;
        }
        local_88 = local_c0;
        local_98 = uStack_d0;
        uStack_94 = uStack_cc;
        uStack_90 = uStack_c8;
        uStack_8c = uStack_c4;
        local_a8 = lStack_e0;
                    /* try { // try from 00389631 to 00389704 has its CatchHandler @ 003898c4 */
        (*(code *)puVar2)(&local_150,&local_a8);
        cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h642c0cf731eb11c2E
                          (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_13c,local_140),
                           ".bzrfishl",4);
        if (cVar3 != '\0') {
LAB_003897e4:
          _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                    (&local_150);
                    /* try { // try from 003897ee to 00389802 has its CatchHandler @ 003898bb */
          (*(code *)
            PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566a18)
                    (&local_150,local_128,local_120);
          param_1[3] = CONCAT44(uStack_13c,local_140);
          *(undefined4 *)(param_1 + 1) = local_150;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_14c;
          *(undefined4 *)(param_1 + 2) = uStack_148;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_144;
          *param_1 = 0x8000000000000006;
                    /* try { // try from 00389827 to 00389833 has its CatchHandler @ 003898bd */
          _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h578cf5996977c0eaE(&local_a8);
LAB_00389834:
          _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(&local_118);
          return;
        }
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_150);
        (*(code *)puVar2)(&local_150,&local_a8);
        cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h642c0cf731eb11c2E
                          (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_13c,local_140),".git",4);
        if (cVar3 != '\0') goto LAB_003897e4;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_150);
        (*(code *)puVar2)(&local_150,&local_a8);
        cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h642c0cf731eb11c2E
                          (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_13c,local_140),
                           &DAT_00171760,3);
        if (cVar3 != '\0') goto LAB_003897e4;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_150);
        (*(code *)puVar2)(&local_150,&local_a8);
        cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h642c0cf731eb11c2E
                          (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_13c,local_140),".svnmode"
                           ,4);
        if (cVar3 != '\0') goto LAB_003897e4;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_150);
        (*(code *)puVar2)(&local_150,&local_a8);
        cVar3 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h642c0cf731eb11c2E
                          (CONCAT44(uStack_144,uStack_148),CONCAT44(uStack_13c,local_140),
                           &DAT_00171763,6);
        if (cVar3 != '\0') goto LAB_003897e4;
        _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17hb5088e4c98ca9abdE
                  (&local_150);
                    /* try { // try from 00389730 to 00389737 has its CatchHandler @ 003898bf */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h578cf5996977c0eaE(&local_a8);
      }
      _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17h1e42de9666d40c86E(&local_118);
      lVar4 = local_f8;
      puVar1 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660;
      if (local_f8 != 0) {
        (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_00566660)
                  (&local_a8,local_128,local_120);
        (*(code *)puVar1)(&local_e8,lVar4,local_100);
        cVar3 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                          (&local_a8,&local_e8);
        if (cVar3 != '\0') goto LAB_00389895;
      }
      param_5 = local_f0;
      if (local_160 == 0) {
LAB_00389895:
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00566a18)
                  (param_1 + 1,param_4,local_108);
        *param_1 = 0x8000000000000006;
        return;
      }
      auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                         (local_130,local_f0);
      _ZN3std2fs8read_dir17h1eb2d460fa0fb3e7E(&local_a8,local_130,param_5);
      lVar4 = local_130;
    } while ((char)local_a0 != '\x02');
  }
  _ZN4just6search6Search12project_root28__u7b__u7b_closure_u7d__u7d_17h6f630030a6b37751E
            (&local_e8,lVar4,param_5,local_a8);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17((undefined)uStack_d0,uStack_d7);
  param_1[3] = CONCAT44(uStack_cc,uStack_d0);
  *param_1 = CONCAT44(uStack_e4,local_e8);
  param_1[1] = lStack_e0;
  *(undefined *)(param_1 + 2) = local_d8;
  return;
}