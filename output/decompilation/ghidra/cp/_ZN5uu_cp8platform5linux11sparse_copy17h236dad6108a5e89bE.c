ulong _ZN5uu_cp8platform5linux11sparse_copy17h236dad6108a5e89bE
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int __fd;
  ulong uVar7;
  undefined auVar8 [16];
  int local_100;
  int local_fc;
  ulong local_f8;
  long local_f0;
  long local_e8;
  uint local_e0;
  int iStack_dc;
  ulong local_d8;
  undefined8 local_d0;
  ulong local_90;
  undefined8 local_88;
  
  _ZN3std2fs4File4open17h87ebb42518eeb9ffE(&local_e0,param_1,param_2);
  iVar2 = iStack_dc;
  if (local_e0 != 1) {
    local_100 = iStack_dc;
                    /* try { // try from 0019b600 to 0019b60f has its CatchHandler @ 0019b7ba */
    _ZN3std2fs4File6create17h515d4c5b46fc5d80E(&local_e0,param_3,param_4);
    __fd = iStack_dc;
    if ((local_e0 & 1) == 0) {
      local_fc = iStack_dc;
                    /* try { // try from 0019b629 to 0019b6ba has its CatchHandler @ 0019b7b5 */
      (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_e0,&local_100);
      if (local_e0 != 2) {
        local_f8 = local_90;
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9e6c4a291aa92713E
                  (local_90 >> 0x3f,&PTR_DAT_0025e810);
        iVar2 = (*(code *)PTR_ftruncate_00267b30)(__fd,local_f8);
        if (iVar2 < 0) {
          puVar3 = (uint *)(*(code *)PTR___errno_location_002679c8)();
          local_d8 = (ulong)*puVar3 << 0x20 | 2;
        }
        else {
          (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_00267b18)(&local_e0,&local_fc);
          if (local_e0 != 2) {
            _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h451713e6c2a4190aE
                      (&local_e0,local_88,&PTR_DAT_0025e828);
            if (local_f8 != 0) {
              uVar7 = 0;
              do {
                    /* try { // try from 0019b6ee to 0019b750 has its CatchHandler @ 0019b7cc */
                auVar8 = (*(code *)
                           PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h614ade6d36e62b0eE_00267b28
                         )(&local_100,local_d8,local_d0);
                uVar6 = auVar8._8_8_;
                uVar5 = uVar6;
                if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
LAB_0019b759:
                  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h320a3f42966bf686E
                            (CONCAT44(iStack_dc,local_e0),local_d8);
                  local_d8 = uVar5;
                  __fd = local_fc;
                  goto LAB_0019b76a;
                }
                auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h2c9d32cad28cad50E
                                   (0,uVar6,local_d8,local_d0,&PTR_DAT_0025e840);
                lVar4 = auVar8._0_8_;
                local_e8 = lVar4 + auVar8._8_8_;
                local_f0 = lVar4;
                cVar1 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17h634df474c9b6c8b5E
                                  (&local_f0);
                if ((cVar1 != '\0') &&
                   (uVar5 = _ZN3std2os4unix2fs7FileExt12write_all_at17h89d9f0be51744c7eE
                                      (&local_fc,lVar4,auVar8._8_8_,uVar7), uVar5 != 0))
                goto LAB_0019b759;
                uVar7 = uVar7 + uVar6;
              } while (uVar7 < local_f8);
            }
            _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h320a3f42966bf686E
                      (CONCAT44(iStack_dc,local_e0),local_d8);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_fc);
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(local_100);
            return 0;
          }
        }
      }
LAB_0019b76a:
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(__fd);
      iVar2 = local_100;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h35b109c6d943b47bE(iVar2);
  }
  return local_d8;
}