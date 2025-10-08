ulong _ZN5uu_cp8platform5linux24sparse_copy_without_hole17h2d9392879b3e0cb0E
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  int local_13c;
  int local_138;
  int local_134;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  ulong uStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulong uStack_d0;
  ulong local_98;
  
  _ZN3std2fs4File4open17h87ebb42518eeb9ffE(&local_e8,param_1,param_2);
  if (local_e8 == 1) {
    uVar7 = CONCAT44(uStack_dc,uStack_e0);
  }
  else {
    local_13c = iStack_e4;
                    /* try { // try from 0019b2f0 to 0019b2ff has its CatchHandler @ 0019b57c */
    _ZN3std2fs4File6create17h515d4c5b46fc5d80E(&local_e8,param_3,param_4);
    iVar9 = iStack_e4;
    if ((local_e8 & 1) == 0) {
      local_138 = iStack_e4;
                    /* try { // try from 0019b319 to 0019b38c has its CatchHandler @ 0019b577 */
      (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_e8,&local_13c);
      if (local_e8 == 2) {
        uVar7 = CONCAT44(uStack_dc,uStack_e0);
      }
      else {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9e6c4a291aa92713E
                  (local_98 >> 0x3f,&PTR_DAT_0025e798);
        iVar3 = (*(code *)PTR_ftruncate_00267b30)(iVar9,local_98);
        iVar2 = local_13c;
        if (iVar3 < 0) {
          puVar8 = (uint *)(*(code *)PTR___errno_location_002679c8)();
          uVar7 = (ulong)*puVar8 << 0x20 | 2;
        }
        else {
          local_128 = _ZN4core3cmp3Ord3min17hb27fc151278b8567E(local_98);
          _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h451713e6c2a4190aE
                    (&local_120,local_128,&PTR_DAT_0025e7b0);
          local_130 = 0;
          local_134 = iVar2;
          while( true ) {
                    /* try { // try from 0019b3b4 to 0019b3ba has its CatchHandler @ 0019b575 */
            iVar9 = local_134;
            puVar1 = PTR_lseek_00267b20;
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9e6c4a291aa92713E(0,&PTR_DAT_0025e7c8);
            lVar4 = (*(code *)puVar1)(iVar9,local_130,3);
                    /* try { // try from 0019b3cd to 0019b3d6 has its CatchHandler @ 0019b575 */
            _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9e6c4a291aa92713E(0,&PTR_DAT_0025e7e0);
            lVar5 = (*(code *)puVar1)(iVar9,lVar4,4);
            if ((lVar4 == -1) || (lVar5 == -1)) {
              _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h320a3f42966bf686E
                        (local_120,local_118);
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_138);
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_13c);
              return 0;
            }
            if ((lVar4 < -1) || (lVar5 < -1)) break;
            local_130 = lVar5;
                    /* try { // try from 0019b417 to 0019b426 has its CatchHandler @ 0019b575 */
            _ZN4core4iter8adapters7step_by15StepBy_LT_I_GT_3new17h10be5d279cda01b9E
                      (&local_108,lVar5 - lVar4,local_128);
            local_d8 = local_f8;
            uStack_d0 = uStack_f0;
            local_e8 = local_108;
            iStack_e4 = iStack_104;
            uStack_e0 = uStack_100;
            uStack_dc = uStack_fc;
            while( true ) {
              uVar6 = local_d8;
              if ((char)uStack_d0 != '\0') {
                uVar6 = 0;
              }
              uStack_d0 = uStack_d0 & 0xffffffffffffff00;
              auVar11 = _ZN89__LT_core__ops__range__Range_LT_T_GT__u20_as_u20_core__iter__range__RangeIteratorImpl_GT_8spec_nth17hb2ca9648191df11eE
                                  (&local_e8,uVar6);
              if ((auVar11 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
              uVar6 = _ZN4core3cmp3Ord3min17he5724570cd2b0d00E
                                ((lVar5 - lVar4) - auVar11._8_8_,local_128);
                    /* try { // try from 0019b482 to 0019b4c1 has its CatchHandler @ 0019b590 */
              auVar12 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_9index_mut17h2dbef9c3b49f89caE
                                  (uVar6,local_118,local_110);
              lVar10 = auVar11._8_8_ + lVar4;
              uVar7 = _ZN3std2os4unix2fs7FileExt13read_exact_at17h9b8d46c56d66108aE
                                (&local_13c,auVar12._0_8_,auVar12._8_8_,lVar10);
              if ((uVar7 != 0) ||
                 (uVar7 = _ZN3std2os4unix2fs7FileExt12write_all_at17h89d9f0be51744c7eE
                                    (&local_138,auVar12._0_8_,auVar12._8_8_,lVar10), uVar7 != 0))
              goto LAB_0019b53d;
            }
          }
          puVar8 = (uint *)(*(code *)PTR___errno_location_002679c8)();
          uVar7 = (ulong)*puVar8 << 0x20 | 2;
LAB_0019b53d:
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h320a3f42966bf686E
                    (local_120,local_118);
          iVar9 = local_138;
        }
      }
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(iVar9);
    }
    else {
      uVar7 = CONCAT44(uStack_dc,uStack_e0);
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_13c);
  }
  return uVar7;
}