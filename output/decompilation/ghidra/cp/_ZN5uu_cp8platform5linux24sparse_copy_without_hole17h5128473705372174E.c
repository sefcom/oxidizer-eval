ulong _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h5128473705372174E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  int local_13c;
  int local_138;
  int local_134;
  long local_130;
  undefined8 local_128;
  undefined local_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  int local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulong uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulong uStack_d0;
  ulong local_98;
  
  _ZN3std2fs4File4open17h2ade805364297b3fE(&local_e8,param_1,param_2);
  if (local_e8 == 0) {
    local_13c = iStack_e4;
                    /* try { // try from 00212fe0 to 00212fef has its CatchHandler @ 00213265 */
    _ZN3std2fs4File6create17h63900868be62ed17E(&local_e8,param_3,param_4);
    iVar9 = iStack_e4;
    if (local_e8 == 0) {
      local_138 = iStack_e4;
                    /* try { // try from 00213009 to 00213075 has its CatchHandler @ 00213260 */
      _ZN3std2fs4File8metadata17he899a18112e6f19eE(&local_e8,&local_13c);
      if (local_e8 == 2) {
        uVar8 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h73f8e5c4ab47dad3E
                  (local_98 >> 0x3f,&PTR_s_src_uu_cp_src_platform_linux_rs_002b64a0);
        iVar3 = (*(code *)PTR_ftruncate_002bc0c0)(iVar9,local_98);
        iVar2 = local_13c;
        if (iVar3 < 0) {
                    /* try { // try from 002131e4 to 00213200 has its CatchHandler @ 00213260 */
          uVar4 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
          uVar8 = (ulong)uVar4 << 0x20 | 2;
        }
        else {
          local_128 = _ZN4core3cmp6min_by17h2985dd7176bedd6fE(local_98);
          _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h3824b372c4eb90c7E
                    (local_120,local_128);
          local_130 = 0;
          local_134 = iVar2;
          while( true ) {
                    /* try { // try from 0021309b to 002130a1 has its CatchHandler @ 0021325e */
            iVar9 = local_134;
            puVar1 = PTR_lseek_002bc0b8;
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h73f8e5c4ab47dad3E
                      (0,&PTR_s_src_uu_cp_src_platform_linux_rs_002b64b8);
            lVar5 = (*(code *)puVar1)(iVar9,local_130,3);
                    /* try { // try from 002130b4 to 002130bd has its CatchHandler @ 0021325e */
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h73f8e5c4ab47dad3E
                      (0,&PTR_s_src_uu_cp_src_platform_linux_rs_002b64d0);
            lVar6 = (*(code *)puVar1)(iVar9,lVar5,4);
            if ((lVar5 == -1) || (lVar6 == -1)) {
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha0066fb3d75053fdE
                        (local_120);
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_138);
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_13c);
              return 0;
            }
            if ((lVar5 < -1) || (lVar6 < -1)) break;
            local_130 = lVar6;
                    /* try { // try from 002130fe to 0021310d has its CatchHandler @ 0021325e */
            _ZN4core4iter8adapters7step_by15StepBy_LT_I_GT_3new17h5a3e6c67f4c7aba8E
                      (&local_108,lVar6 - lVar5,local_128);
            local_d8 = local_f8;
            uStack_d0 = uStack_f0;
            local_e8 = local_108;
            iStack_e4 = iStack_104;
            uStack_e0 = uStack_100;
            uStack_dc = uStack_fc;
            while( true ) {
              uVar7 = local_d8;
              if ((char)uStack_d0 != '\0') {
                uVar7 = 0;
              }
              uStack_d0 = uStack_d0 & 0xffffffffffffff00;
              auVar11 = _ZN89__LT_core__ops__range__Range_LT_T_GT__u20_as_u20_core__iter__range__RangeIteratorImpl_GT_8spec_nth17h852b0ec0598f7b05E
                                  (&local_e8,uVar7);
              if (auVar11._0_8_ == 0) break;
              uVar7 = _ZN4core3cmp6min_by17h92b17324b21437caE
                                ((lVar6 - lVar5) - auVar11._8_8_,local_128);
                    /* try { // try from 00213173 to 002131b2 has its CatchHandler @ 0021326a */
              auVar12 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h1f50fb9d1aa19a8fE
                                  (uVar7,local_118,local_110);
              lVar10 = auVar11._8_8_ + lVar5;
              uVar8 = _ZN3std2os4unix2fs7FileExt13read_exact_at17h6298917a1f7d0b8cE
                                (&local_13c,auVar12._0_8_,auVar12._8_8_,lVar10);
              if ((uVar8 != 0) ||
                 (uVar8 = _ZN3std2os4unix2fs7FileExt12write_all_at17h20b571d70eaa1579E
                                    (&local_138,auVar12._0_8_,auVar12._8_8_,lVar10), uVar8 != 0))
              goto LAB_00213229;
            }
          }
                    /* try { // try from 00213218 to 0021321d has its CatchHandler @ 0021325c */
          uVar4 = _ZN3std3sys3pal4unix2os5errno17hddfd8da9c36b1a59E();
          uVar8 = (ulong)uVar4 << 0x20 | 2;
LAB_00213229:
                    /* try { // try from 00213229 to 00213232 has its CatchHandler @ 00213260 */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17ha0066fb3d75053fdE
                    (local_120);
          iVar9 = local_138;
        }
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(iVar9);
    }
    else {
      uVar8 = CONCAT44(uStack_dc,uStack_e0);
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h4b422317f52b3bf0E(local_13c);
  }
  else {
    uVar8 = CONCAT44(uStack_dc,uStack_e0);
  }
  return uVar8;
}